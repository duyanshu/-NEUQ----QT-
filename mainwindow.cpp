#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "graph.h"
#include <QPainter>
#include <QThread>
#include <QProcess>

Graph *MG;
QList<QRadioButton *> butts;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->neuq_map->clear();
   this->fromIndex=-1;
    this->toIndex=-1;
    //获取顶点，传给构造函数进行初始化
    butts = ui->MapFrame->findChildren<QRadioButton *>();
    initGraph();

    QObject::connect(ui->listWidget,SIGNAL(itemClicked(QListWidgetItem *)),this,SLOT(on_itemSelected(QListWidgetItem *)));

    addSiteDialog=new Dialog(this);
    addSiteDialog->butt=&butts;
    connect(ui->AddSite,SIGNAL(clicked()),addSiteDialog,SLOT(show()));
    connect(addSiteDialog,SIGNAL(accepted()),this,SLOT(refresh()));

}
void MainWindow::refresh(){
    MG->recoveryText();
    QThread::msleep(500);
    butts.push_back(this->addSiteDialog->newSiteButt);

    qDebug()<<"新节点的文本："<<butts.last()->text();
    initGraph();
}
void MainWindow::initGraph(){
//    QList<QRadioButton *> butts = ui->MapFrame->findChildren<QRadioButton *>();

    MG=new Graph(butts);
}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_displayVName_clicked()
{
    static int i=0;
    i%=3;
    switch (i) {
    case 0:MG->showLandscape();
        break;
    case 1:MG->showBuilding();
        break;
    case 2:MG->showAllVertex();
        break;
    }
    i++;
}

void MainWindow::on_pushButton_4_clicked()
{
    static int i=1;
    if(i%2)
         MG->showVWeight();
    else MG->showVertexName();
    i++;
}
void MainWindow::paintEvent(QPaintEvent *){
    QImage image(":/images/neuq_map.jpg");
    QRect rect=ui->neuq_map->rect();
    QPainter painter(this);
//    this->event=Event;
    QPen paintpan(Qt::green);
    paintpan.setWidth(3);
    painter.setPen(paintpan);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.translate(430,66);
    painter.drawImage(rect,image);
    painter.drawLines(this->lines);
//    if(this->addSiteDialog->setOk) initGraph();
}

void MainWindow::mousePressEvent(QMouseEvent *ev)
{
//    qDebug()<<"mousePressed";

    QString x = QString::number(ev->x());
    QString y = QString::number(ev->y());
    qDebug() << x << "," << y;
    static QRadioButton* newSiteButt=NULL;
//    qDebug()<<newSiteButt;
    if(!this->addSiteDialog->setOk)
        delete newSiteButt;
    if(addSiteDialog->isReadyPickSite) {
        this->addSiteDialog->p=ev->pos();
        this->addSiteDialog->on_pushButton_clicked();
        newSiteButt=new QRadioButton(ui->MapFrame);
        newSiteButt->move(this->addSiteDialog->p);
        newSiteButt->setText("新节点\n景色评分:5\n类型:建筑");
        newSiteButt->show();
        this->addSiteDialog->newSiteButt=newSiteButt;
        this->addSiteDialog->existVNum=MG->MG.size();

    }
//    qDebug()<<this->addSiteDialog->p;
}
void MainWindow::on_showLaneButt_clicked()
{
    static int flag=1;
    if(flag%2){
        this->lines=MG->getLanes();
    }else{
        this->lines.clear();
    }
    update();
    flag++;
}

void MainWindow::on_showSidewalkButt_clicked()
{
    static int flag=1;
    if(flag%2){
        this->lines=MG->getSidewalks();
    }else{
        this->lines.clear();
    }
    update();
    flag++;
}

void MainWindow::on_showScoreButt_clicked()
{
    static int flag=1;
    if(flag%2){
        MG->showVWeight();
    }else{
        MG->showVertexName();
    }
    update();
    flag++;
}

void MainWindow::on_SearchlineEdit_textChanged(const QString &arg1)
{
    QVector<QString> v;

    ui->textSearchEdit->setText("地名	类型	风景评分");
    v=MG->searchAllByName(arg1);

    if(v.empty()){
        if(arg1.isEmpty())
            ui->textSearchEdit->setText("地名	类型	风景评分");
        else
            ui->textSearchEdit->setText("抱歉，没有找到该建筑或景点，请检查输入是否有误！");
    }
    for(QString s:v){
        ui->textSearchEdit->append("\n"+s);
    }

}

