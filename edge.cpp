#include "edge.h"

Edge::Edge(){

}
Edge::Edge(int number,double distance,edgeType type,int EWeight,QString name){
    this->number=number;
    this->distance=distance;
    this->type=type;
    this->EWeight=EWeight;
    this->name=name;
}

bool Edge::isSidewalk(){
    return this->type==sidewalk;
}
bool Edge::isLane(){
    return this->type==lane;
}
