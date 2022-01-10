#ifndef DIALOG_H
#define DIALOG_H
#include "vertex.h"
#include <QDialog>
#include <QRadioButton>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    QPoint p;
    bool isReadyPickSite;
    QRadioButton* newSiteButt;
    Vertex* newV;
    bool setOk;
    int existVNum;
    int score;
    vertexType vType;
    QList<QRadioButton *>* butt;
    QString text;


public slots:
    void on_pushButton_clicked();
private slots:
    void on_buttonBox_accepted();

    void on_scoreComboBox_activated(int index);

    void on_typeComboBox_activated(int index);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
