#include "vertex.h"
#include <QDebug>

int getNumFromStr(QString s){
    int ret=0;
    for(int i=0;i<s.size();i++){
        if(s[i].isNumber()){
            ret=ret*10+s[i].digitValue();
        }
    }
    return ret;
}
Vertex::Vertex(QRadioButton* pos_button,int number,int weight,QString name,QString info,vertexType type){
    this->pos_button=pos_button;
    this->VWeight=weight;
    this->info=info;
    this->type=type;
    this->name=name;
    this->number=number;
    this->coordinate=countCoordinate();
    //从节点按钮中获取信息
    QString str=pos_button->text();
    qDebug()<<str;
    if(str.isNull() || str.isEmpty()){
       // qDebug() << " " << pos_button->objectName()<<"：是关节点";
        //隐藏关节点
        pos_button->setVisible(false);
    }
    else{
         QStringList sl=str.split("\n");
             this->name=sl[0];
             this->VWeight=getNumFromStr(sl[1]);
             this->type=this->judgeType(sl[2]);
             pos_button->setText(this->name);

    }
}

vertexType Vertex::judgeType(QString s){
    if(s=="类型:建筑") return building;
    return landscape;
}
void Vertex::vDebug(){
    qDebug()<<"节点名:"<<this->name<<" 对象名："<<this->pos_button->objectName()<<" 类型："<<this->type <<" score:"<<this->VWeight
           <<"节点编号:"<<this->number<<this->coordinate;
}
QString Vertex::NameAndWeight(){
    QString name=this->name+"\n";
    QString score="景色评分 :"+QString::number(this->VWeight);
    return name+score;
}

QPoint Vertex::vPos(){
    return this->coordinate;
}

QString Vertex::InfoInLine()
{
    QString sType="建筑";
    if(this->type==landscape) sType="景点";
    return this->name+'\t'+sType+"\t"+QString::number(this->VWeight);
}

void Vertex::highlightVertex()
{
    this->pos_button->click();
}

QPoint Vertex::countCoordinate(){
    QRect rect=this->pos_button->rect();
    int iconSize=this->pos_button->iconSize().width()/2;
    return QPoint(this->pos_button->pos().x()+iconSize,this->pos_button->pos().y()+0.5*rect.height());
}
void Vertex::recoveryText(){
    if(!this->pos_button->text().isEmpty()){
        QString text=this->name+"\n景色评分:"+QString::number(this->VWeight)+"\n类型:";
        QString sType="建筑";
        if(this->type==landscape) sType="景点";
        this->pos_button->setText(text+sType);
    }
}
