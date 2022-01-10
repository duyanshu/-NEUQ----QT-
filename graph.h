#ifndef GRAPH_H
#define GRAPH_H
#include "edge.h"
#include "vertex.h"
#include <QVector>
#include "mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Graph
{
public:
    QVector<Edge> Edges; //边节点数组，索引从1开始
    QVector<Vertex> V;//顶点
    QVector<QVector<int>> MG;//图的邻接矩阵
    Graph(QList<QRadioButton*> RV);
    QVector<QVector<int>> lastSearchPaths;//保存最近一次搜索的路径，方便查询
    int lastSearch;//最近一次搜索的节点编号,得知起点和终点编号
    int src;//起点
    bool isJunction(int v);
    bool isEdge(int from,int to);
    bool isLane(int from,int to);
    bool isSidewalk(int from ,int to);
    Edge getEdge(int from,int to);
    void showBuilding();//显示建筑
    void showLandscape();//显示景点
    void showAllVertex();//显示除了关节点外的节点
    void showVWeight();//展示权重
    void showVertexName();
    QVector<QLineF> getSidewalks();//人行道高亮
    QVector<QLineF> getLanes();//车道高亮
    QVector<QLineF> getPath(int NumOfPath);
    QVector<QString> searchAllByName(QString s);//在节点名字中的字串搜索，返回所有匹配的节点信息
    void sortPaths(QVector<QVector<int>> &paths,int low,int height,double disWeight=1);//设置权重，距离权重为1时，按距离小的排序，景色权重为1-disWeight,内置快排算法
    QVector<QString> showPaths(int src,int dest,double disWeight=1);
    QString showPath(QVector<int> vertices);
    QVector<QVector<int>> findAllPaths(int src,int dest);
    void recoveryText();
private:
    void initEdges();
    double lineDist(int from,int to);//计算直线距离，用于边初始化
    int* createEdge(QString s);
    int  KMPSearch(QString s, QString p); //kmp算法进行模式匹配，匹配成功返回txt中的起始索引，失败返回-1
    void DFS(int src,int dest,QVector<bool> &visited,QVector<int> &vertices,QVector<QVector<int>> &paths);
    QVector<int> getNeighbours(int row);
    QVector<double> countScore(QVector<int> path,double disWeight=1);//o:综合，1，总距离，2，总景色权重，3，平均景色权重
    int partition(QVector<QVector<int>> &paths,int low,int height,double disWeight=1);
    void swap(QVector<int> &path1,QVector<int> &path2);
    void dijkstra(int src,QVector<int> &pre,QVector<int>& dist);
    int minDistance(QVector<int>dist, bool sptSet[]);

};

#endif // GRAPH_H
