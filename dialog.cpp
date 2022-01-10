#include "dialog.h"
#include "ui_dialog.h"
#include<QDebug>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->isReadyPickSite=false;
    this->setOk=false;
    this->move(340,65);
}

Dialog::~Dialog()
{
    delete ui;
    qDebug()<<
    this->newSiteButt;
}

void Dialog::on_pushButton_clicked()
{
    this->isReadyPickSite=true;
    qDebug()<<p;
//    QThread
    if(!this->p.isNull()){
        p.setX(p.x()-430);
        p.setY(p.y()-66);
        ui->x_lineEdit->setText(QString::number(p.x()));//因为地图左上角坐标为（430，66）所以这里用相对坐标表示
        ui->y_lineEdit->setText(QString::number(p.y()));
    }
}


void Dialog::on_buttonBox_accepted()
{
    if( ui->x_lineEdit->text().isEmpty()|| ui->y_lineEdit->text().isEmpty()){
        ui->feedbackLabel->setText("输入不完整，请检查输入");
        return;
    }
    QString name;
    if(ui->siteName->text().isEmpty() ){
        name="undefine";
    }
    else name=ui->siteName->text();
//    int weight=ui->scoreComboBox->itemText()
    QString text;
    QString type="建筑";
    if(this->vType==landscape) type="景点";
    text=name+"\n景色评分:"+QString::number(this->score)+"\n类型:"+type;
    qDebug()<<text;
    this->text=text;
    this->newSiteButt->setText(text);

    this->setOk=true;//防止再次触发点击事件时创建节点；
    this->isReadyPickSite=false;
    qDebug()<<
    this->newSiteButt;
}

void Dialog::on_scoreComboBox_activated(int index)
{
    this->score=index+1;
    qDebug()<<"score index:"<<index;
}

void Dialog::on_typeComboBox_activated(int index)
{
    qDebug()<<"type index:"<<index;
    switch (index) {
    case 0:this->vType=building;
        break;
    case 1:this->vType=landscape;
        break;
    case 2:this->vType=junction;
        break;
    }
}
