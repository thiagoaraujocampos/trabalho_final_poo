/********************************************************************************
** Form generated from reading UI file 'republica.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPUBLICA_H
#define UI_REPUBLICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Republica
{
public:

    void setupUi(QDialog *Republica)
    {
        if (Republica->objectName().isEmpty())
            Republica->setObjectName(QString::fromUtf8("Republica"));
        Republica->resize(1296, 617);

        retranslateUi(Republica);

        QMetaObject::connectSlotsByName(Republica);
    } // setupUi

    void retranslateUi(QDialog *Republica)
    {
        Republica->setWindowTitle(QApplication::translate("Republica", "Republica", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Republica: public Ui_Republica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPUBLICA_H
