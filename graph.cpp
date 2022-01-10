#include "graph.h"
#include "vertex.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QFile>
#include <QtMath>
#include <QPainter>
#include <QThread>


Graph::Graph(QList<QRadioButton*> RV)
{
    //test
    qDebug() <<"顶点数目"<< RV.size();

    //初始化顶点数组
    int i=0;
            this->V.clear();//*
    for(QRadioButton*but: RV){
        Vertex v(but,i++);
        this->V.push_back(v);
//debug
        v.vDebug();
    }
    //初始化邻接表
//    int size=this->V.size();
//    this->adj=new QList<int>[(size)];
    //边初始化
    this->initEdges();


}


QVector<int> Graph::getNeighbours(int row)
{
    QVector<int> ret;
    for(int j=0;j<this->MG.size();j++){
        if(this->MG[row][j])
            ret.push_back(j);
    }
    return ret;
}

QVector<double> Graph::countScore(QVector<int> path, double disWeight)
{
    QVector<double> scores;
    double comprehension=0,totalWeight=0,totalDist=0,avergeWeight=0;
    int i=0;
    for( i=0;i<path.size();i++){
        totalWeight+=this->V[path[i]].VWeight;
        if(i>0){
            totalDist+=this->getEdge(path[i-1],path[i]).distance;
            totalWeight+=this->getEdge(path[i-1],path[i]).EWeight;
        }
    }
    avergeWeight=1.0*totalWeight/(2*i-1);   //风景的平均权重
    comprehension=-1*avergeWeight*(1-disWeight)+totalDist*0.01*disWeight;//风景的权重加负号是为了变成越小越好，方便排序
    scores.push_back(comprehension);
    scores.push_back(totalDist);
    scores.push_back(totalWeight);
    scores.push_back(avergeWeight);
    return scores;
}

int Graph::partition(QVector<QVector<int> > &paths, int low, int height, double disWeight)
{
    double pivotScore=this->countScore(paths[height],disWeight)[0];
    int j=low;
    for(int i=low;i<height;i++){
        if(this->countScore(paths[i],disWeight)[0]<pivotScore){
            if(i!=j) swap(paths[j],paths[i]);
            j++;
        }
    }
    swap(paths[j],paths[height]);
    return j;
}

void Graph::swap(QVector<int> &path1, QVector<int> &path2)
{
    QVector<int> temp=path1;
    path1=path2;
    path2=temp;
}

bool Graph::isJunction(int v)
{
    return this->V[v].type==junction;
}
int* Graph::createEdge(QString s){
    QStringList sl=s.split(' ');
    static int k=1;//记录在邻接矩阵中边的索引
    int from=sl[0].toInt();

    for(int i=1;i<sl.size();i+=3){
        int to=sl[i].toInt();
//        this->adj[from].push_back(to);
        //边可能已经读过
        if(from>to){
            qDebug()<<"节点"<<from<<"到节点"<<to<<"的距离为"<<this->getEdge(to,from).distance<<"米"
                   <<",边的索引为："<<this->MG[to][from];
            this->MG[from][to]=this->MG[to][from];
            continue;
        }
        int NumType=sl[i+1].toInt();
         int weight=sl[i+2].toInt();

        edgeType type=lane;
        qDebug()<<"读入from:"<<from<<" to:"<<to<<" type:"<<NumType<<" weight:"<<weight;
        if(NumType==0) type=sidewalk;
        Edge e(k,this->lineDist(from,to),type,weight);
        qDebug()<<"节点"<<from<<"到节点"<<to<<"的距离为"<<e.distance<<"米"<<",边的索引为："<<k;
        this->MG[from][to]=k;//记录边的索引
        k++;
        this->Edges.push_back(e);
    }
    return &k;
}

int Graph::KMPSearch(QString s, QString p)
{
    int n = s.size(), m = p.size();
    if(m == 0) return 0;
    //设置哨兵
    s.insert(0,' ');
    p.insert(0,' ');
    QVector<int> next(m + 1);
    //预处理next数组
    for(int i = 2, j = 0; i <= m; i++){
        while(j && p[i] != p[j + 1]) j = next[j];
        if(p[i] == p[j + 1]) j++;
        next[i] = j;
    }
    //匹配过程
    for(int i = 1, j = 0; i <= n; i++){
        while(j && s[i] != p[j + 1]) j = next[j];
        if(s[i] == p[j + 1]) j++;
        if(j == m) return i - m;
    }
    return -1;

}

