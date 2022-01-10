/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *feedbackLabel;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *siteName;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *scoreComboBox;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *typeComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *x_lineEdit;
    QLineEdit *y_lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        feedbackLabel = new QLabel(Dialog);
        feedbackLabel->setObjectName(QString::fromUtf8("feedbackLabel"));
        feedbackLabel->setGeometry(QRect(30, 210, 331, 31));
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 351, 191));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        siteName = new QLineEdit(widget);
        siteName->setObjectName(QString::fromUtf8("siteName"));

        horizontalLayout_4->addWidget(siteName);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        scoreComboBox = new QComboBox(widget);
        scoreComboBox->addItem(QString());
        scoreComboBox->addItem(QString());
        scoreComboBox->addItem(QString());
        scoreComboBox->addItem(QString());
        scoreComboBox->addItem(QString());
        scoreComboBox->addItem(QString());
        scoreComboBox->addItem(QString());
        scoreComboBox->addItem(QString());
        scoreComboBox->addItem(QString());
        scoreComboBox->addItem(QString());
        scoreComboBox->setObjectName(QString::fromUtf8("scoreComboBox"));

        horizontalLayout_3->addWidget(scoreComboBox);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        typeComboBox = new QComboBox(widget);
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->addItem(QString());
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));

        horizontalLayout->addWidget(typeComboBox);


        horizontalLayout_5->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        x_lineEdit = new QLineEdit(widget);
        x_lineEdit->setObjectName(QString::fromUtf8("x_lineEdit"));

        horizontalLayout_2->addWidget(x_lineEdit);

        y_lineEdit = new QLineEdit(widget);
        y_lineEdit->setObjectName(QString::fromUtf8("y_lineEdit"));

        horizontalLayout_2->addWidget(y_lineEdit);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\346\267\273\345\212\240\350\212\202\347\202\271", nullptr));
        feedbackLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("Dialog", "\350\212\202\347\202\271\345\220\215\357\274\232", nullptr));
        siteName->setPlaceholderText(QCoreApplication::translate("Dialog", "\345\205\263\350\212\202\347\202\271\345\217\257\344\270\215\345\241\253", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\346\231\257\350\211\262\350\257\204\345\210\206\357\274\232", nullptr));
        scoreComboBox->setItemText(0, QCoreApplication::translate("Dialog", "1\345\210\206", nullptr));
        scoreComboBox->setItemText(1, QCoreApplication::translate("Dialog", "2\345\210\206", nullptr));
        scoreComboBox->setItemText(2, QCoreApplication::translate("Dialog", "3\345\210\206", nullptr));
        scoreComboBox->setItemText(3, QCoreApplication::translate("Dialog", "4\345\210\206", nullptr));
        scoreComboBox->setItemText(4, QCoreApplication::translate("Dialog", "5\345\210\206", nullptr));
        scoreComboBox->setItemText(5, QCoreApplication::translate("Dialog", "6\345\210\206", nullptr));
        scoreComboBox->setItemText(6, QCoreApplication::translate("Dialog", "7\345\210\206", nullptr));
        scoreComboBox->setItemText(7, QCoreApplication::translate("Dialog", "8\345\210\206", nullptr));
        scoreComboBox->setItemText(8, QCoreApplication::translate("Dialog", "9\345\210\206", nullptr));
        scoreComboBox->setItemText(9, QCoreApplication::translate("Dialog", "10\345\210\206", nullptr));

        label->setText(QCoreApplication::translate("Dialog", "\350\212\202\347\202\271\347\261\273\345\236\213\357\274\232", nullptr));
        typeComboBox->setItemText(0, QCoreApplication::translate("Dialog", "\345\273\272\347\255\221", nullptr));
        typeComboBox->setItemText(1, QCoreApplication::translate("Dialog", "\346\231\257\347\202\271", nullptr));
        typeComboBox->setItemText(2, QCoreApplication::translate("Dialog", "\345\205\263\350\212\202\347\202\271", nullptr));

        label_2->setText(QCoreApplication::translate("Dialog", "\350\212\202\347\202\271\345\235\220\346\240\207\357\274\232", nullptr));
        x_lineEdit->setPlaceholderText(QCoreApplication::translate("Dialog", "x\345\235\220\346\240\207", nullptr));
        y_lineEdit->setPlaceholderText(QCoreApplication::translate("Dialog", "y\345\235\220\346\240\207", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\345\233\276\344\270\212\351\200\211\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
