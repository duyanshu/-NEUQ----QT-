#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QPixmap>
#include <QDebug>
#include <QVector>
#include <QListWidgetItem>
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QMouseEvent>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Dialog *addSiteDialog;
    int fromIndex;
    int toIndex;
    QVector<QLineF> lines;
    void mousePressEvent( QMouseEvent* ev );
    void initGraph();
private:
    void paintEvent(QPaintEvent *event);

private slots:
    void on_displayVName_clicked();

    void on_pushButton_4_clicked();

    void on_showLaneButt_clicked();

    void on_showSidewalkButt_clicked();

    void on_showScoreButt_clicked();

    void on_SearchlineEdit_textChanged(const QString &arg1);

    void on_FromLineEdit_textChanged(const QString &arg1);

    void on_itemSelected(QListWidgetItem *item);

    void on_TolineEdit_textChanged(const QString &arg1);

    void on_RouteButton_clicked();

    void on_AddSite_clicked();

    void refresh();

    void on_AddWay_clicked();

    void on_ModifySiteName_clicked();

    void on_ModifyWayName_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
