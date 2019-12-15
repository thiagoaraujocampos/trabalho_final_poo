/********************************************************************************
** Form generated from reading UI file 'teste.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTE_H
#define UI_TESTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_teste
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton;

    void setupUi(QDialog *teste)
    {
        if (teste->objectName().isEmpty())
            teste->setObjectName(QString::fromUtf8("teste"));
        teste->resize(400, 300);
        buttonBox = new QDialogButtonBox(teste);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton = new QPushButton(teste);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 140, 89, 25));

        retranslateUi(teste);
        QObject::connect(buttonBox, SIGNAL(accepted()), teste, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), teste, SLOT(reject()));

        QMetaObject::connectSlotsByName(teste);
    } // setupUi

    void retranslateUi(QDialog *teste)
    {
        teste->setWindowTitle(QApplication::translate("teste", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("teste", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teste: public Ui_teste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTE_H
