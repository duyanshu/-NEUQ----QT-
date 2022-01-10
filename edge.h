#ifndef EDGE_H
#define EDGE_H
#include <QString>

enum edgeType{sidewalk,lane};//人行道、车道
class Edge
{
public:
     QString name;//路名
     double distance;//路径长度
     int EWeight;//景色权重
     int number;//边的序号
     edgeType type;
     Edge();
    Edge(int number,double distance,edgeType type,int EWeight,QString name="undefine");
    bool isSidewalk();
    bool isLane();
private:

};

#endif // EDGE_H
