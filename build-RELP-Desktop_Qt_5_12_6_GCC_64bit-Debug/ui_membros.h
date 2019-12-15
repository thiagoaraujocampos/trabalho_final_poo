/********************************************************************************
** Form generated from reading UI file 'membros.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBROS_H
#define UI_MEMBROS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Membros
{
public:

    void setupUi(QDialog *Membros)
    {
        if (Membros->objectName().isEmpty())
            Membros->setObjectName(QString::fromUtf8("Membros"));
        Membros->resize(630, 383);

        retranslateUi(Membros);

        QMetaObject::connectSlotsByName(Membros);
    } // setupUi

    void retranslateUi(QDialog *Membros)
    {
        Membros->setWindowTitle(QApplication::translate("Membros", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Membros: public Ui_Membros {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBROS_H