void Graph::initEdges(){
    this->Edges.push_back(Edge()); //不使用索引为0的位置，即该数组索引从1开始

    //邻接矩阵先初始化为0
    for(int i=0;i<this->V.size();i++){
        QVector<int> row(this->V.size(),0);
        this->MG.push_back(row);
    }
    //读入邻接的边,如果当面目录下有新文件，则读入新文件，否则读入编译过的文件
    QString fileName="newEdgeInf.txt";
    QFile newFile(fileName);

    if(!newFile.open(QIODevice::ReadOnly| QIODevice::Text)){
        qDebug()<<fileName<<"文件打开失败";
        fileName=":/EdgeInf.txt";
    }
    else newFile.close();
    QFile file(fileName);
    file.open(QIODevice::ReadOnly| QIODevice::Text);
    QTextStream in(&file);
    int *p=NULL;
    while(!in.atEnd()){
        QString line=in.readLine();
        p=createEdge(line);
    }
    *p=1;
    file.close();

}

double Graph::lineDist(int from, int to){
    QPoint p1=this->V[from].vPos();
    QPoint p2=this->V[to].vPos();
    p1-=p2;
//    qDebug()<<"p("<<p1.x()<<","<<p1.y()<<")";
    return 1.2*qSqrt(p1.x()*p1.x()+p1.y()*p1.y());
}

Edge Graph::getEdge(int from,int to){
    return this->Edges[this->MG[from][to]];
}
void Graph::showBuilding(){
    for(Vertex v:this->V){
        if(v.type!=building) v.pos_button->setVisible(false);
        else v.pos_button->setVisible(true);
    }
}
void Graph::showLandscape(){
    for(Vertex v:this->V){
        if(v.type!=landscape) v.pos_button->setVisible(false);
        else v.pos_button->setVisible(true);
    }
}
void Graph::showAllVertex(){
    for(Vertex v:this->V){
        if(v.type!=junction)
             v.pos_button->setVisible(true);
    }
}
void Graph::showVWeight(){
    for(Vertex v:this->V){
        v.pos_button->setText(v.NameAndWeight());
    }
}
void Graph::showVertexName(){
    for(Vertex v:this->V){
        v.pos_button->setText(v.name);
    }
}

QVector<QLineF> Graph::getSidewalks()
{
    QVector<QLineF>v;
    for(int i=0;i<this->MG.size();i++){
        for(int j=i+1;j<this->MG.size();j++){
            if(this->isSidewalk(i,j))
            {
                v.push_back(QLineF(this->V[i].vPos(),this->V[j].vPos()));
            }
        }
    }
    return v;
}

QVector<QLineF> Graph::getLanes(){
    QVector<QLineF>v;
    for(int i=0;i<this->MG.size();i++){
        for(int j=i+1;j<this->MG.size();j++){
            if(this->isLane(i,j))
            {
                v.push_back(QLineF(this->V[i].vPos(),this->V[j].vPos()));
            }
        }
    }
    return v;
}

QVector<QLineF> Graph::getPath(int NumOfPath)
{
    QVector<int> path=this->lastSearchPaths[NumOfPath-1];
    QVector<QLineF> lines;
    for(int i=1;i<path.size();i++){
        lines.push_back(QLineF(this->V[path[i-1]].vPos(),this->V[path[i]].vPos()));
    }
    return lines;
}

QVector<QString> Graph::searchAllByName(QString s)
{
    QVector<QString> res;
    //初始化所有节点按钮取消选择
    for(Vertex v:this->V){
        if(v.type!=junction ){
            v.pos_button->setChecked(false);
            v.pos_button->setAutoExclusive(true);
        }
    }
    if(s.isEmpty()) return res;
    int i=0;
    for(Vertex v:this->V){
        if(v.type!=junction)
            if(this->KMPSearch(v.name,s)!=-1){
                res.push_back(v.InfoInLine());
                v.pos_button->setAutoExclusive(false);
                v.highlightVertex();
                this->lastSearch=i;
            }
        i++;
    }
    return  res;
}

