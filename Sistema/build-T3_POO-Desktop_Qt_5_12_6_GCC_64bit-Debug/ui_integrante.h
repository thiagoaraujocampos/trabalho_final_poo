/********************************************************************************
** Form generated from reading UI file 'integrante.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGRANTE_H
#define UI_INTEGRANTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fechar
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *maxi;
    QPushButton *fechar_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *fechar)
    {
        if (fechar->objectName().isEmpty())
            fechar->setObjectName(QString::fromUtf8("fechar"));
        fechar->resize(745, 600);
        centralwidget = new QWidget(fechar);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 200, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 260, 67, 17));
        maxi = new QPushButton(centralwidget);
        maxi->setObjectName(QString::fromUtf8("maxi"));
        maxi->setGeometry(QRect(510, 210, 89, 25));
        fechar_2 = new QPushButton(centralwidget);
        fechar_2->setObjectName(QString::fromUtf8("fechar_2"));
        fechar_2->setGeometry(QRect(210, 100, 89, 25));
        fechar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(fechar);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 745, 22));
        fechar->setMenuBar(menubar);
        statusbar = new QStatusBar(fechar);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        fechar->setStatusBar(statusbar);

        retranslateUi(fechar);
        QObject::connect(maxi, SIGNAL(clicked()), fechar, SLOT(showMaximized()));

        QMetaObject::connectSlotsByName(fechar);
    } // setupUi

    void retranslateUi(QMainWindow *fechar)
    {
        fechar->setWindowTitle(QApplication::translate("fechar", "Integrante", nullptr));
        pushButton->setText(QApplication::translate("fechar", "PushButton", nullptr));
        label->setText(QApplication::translate("fechar", "TextLabel", nullptr));
        maxi->setText(QApplication::translate("fechar", "maxi", nullptr));
        fechar_2->setText(QApplication::translate("fechar", "fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fechar: public Ui_fechar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGRANTE_H
