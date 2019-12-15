/********************************************************************************
** Form generated from reading UI file 'integrantes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTEGRANTES_H
#define UI_INTEGRANTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_integrantes
{
public:

    void setupUi(QDialog *integrantes)
    {
        if (integrantes->objectName().isEmpty())
            integrantes->setObjectName(QString::fromUtf8("integrantes"));
        integrantes->resize(400, 300);

        retranslateUi(integrantes);

        QMetaObject::connectSlotsByName(integrantes);
    } // setupUi

    void retranslateUi(QDialog *integrantes)
    {
        integrantes->setWindowTitle(QApplication::translate("integrantes", "Integrantes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class integrantes: public Ui_integrantes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTEGRANTES_H
