/********************************************************************************
** Form generated from reading UI file 'telaprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipal
{
public:
    QWidget *centralwidget;
<<<<<<< HEAD
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *membros;
    QPushButton *Rep;
=======
    QPushButton *pushButton;
    QPushButton *pushButton_2;
>>>>>>> ac4287af38dd2a589410373d9f83cc6511311cd3
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName(QString::fromUtf8("TelaPrincipal"));
        TelaPrincipal->resize(1302, 610);
        centralwidget = new QWidget(TelaPrincipal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
<<<<<<< HEAD
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(320, 30, 654, 531));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/spp.jpeg")));

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        membros = new QPushButton(widget);
        membros->setObjectName(QString::fromUtf8("membros"));

        verticalLayout->addWidget(membros);

        Rep = new QPushButton(widget);
        Rep->setObjectName(QString::fromUtf8("Rep"));

        verticalLayout->addWidget(Rep);


        verticalLayout_2->addLayout(verticalLayout);

=======
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 120, 80, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 180, 80, 24));
>>>>>>> ac4287af38dd2a589410373d9f83cc6511311cd3
        TelaPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaPrincipal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1302, 22));
        TelaPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaPrincipal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TelaPrincipal->setStatusBar(statusbar);

        retranslateUi(TelaPrincipal);

        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *TelaPrincipal)
    {
<<<<<<< HEAD
        TelaPrincipal->setWindowTitle(QApplication::translate("TelaPrincipal", "Tela Principal", nullptr));
        label->setText(QString());
        membros->setText(QApplication::translate("TelaPrincipal", "Membros", nullptr));
        Rep->setText(QApplication::translate("TelaPrincipal", "Reep\303\272blica", nullptr));
=======
        TelaPrincipal->setWindowTitle(QApplication::translate("TelaPrincipal", "TelaPrincipal", nullptr));
        pushButton->setText(QApplication::translate("TelaPrincipal", "Integrantes", nullptr));
        pushButton_2->setText(QApplication::translate("TelaPrincipal", "REP", nullptr));
>>>>>>> ac4287af38dd2a589410373d9f83cc6511311cd3
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H