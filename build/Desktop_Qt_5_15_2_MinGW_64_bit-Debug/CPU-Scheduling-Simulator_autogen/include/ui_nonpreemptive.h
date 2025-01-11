/********************************************************************************
** Form generated from reading UI file 'nonpreemptive.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NONPREEMPTIVE_H
#define UI_NONPREEMPTIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NonPreemptive
{
public:
    QLabel *label;

    void setupUi(QWidget *NonPreemptive)
    {
        if (NonPreemptive->objectName().isEmpty())
            NonPreemptive->setObjectName(QString::fromUtf8("NonPreemptive"));
        NonPreemptive->resize(1091, 598);
        label = new QLabel(NonPreemptive);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 10, 351, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(NonPreemptive);

        QMetaObject::connectSlotsByName(NonPreemptive);
    } // setupUi

    void retranslateUi(QWidget *NonPreemptive)
    {
        NonPreemptive->setWindowTitle(QCoreApplication::translate("NonPreemptive", "Form", nullptr));
        label->setText(QCoreApplication::translate("NonPreemptive", "Non-Preemptive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NonPreemptive: public Ui_NonPreemptive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NONPREEMPTIVE_H