void MainWindow::on_FromLineEdit_textChanged(const QString &arg1)
{
    QVector<QString> v;
    ui->TolineEdit->setCursorPosition(0);
    v=MG->searchAllByName(arg1);
    ui->listWidget->clear();
    if(v.empty()){
        if(!arg1.isEmpty())
            ui->listWidget->addItem("抱歉，没有找到该建筑或景点，请检查输入是否有误！");
    }
    else{
        ui->listWidget->addItem("地名	类型	风景评分");
        for(QString s:v){
            ui->listWidget->addItem(s);
        }
        //完成起点输入且输入完整、唯一
        if(v.size()==1 && v[0].split('\t')[0]==arg1){
            fromIndex=MG->lastSearch;
            qDebug()<<"起点："<<fromIndex;
        }
        else this->fromIndex=-1;//输入不完整时，禁用路径搜素
    }
}

void MainWindow::on_itemSelected(QListWidgetItem *item)
{
    QString s=item->text();
    QStringList sl=s.split('\t');
    if(this->fromIndex==-1 && ui->FromLineEdit->cursorPosition()!=0)
        ui->FromLineEdit->setText(sl[0]);
    if(this->toIndex==-1 && ui->TolineEdit->cursorPosition()!=0)
        ui->TolineEdit->setText(sl[0]);
    else{
        bool isNum=false;
        int number=sl[0].toInt(&isNum);
        if(isNum){
            this->lines.clear();
            this->lines=MG->getPath(number);
            update();
        }
    }
}

void MainWindow::on_TolineEdit_textChanged(const QString &arg1)
{
    QVector<QString> v;
    ui->FromLineEdit->setCursorPosition(0);
    v=MG->searchAllByName(arg1);
    ui->listWidget->clear();
    if(v.empty()){
        if(!arg1.isEmpty())
            ui->listWidget->addItem("抱歉，没有找到该建筑或景点，请检查输入是否有误！");
    }
    else{
        ui->listWidget->addItem("地名	类型	风景评分");
        for(QString s:v){
            ui->listWidget->addItem(s);
        }
        //完成终点输入且输入完整、唯一
        if(v.size()==1 && v[0].split('\t')[0]==arg1){
            toIndex=MG->lastSearch;
            qDebug()<<"终点："<<toIndex;
        }
        else this->toIndex=-1;//输入不完整时，禁用路径搜素
    }
}

void MainWindow::on_RouteButton_clicked()
{
    if(this->fromIndex==-1||this->toIndex==-1){
        ui->listWidget->addItem("输入不完整，请检查输入");
        return;
    }
    //lines用于画路线图
    this->lines.clear();
    ui->listWidget->clear();
    //综合排序时用到distWeight
    double distWeight=1;
    if(ui->viewSelected->isChecked()) distWeight=0;
    else if(ui->compreSelected->isChecked()) distWeight=0.5;

    QVector<QString> v;
    v=MG->showPaths(this->fromIndex,this->toIndex,distWeight);
    qDebug()<<"weight"<<distWeight;
    ui->listWidget->addItem("排名 总距离(米)  风景总分    风景均分");
    for(QString s:v){
        ui->listWidget->addItem(s);
    }
}

void MainWindow::on_AddSite_clicked()
{
    qDebug()<<"添加节点";

//    QPushButton *button = new QPushButton("Push to open new dialog", this);

}

void MainWindow::on_AddWay_clicked()
{

    static int flag=1;
    if(flag%2){
        ui->AddWay->setText("联系管理员添加");
    }else ui->AddWay->setText("添加道路");
    flag++;
}

void MainWindow::on_ModifySiteName_clicked()
{
    static int flag=1;
    if(flag%2){
        ui->ModifySiteName->setText("联系管理员修改");
    }else ui->ModifySiteName->setText("修改建筑/景点名称");
    flag++;
}

void MainWindow::on_ModifyWayName_clicked()
{
    qDebug()<<"init button clicked";
    //重启
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}
