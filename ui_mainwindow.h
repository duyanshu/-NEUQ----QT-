/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDo;
    QAction *actionUndo;
    QAction *actionname_Du_Yanshu;
    QAction *actionEmail_2544823286_qq_com;
    QAction *actionReDo;
    QWidget *centralwidget;
    QFrame *MapFrame;
    QLabel *neuq_map;
    QLabel *direction;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_16;
    QRadioButton *radioButton_17;
    QRadioButton *radioButton_18;
    QRadioButton *radioButton_19;
    QRadioButton *radioButton_20;
    QRadioButton *radioButton_21;
    QRadioButton *radioButton_22;
    QRadioButton *radioButton_23;
    QRadioButton *radioButton_24;
    QRadioButton *radioButton_25;
    QRadioButton *radioButton_26;
    QRadioButton *radioButton_27;
    QRadioButton *radioButton_28;
    QRadioButton *radioButton_29;
    QRadioButton *radioButton_30;
    QRadioButton *radioButton_31;
    QRadioButton *radioButton_32;
    QRadioButton *radioButton_33;
    QRadioButton *radioButton_34;
    QRadioButton *radioButton_35;
    QRadioButton *radioButton_36;
    QRadioButton *radioButton_43;
    QRadioButton *radioButton_68;
    QRadioButton *radioButton_69;
    QRadioButton *radioButton_70;
    QRadioButton *radioButton_71;
    QRadioButton *radioButton_72;
    QRadioButton *radioButton_73;
    QRadioButton *radioButton_74;
    QRadioButton *radioButton_75;
    QRadioButton *radioButton_76;
    QRadioButton *radioButton_77;
    QRadioButton *radioButton_78;
    QRadioButton *radioButton_79;
    QRadioButton *radioButton_80;
    QRadioButton *radioButton_81;
    QRadioButton *radioButton_82;
    QRadioButton *radioButton_83;
    QRadioButton *radioButton_84;
    QRadioButton *radioButton_37;
    QRadioButton *radioButton_38;
    QFrame *SiteSearchFrame;
    QPushButton *SiteSearchButton;
    QLineEdit *SearchlineEdit;
    QTextEdit *textSearchEdit;
    QLabel *label;
    QFrame *frame;
    QPushButton *RouteButton;
    QFrame *line;
    QLineEdit *FromLineEdit;
    QLineEdit *TolineEdit;
    QListWidget *listWidget;
    QLabel *label_2;
    QPushButton *AddSite;
    QPushButton *AddWay;
    QPushButton *ModifyWayName;
    QPushButton *ModifySiteName;
    QLabel *label_3;
    QPushButton *displayVName;
    QPushButton *showLaneButt;
    QPushButton *showSidewalkButt;
    QPushButton *showScoreButt;
    QLabel *label_4;
    QRadioButton *distSelected;
    QRadioButton *viewSelected;
    QRadioButton *compreSelected;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1565, 1145);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Northeastern_University_(China)_logo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(32, 32));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../open-file-icon-vector-22894643.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionDo = new QAction(MainWindow);
        actionDo->setObjectName(QString::fromUtf8("actionDo"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionname_Du_Yanshu = new QAction(MainWindow);
        actionname_Du_Yanshu->setObjectName(QString::fromUtf8("actionname_Du_Yanshu"));
        actionEmail_2544823286_qq_com = new QAction(MainWindow);
        actionEmail_2544823286_qq_com->setObjectName(QString::fromUtf8("actionEmail_2544823286_qq_com"));
        actionReDo = new QAction(MainWindow);
        actionReDo->setObjectName(QString::fromUtf8("actionReDo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MapFrame = new QFrame(centralwidget);
        MapFrame->setObjectName(QString::fromUtf8("MapFrame"));
        MapFrame->setGeometry(QRect(430, 40, 1111, 1001));
        MapFrame->setStyleSheet(QString::fromUtf8("QRadioButton{ color: rgb(255, 0, 0); background-color: rgba(255, 255, 255, 0);}"));
        MapFrame->setFrameShape(QFrame::StyledPanel);
        MapFrame->setFrameShadow(QFrame::Raised);
        neuq_map = new QLabel(MapFrame);
        neuq_map->setObjectName(QString::fromUtf8("neuq_map"));
        neuq_map->setGeometry(QRect(-10, 0, 1111, 991));
        neuq_map->setPixmap(QPixmap(QString::fromUtf8(":/images/neuq_map.jpg")));
        neuq_map->setScaledContents(true);
        direction = new QLabel(MapFrame);
        direction->setObjectName(QString::fromUtf8("direction"));
        direction->setGeometry(QRect(0, 0, 151, 131));
        direction->setPixmap(QPixmap(QString::fromUtf8(":/images/direction.png")));
        direction->setScaledContents(true);
        radioButton = new QRadioButton(MapFrame);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(220, 700, 161, 71));
        radioButton_2 = new QRadioButton(MapFrame);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(170, 750, 121, 51));
        radioButton_3 = new QRadioButton(MapFrame);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(440, 540, 121, 51));
        radioButton_4 = new QRadioButton(MapFrame);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(640, 520, 131, 61));
        radioButton_4->setStyleSheet(QString::fromUtf8(""));
        radioButton_4->setAutoExclusive(true);
        radioButton_5 = new QRadioButton(MapFrame);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(480, 260, 111, 51));
        radioButton_6 = new QRadioButton(MapFrame);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(470, 210, 111, 51));
        radioButton_7 = new QRadioButton(MapFrame);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(510, 360, 121, 51));
        radioButton_8 = new QRadioButton(MapFrame);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(620, 210, 111, 51));
        radioButton_9 = new QRadioButton(MapFrame);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setGeometry(QRect(620, 260, 121, 51));
        radioButton_10 = new QRadioButton(MapFrame);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setGeometry(QRect(320, 200, 121, 61));
        radioButton_11 = new QRadioButton(MapFrame);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setGeometry(QRect(410, 270, 111, 61));
        radioButton_12 = new QRadioButton(MapFrame);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));
        radioButton_12->setGeometry(QRect(740, 270, 111, 51));
        radioButton_13 = new QRadioButton(MapFrame);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setGeometry(QRect(840, 260, 121, 51));
        radioButton_14 = new QRadioButton(MapFrame);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));
        radioButton_14->setGeometry(QRect(680, 340, 111, 51));
        radioButton_15 = new QRadioButton(MapFrame);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));
        radioButton_15->setGeometry(QRect(760, 330, 121, 51));
        radioButton_16 = new QRadioButton(MapFrame);
        radioButton_16->setObjectName(QString::fromUtf8("radioButton_16"));
        radioButton_16->setGeometry(QRect(890, 310, 111, 51));
        radioButton_17 = new QRadioButton(MapFrame);
        radioButton_17->setObjectName(QString::fromUtf8("radioButton_17"));
        radioButton_17->setGeometry(QRect(890, 370, 101, 61));
        radioButton_18 = new QRadioButton(MapFrame);
        radioButton_18->setObjectName(QString::fromUtf8("radioButton_18"));
        radioButton_18->setGeometry(QRect(940, 400, 111, 61));
        radioButton_19 = new QRadioButton(MapFrame);
        radioButton_19->setObjectName(QString::fromUtf8("radioButton_19"));
        radioButton_19->setGeometry(QRect(510, 460, 121, 51));
        radioButton_20 = new QRadioButton(MapFrame);
        radioButton_20->setObjectName(QString::fromUtf8("radioButton_20"));
        radioButton_20->setGeometry(QRect(980, 430, 111, 51));
        radioButton_21 = new QRadioButton(MapFrame);
        radioButton_21->setObjectName(QString::fromUtf8("radioButton_21"));
        radioButton_21->setGeometry(QRect(920, 296, 115, 50));
        radioButton_22 = new QRadioButton(MapFrame);
        radioButton_22->setObjectName(QString::fromUtf8("radioButton_22"));
        radioButton_22->setGeometry(QRect(990, 300, 111, 51));
        radioButton_23 = new QRadioButton(MapFrame);
        radioButton_23->setObjectName(QString::fromUtf8("radioButton_23"));
        radioButton_23->setGeometry(QRect(680, 440, 115, 51));
        radioButton_24 = new QRadioButton(MapFrame);
        radioButton_24->setObjectName(QString::fromUtf8("radioButton_24"));
        radioButton_24->setGeometry(QRect(760, 410, 111, 71));
        radioButton_25 = new QRadioButton(MapFrame);
        radioButton_25->setObjectName(QString::fromUtf8("radioButton_25"));
        radioButton_25->setGeometry(QRect(840, 520, 115, 51));
        radioButton_26 = new QRadioButton(MapFrame);
        radioButton_26->setObjectName(QString::fromUtf8("radioButton_26"));
        radioButton_26->setGeometry(QRect(850, 460, 121, 51));
        radioButton_27 = new QRadioButton(MapFrame);
        radioButton_27->setObjectName(QString::fromUtf8("radioButton_27"));
        radioButton_27->setGeometry(QRect(720, 290, 20, 20));
        QFont font;
        font.setPointSize(4);
        radioButton_27->setFont(font);
        radioButton_27->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;}"));
        radioButton_27->setIconSize(QSize(7, 7));
        radioButton_28 = new QRadioButton(MapFrame);
        radioButton_28->setObjectName(QString::fromUtf8("radioButton_28"));
        radioButton_28->setGeometry(QRect(720, 220, 10, 10));
        radioButton_28->setFont(font);
        radioButton_28->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;}"));
        radioButton_28->setIconSize(QSize(7, 7));
        radioButton_29 = new QRadioButton(MapFrame);
        radioButton_29->setObjectName(QString::fromUtf8("radioButton_29"));
        radioButton_29->setGeometry(QRect(530, 290, 20, 20));
        radioButton_29->setFont(font);
        radioButton_29->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;}"));
        radioButton_29->setIconSize(QSize(7, 7));
        radioButton_30 = new QRadioButton(MapFrame);
        radioButton_30->setObjectName(QString::fromUtf8("radioButton_30"));
        radioButton_30->setGeometry(QRect(501, 330, 10, 10));
        radioButton_30->setFont(font);
        radioButton_30->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;}"));
        radioButton_30->setIconSize(QSize(7, 7));
        radioButton_31 = new QRadioButton(MapFrame);
        radioButton_31->setObjectName(QString::fromUtf8("radioButton_31"));
        radioButton_31->setGeometry(QRect(405, 549, 10, 10));
        radioButton_31->setFont(font);
        radioButton_31->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;}"));
        radioButton_31->setIconSize(QSize(7, 7));
        radioButton_32 = new QRadioButton(MapFrame);
        radioButton_32->setObjectName(QString::fromUtf8("radioButton_32"));
        radioButton_32->setGeometry(QRect(440, 580, 20, 20));
        radioButton_32->setFont(font);
        radioButton_32->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;}"));
        radioButton_32->setIconSize(QSize(7, 7));
        radioButton_33 = new QRadioButton(MapFrame);
        radioButton_33->setObjectName(QString::fromUtf8("radioButton_33"));
        radioButton_33->setGeometry(QRect(630, 580, 20, 20));
        radioButton_33->setFont(font);
        radioButton_33->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;}"));
        radioButton_33->setIconSize(QSize(7, 7));
        radioButton_34 = new QRadioButton(MapFrame);
        radioButton_34->setObjectName(QString::fromUtf8("radioButton_34"));
        radioButton_34->setGeometry(QRect(630, 430, 10, 10));
        radioButton_34->setFont(font);
        radioButton_34->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_34->setIconSize(QSize(7, 7));
        radioButton_35 = new QRadioButton(MapFrame);
        radioButton_35->setObjectName(QString::fromUtf8("radioButton_35"));
        radioButton_35->setEnabled(false);
        radioButton_35->setGeometry(QRect(600, 292, 10, 10));
        radioButton_35->setFont(font);
        radioButton_35->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_35->setIconSize(QSize(7, 7));
        radioButton_36 = new QRadioButton(MapFrame);
        radioButton_36->setObjectName(QString::fromUtf8("radioButton_36"));
        radioButton_36->setGeometry(QRect(630, 370, 121, 61));
        radioButton_43 = new QRadioButton(MapFrame);
        radioButton_43->setObjectName(QString::fromUtf8("radioButton_43"));
        radioButton_43->setGeometry(QRect(840, 290, 10, 10));
        radioButton_43->setFont(font);
        radioButton_43->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_43->setIconSize(QSize(7, 7));
        radioButton_68 = new QRadioButton(MapFrame);
        radioButton_68->setObjectName(QString::fromUtf8("radioButton_68"));
        radioButton_68->setGeometry(QRect(846, 330, 10, 10));
        radioButton_68->setFont(font);
        radioButton_68->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_68->setIconSize(QSize(7, 7));
        radioButton_69 = new QRadioButton(MapFrame);
        radioButton_69->setObjectName(QString::fromUtf8("radioButton_69"));
        radioButton_69->setGeometry(QRect(847, 390, 10, 10));
        radioButton_69->setFont(font);
        radioButton_69->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_69->setIconSize(QSize(7, 7));
        radioButton_70 = new QRadioButton(MapFrame);
        radioButton_70->setObjectName(QString::fromUtf8("radioButton_70"));
        radioButton_70->setGeometry(QRect(847, 430, 10, 10));
        radioButton_70->setFont(font);
        radioButton_70->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_70->setIconSize(QSize(7, 7));
        radioButton_71 = new QRadioButton(MapFrame);
        radioButton_71->setObjectName(QString::fromUtf8("radioButton_71"));
        radioButton_71->setGeometry(QRect(257, 615, 10, 10));
        radioButton_71->setFont(font);
        radioButton_71->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_71->setIconSize(QSize(7, 7));
        radioButton_72 = new QRadioButton(MapFrame);
        radioButton_72->setObjectName(QString::fromUtf8("radioButton_72"));
        radioButton_72->setGeometry(QRect(190, 580, 10, 10));
        radioButton_72->setFont(font);
        radioButton_72->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_72->setIconSize(QSize(7, 7));
        radioButton_73 = new QRadioButton(MapFrame);
        radioButton_73->setObjectName(QString::fromUtf8("radioButton_73"));
        radioButton_73->setGeometry(QRect(400, 643, 10, 10));
        radioButton_73->setFont(font);
        radioButton_73->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_73->setIconSize(QSize(7, 7));
        radioButton_74 = new QRadioButton(MapFrame);
        radioButton_74->setObjectName(QString::fromUtf8("radioButton_74"));
        radioButton_74->setGeometry(QRect(160, 670, 10, 10));
        radioButton_74->setFont(font);
        radioButton_74->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_74->setIconSize(QSize(7, 7));
        radioButton_75 = new QRadioButton(MapFrame);
        radioButton_75->setObjectName(QString::fromUtf8("radioButton_75"));
        radioButton_75->setGeometry(QRect(315, 750, 10, 10));
        radioButton_75->setFont(font);
        radioButton_75->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_75->setIconSize(QSize(7, 7));
        radioButton_76 = new QRadioButton(MapFrame);
        radioButton_76->setObjectName(QString::fromUtf8("radioButton_76"));
        radioButton_76->setGeometry(QRect(120, 660, 10, 10));
        radioButton_76->setFont(font);
        radioButton_76->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_76->setIconSize(QSize(7, 7));
        radioButton_77 = new QRadioButton(MapFrame);
        radioButton_77->setObjectName(QString::fromUtf8("radioButton_77"));
        radioButton_77->setGeometry(QRect(120, 757, 10, 10));
        radioButton_77->setFont(font);
        radioButton_77->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_77->setIconSize(QSize(7, 7));
        radioButton_78 = new QRadioButton(MapFrame);
        radioButton_78->setObjectName(QString::fromUtf8("radioButton_78"));
        radioButton_78->setGeometry(QRect(136, 708, 10, 10));
        radioButton_78->setFont(font);
        radioButton_78->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_78->setIconSize(QSize(7, 7));
        radioButton_79 = new QRadioButton(MapFrame);
        radioButton_79->setObjectName(QString::fromUtf8("radioButton_79"));
        radioButton_79->setGeometry(QRect(80, 739, 10, 10));
        radioButton_79->setFont(font);
        radioButton_79->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_79->setIconSize(QSize(7, 7));
        radioButton_80 = new QRadioButton(MapFrame);
        radioButton_80->setObjectName(QString::fromUtf8("radioButton_80"));
        radioButton_80->setGeometry(QRect(199, 737, 10, 10));
        radioButton_80->setFont(font);
        radioButton_80->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_80->setIconSize(QSize(7, 7));
        radioButton_81 = new QRadioButton(MapFrame);
        radioButton_81->setObjectName(QString::fromUtf8("radioButton_81"));
        radioButton_81->setGeometry(QRect(237, 810, 10, 10));
        radioButton_81->setFont(font);
        radioButton_81->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_81->setIconSize(QSize(7, 7));
        radioButton_82 = new QRadioButton(MapFrame);
        radioButton_82->setObjectName(QString::fromUtf8("radioButton_82"));
        radioButton_82->setGeometry(QRect(258, 824, 10, 10));
        radioButton_82->setFont(font);
        radioButton_82->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_82->setIconSize(QSize(7, 7));
        radioButton_83 = new QRadioButton(MapFrame);
        radioButton_83->setObjectName(QString::fromUtf8("radioButton_83"));
        radioButton_83->setGeometry(QRect(253, 765, 10, 10));
        radioButton_83->setFont(font);
        radioButton_83->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_83->setIconSize(QSize(7, 7));
        radioButton_84 = new QRadioButton(MapFrame);
        radioButton_84->setObjectName(QString::fromUtf8("radioButton_84"));
        radioButton_84->setGeometry(QRect(220, 700, 10, 10));
        radioButton_84->setFont(font);
        radioButton_84->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_84->setIconSize(QSize(7, 7));
        radioButton_37 = new QRadioButton(MapFrame);
        radioButton_37->setObjectName(QString::fromUtf8("radioButton_37"));
        radioButton_37->setGeometry(QRect(660, 292, 10, 10));
        radioButton_37->setFont(font);
        radioButton_37->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_37->setIconSize(QSize(7, 7));
        radioButton_38 = new QRadioButton(MapFrame);
        radioButton_38->setObjectName(QString::fromUtf8("radioButton_38"));
        radioButton_38->setGeometry(QRect(530, 210, 10, 10));
        radioButton_38->setFont(font);
        radioButton_38->setStyleSheet(QString::fromUtf8("QRadioButton::indicator{width: 10px;height: 10px;padding-left:5px;}"));
        radioButton_38->setIconSize(QSize(7, 7));
        SiteSearchFrame = new QFrame(centralwidget);
        SiteSearchFrame->setObjectName(QString::fromUtf8("SiteSearchFrame"));
        SiteSearchFrame->setGeometry(QRect(90, 10, 261, 271));
        SiteSearchFrame->setFrameShape(QFrame::StyledPanel);
        SiteSearchFrame->setFrameShadow(QFrame::Raised);
        SiteSearchButton = new QPushButton(SiteSearchFrame);
        SiteSearchButton->setObjectName(QString::fromUtf8("SiteSearchButton"));
        SiteSearchButton->setGeometry(QRect(210, 0, 51, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/SearchIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SiteSearchButton->setIcon(icon2);
        SiteSearchButton->setIconSize(QSize(34, 34));
        SearchlineEdit = new QLineEdit(SiteSearchFrame);
        SearchlineEdit->setObjectName(QString::fromUtf8("SearchlineEdit"));
        SearchlineEdit->setGeometry(QRect(0, 0, 211, 31));
        SearchlineEdit->setClearButtonEnabled(true);
        textSearchEdit = new QTextEdit(SiteSearchFrame);
        textSearchEdit->setObjectName(QString::fromUtf8("textSearchEdit"));
        textSearchEdit->setGeometry(QRect(0, 30, 261, 241));
        textSearchEdit->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 290, 121, 31));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 320, 301, 361));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        RouteButton = new QPushButton(frame);
        RouteButton->setObjectName(QString::fromUtf8("RouteButton"));
        RouteButton->setGeometry(QRect(220, 10, 71, 71));
        RouteButton->setIcon(icon2);
        RouteButton->setIconSize(QSize(66, 66));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 36, 221, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        FromLineEdit = new QLineEdit(frame);
        FromLineEdit->setObjectName(QString::fromUtf8("FromLineEdit"));
        FromLineEdit->setGeometry(QRect(0, 10, 221, 31));
        FromLineEdit->setClearButtonEnabled(true);
        TolineEdit = new QLineEdit(frame);
        TolineEdit->setObjectName(QString::fromUtf8("TolineEdit"));
        TolineEdit->setGeometry(QRect(0, 50, 221, 31));
        TolineEdit->setClearButtonEnabled(true);
        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 80, 291, 281));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 700, 71, 31));
        AddSite = new QPushButton(centralwidget);
        AddSite->setObjectName(QString::fromUtf8("AddSite"));
        AddSite->setGeometry(QRect(90, 730, 141, 41));
        AddWay = new QPushButton(centralwidget);
        AddWay->setObjectName(QString::fromUtf8("AddWay"));
        AddWay->setGeometry(QRect(250, 730, 141, 41));
        ModifyWayName = new QPushButton(centralwidget);
        ModifyWayName->setObjectName(QString::fromUtf8("ModifyWayName"));
        ModifyWayName->setGeometry(QRect(250, 780, 141, 41));
        ModifySiteName = new QPushButton(centralwidget);
        ModifySiteName->setObjectName(QString::fromUtf8("ModifySiteName"));
        ModifySiteName->setGeometry(QRect(90, 780, 141, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 840, 81, 31));
        displayVName = new QPushButton(centralwidget);
        displayVName->setObjectName(QString::fromUtf8("displayVName"));
        displayVName->setGeometry(QRect(90, 850, 141, 41));
        showLaneButt = new QPushButton(centralwidget);
        showLaneButt->setObjectName(QString::fromUtf8("showLaneButt"));
        showLaneButt->setGeometry(QRect(250, 850, 141, 41));
        showSidewalkButt = new QPushButton(centralwidget);
        showSidewalkButt->setObjectName(QString::fromUtf8("showSidewalkButt"));
        showSidewalkButt->setGeometry(QRect(90, 900, 141, 41));
        showScoreButt = new QPushButton(centralwidget);
        showScoreButt->setObjectName(QString::fromUtf8("showScoreButt"));
        showScoreButt->setGeometry(QRect(250, 900, 141, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 950, 311, 21));
        distSelected = new QRadioButton(centralwidget);
        distSelected->setObjectName(QString::fromUtf8("distSelected"));
        distSelected->setGeometry(QRect(100, 300, 115, 19));
        distSelected->setChecked(true);
        viewSelected = new QRadioButton(centralwidget);
        viewSelected->setObjectName(QString::fromUtf8("viewSelected"));
        viewSelected->setGeometry(QRect(190, 300, 115, 19));
        compreSelected = new QRadioButton(centralwidget);
        compreSelected->setObjectName(QString::fromUtf8("compreSelected"));
        compreSelected->setGeometry(QRect(290, 300, 115, 19));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1565, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionname_Du_Yanshu);
        menuFile->addAction(actionEmail_2544823286_qq_com);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\225\205\346\270\270NEUQ", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionDo->setText(QCoreApplication::translate("MainWindow", "Do", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionname_Du_Yanshu->setText(QCoreApplication::translate("MainWindow", "name:Yanshu Du", nullptr));
        actionEmail_2544823286_qq_com->setText(QCoreApplication::translate("MainWindow", "Email:2544823286@qq.com", nullptr));
        actionReDo->setText(QCoreApplication::translate("MainWindow", "ReDo", nullptr));
        neuq_map->setText(QString());
        direction->setText(QString());
        radioButton->setText(QCoreApplication::translate("MainWindow", "\347\247\221\346\212\200\346\245\274\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:5\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\344\272\272\346\226\207\346\245\274\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2325\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\344\275\223\350\202\262\351\246\206\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2326\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "\346\240\241\345\205\255 \345\256\277\350\210\215/\351\243\237\345\240\202\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2326\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "\345\244\247\345\255\246\344\274\232\351\246\206\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:8\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "\347\240\224\347\251\266\347\224\237\345\205\254\345\257\223\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:5\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "\350\245\277\347\257\256\347\220\203\345\234\272\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2326\345\210\206\n"
"\347\261\273\345\236\213\357\274\232\346\231\257\347\202\271", nullptr));
        radioButton_8->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\255\246\351\246\206\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:6\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_9->setText(QCoreApplication::translate("MainWindow", "\350\241\214\346\224\277\346\245\274\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2328\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_10->setText(QCoreApplication::translate("MainWindow", "\351\271\217\350\277\234\345\205\254\345\257\223\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:5\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_11->setText(QCoreApplication::translate("MainWindow", "\351\271\217\350\277\234\351\244\220\345\216\205\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:4\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_12->setText(QCoreApplication::translate("MainWindow", "\347\254\254\344\270\200\351\243\237\345\240\202\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:6\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_13->setText(QCoreApplication::translate("MainWindow", "\345\233\233/\344\270\211\345\217\267\345\205\254\345\257\223\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:5\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_14->setText(QCoreApplication::translate("MainWindow", "\351\270\241\351\270\243\346\271\226\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2329\345\210\206\n"
"\347\261\273\345\236\213\357\274\232\346\231\257\347\202\271", nullptr));
        radioButton_15->setText(QCoreApplication::translate("MainWindow", "\344\270\234\347\257\256\347\220\203\345\234\272\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2326\345\210\206\n"
"\347\261\273\345\236\213\357\274\232\346\231\257\347\202\271", nullptr));
        radioButton_16->setText(QCoreApplication::translate("MainWindow", "\345\234\260\350\264\250\346\245\274\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:5\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_17->setText(QCoreApplication::translate("MainWindow", "\345\237\272\347\241\200\346\245\274\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:5\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_18->setText(QCoreApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:6\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_19->setText(QCoreApplication::translate("MainWindow", "\350\245\277\346\223\215\345\234\272\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2327\345\210\206\n"
"\347\261\273\345\236\213\357\274\232\346\231\257\347\202\271", nullptr));
        radioButton_20->setText(QCoreApplication::translate("MainWindow", "\347\273\274\345\220\210\346\245\274\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:7\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_21->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\346\245\274\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:5\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_22->setText(QCoreApplication::translate("MainWindow", "\344\272\224\345\217\267\345\205\254\345\257\223\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:5\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_23->setText(QCoreApplication::translate("MainWindow", "\347\274\230\347\237\263\345\271\277\345\234\272\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2327\345\210\206\n"
"\347\261\273\345\236\213\357\274\232\346\231\257\347\202\271", nullptr));
        radioButton_24->setText(QCoreApplication::translate("MainWindow", "\344\270\234\346\223\215\345\234\272\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2328\345\210\206\n"
"\347\261\273\345\236\213\357\274\232\346\231\257\347\202\271", nullptr));
        radioButton_25->setText(QCoreApplication::translate("MainWindow", "\345\256\266\345\261\236\345\214\272\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:4\345\210\206\n"
"\347\261\273\345\236\213:\345\273\272\347\255\221", nullptr));
        radioButton_26->setText(QCoreApplication::translate("MainWindow", "\347\276\275\346\257\233\347\220\203/\347\275\221\347\220\203\345\234\272\n"
"\346\231\257\350\211\262\350\257\204\345\210\206\357\274\2326\345\210\206\n"
"\347\261\273\345\236\213\357\274\232\346\231\257\347\202\271", nullptr));
        radioButton_27->setText(QString());
        radioButton_28->setText(QString());
        radioButton_29->setText(QString());
        radioButton_30->setText(QString());
        radioButton_31->setText(QString());
        radioButton_32->setText(QString());
        radioButton_33->setText(QString());
        radioButton_34->setText(QString());
        radioButton_35->setText(QString());
        radioButton_36->setText(QCoreApplication::translate("MainWindow", "\346\262\211\346\200\235\345\271\277\345\234\272\n"
"\346\231\257\350\211\262\350\257\204\345\210\206:10\345\210\206\n"
"\347\261\273\345\236\213\357\274\232\346\231\257\347\202\271", nullptr));
        radioButton_43->setText(QString());
        radioButton_68->setText(QString());
        radioButton_69->setText(QString());
        radioButton_70->setText(QString());
        radioButton_71->setText(QString());
        radioButton_72->setText(QString());
        radioButton_73->setText(QString());
        radioButton_74->setText(QString());
        radioButton_75->setText(QString());
        radioButton_76->setText(QString());
        radioButton_77->setText(QString());
        radioButton_78->setText(QString());
        radioButton_79->setText(QString());
        radioButton_80->setText(QString());
        radioButton_81->setText(QString());
        radioButton_82->setText(QString());
        radioButton_83->setText(QString());
        radioButton_84->setText(QString());
        radioButton_37->setText(QString());
        radioButton_38->setText(QString());
        SiteSearchButton->setText(QString());
        SearchlineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242\346\231\257\347\202\271/\345\273\272\347\255\221  ", nullptr));
        textSearchEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\234\260\345\220\215	\347\261\273\345\236\213	\351\243\216\346\231\257\350\257\204\345\210\206</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\267\257\347\272\277\346\237\245\350\257\242", nullptr));
        RouteButton->setText(QString());
        FromLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\350\265\267\347\202\271", nullptr));
        TolineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\347\273\210\347\202\271", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211", nullptr));
        AddSite->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\345\273\272\347\255\221/\346\231\257\347\202\271", nullptr));
        AddWay->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\201\223\350\267\257", nullptr));
        ModifyWayName->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\345\210\235\345\247\213\345\214\226", nullptr));
        ModifySiteName->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\273\272\347\255\221/\346\231\257\347\202\271\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272", nullptr));
        displayVName->setText(QCoreApplication::translate("MainWindow", "\346\231\257\347\202\271/\345\273\272\347\255\221\345\220\215\347\247\260", nullptr));
        showLaneButt->setText(QCoreApplication::translate("MainWindow", "\350\275\246\350\241\214\351\201\223", nullptr));
        showSidewalkButt->setText(QCoreApplication::translate("MainWindow", "\344\272\272\350\241\214\351\201\223", nullptr));
        showScoreButt->setText(QCoreApplication::translate("MainWindow", "\346\231\257\350\211\262\350\257\204\345\210\206", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\263\250\357\274\232\344\272\272\350\241\214\351\201\223\346\230\276\347\244\272\344\270\215\345\214\205\345\220\253\350\275\246\350\241\214\351\201\223\351\231\204\350\277\221\347\232\204\344\272\272\350\241\214\351\201\223", nullptr));
        distSelected->setText(QCoreApplication::translate("MainWindow", "\350\267\235\347\246\273\344\274\230\345\205\210", nullptr));
        viewSelected->setText(QCoreApplication::translate("MainWindow", "\346\231\257\350\211\262\344\274\230\345\205\210", nullptr));
        compreSelected->setText(QCoreApplication::translate("MainWindow", "\347\273\274\345\220\210", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "\350\201\224\347\263\273\344\275\234\350\200\205", nullptr));
        menuEdit->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