void Graph::sortPaths(QVector<QVector<int>> &paths,int low,int height,double disWeight)
{
    //算法思想：将距离除以一百乘以权重，加上景色取负数乘以权重，统一按从小到大排序
    if(low<height){
        int partition=this->partition(paths,low,height,disWeight);
        sortPaths(paths,low,partition-1,disWeight);
        sortPaths(paths,partition+1,height,disWeight);
    }

}

QVector<QString> Graph::showPaths(int src, int dest, double disWeight)
{
    QVector<QString> ret;
    QVector<QVector<int>> paths=this->findAllPaths(src,dest);
    this->sortPaths(paths,0,paths.size()-1,disWeight);
    QVector<int> pre,dist;
    this->dijkstra(src,pre,dist);
//    paths[0].clear();
    QVector<int> newPath;
    newPath.push_back(dest);
//    paths[0].push_back(dest);
    for(int i=pre[dest];i!=src;i=pre[i]){
//        paths[0].push_front(i);
        newPath.push_front(i);
    }
//    paths[0].push_front(src);
    newPath.push_front(src);
    if(paths.size()>0)
        paths.replace(0,newPath);
    else paths.push_back(newPath);
    int i=1;
    for(auto path:paths){
        ret.push_back(QString::number(i)+"\t"+this->showPath(path));
        i++;
    }
    this->lastSearchPaths=paths;
    return ret;
}

QString Graph::showPath(QVector<int> vertices)
{
    QVector<double> scores=this->countScore(vertices);
    return QString::number(scores[1])+"\t"+QString::number(scores[2])+'\t'+QString::number(scores[3]);
}

QVector<QVector<int> > Graph::findAllPaths(int src, int dest)
{
    QVector<QVector<int> > paths;
    QVector<int> vertices;
    QVector<bool> visited(this->V.size(),false);
    this->src=src;
    DFS(src,dest,visited,vertices,paths);
    return paths;
}

void Graph::DFS(int src, int dest, QVector<bool> &visited, QVector<int> &vertices, QVector<QVector<int> > &paths)
{

    vertices.push_back(src);
//    QThread::msleep(300);
    visited[src]=true;
    if(src==dest){
        paths.push_back(vertices);
        visited[src]=false;
        vertices.pop_back();
        return ;
    }
   if(!this->isJunction(src) && this->src!=src) return;
    else{
       int j=0;
        for(int neighbour:this->getNeighbours(src)){
            if(!visited[neighbour]){
                if(j>5) break;
                DFS(neighbour,dest,visited,vertices,paths);
            }
        }
    }
   visited[src]=false;
   vertices.pop_back();
}

bool Graph::isEdge(int from,int to){
    return this->MG[from][to];
}

bool Graph::isLane(int from, int to)
{
    return this->isEdge(from,to) && this->getEdge(from,to).isLane();
}

bool Graph::isSidewalk(int from, int to)
{
    return this->isEdge(from,to) && this->getEdge(from,to).isSidewalk();
}

int Graph::minDistance(QVector<int> dist, bool sptSet[])
{

    // Initialize min value
    int min = INT_MAX, min_index;

    for (int v = 0; v <dist.size() ; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

void Graph::dijkstra(int src,QVector<int> &pre,QVector<int>& dist)
{
    int size=this->V.size();
    pre.resize(size);
    dist.resize(size);
    bool sptSet[size]; // 如果顶点i包含在最短的路径中，对应的值为真

    for (int i = 0; i < size; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    dist[src] = 0;

    for (int count = 0; count < size - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;
        for (int v = 0; v < size; v++)
            if (!sptSet[v] && this->MG[u][v] && dist[u] != INT_MAX
                && dist[u] + this->getEdge(u,v).distance < dist[v]){
                dist[v] = dist[u] + this->getEdge(u,v).distance;
                pre[v]=u;
            }
    }
}
void Graph::recoveryText(){
    for(Vertex v:this->V){
        v.recoveryText();
    }
}
