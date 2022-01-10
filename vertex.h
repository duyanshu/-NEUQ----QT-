#ifndef VERTEX_H
#define VERTEX_H
#include <QString>
#include <QRadioButton>

enum vertexType{building,landscape,junction};//顶点类型分为建筑、景点，关节点（拐角）
class Vertex
{
public:
    int number;//节点编号
    QString info;
    int VWeight; //景色权重
    QString name;
    vertexType type;
    QRadioButton* pos_button;
    QPoint coordinate;//坐标

    Vertex(QRadioButton* pos_button,int number,int weight=5,QString name="undefine",QString info="undefine",vertexType type=junction );
    void vDebug();
    QString NameAndWeight();
    QPoint vPos();
    QString InfoInLine();
    void highlightVertex();//节点高亮显示
    void recoveryText();
private:
    vertexType judgeType(QString s);
    QPoint countCoordinate();
};

#endif // VERTEX_H
