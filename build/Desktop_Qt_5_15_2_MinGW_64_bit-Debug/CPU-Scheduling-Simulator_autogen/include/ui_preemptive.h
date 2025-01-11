/********************************************************************************
** Form generated from reading UI file 'preemptive.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREEMPTIVE_H
#define UI_PREEMPTIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Preemptive
{
public:
    QLabel *label;

    void setupUi(QWidget *Preemptive)
    {
        if (Preemptive->objectName().isEmpty())
            Preemptive->setObjectName(QString::fromUtf8("Preemptive"));
        Preemptive->resize(1009, 574);
        label = new QLabel(Preemptive);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 10, 251, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setScaledContents(false);

        retranslateUi(Preemptive);

        QMetaObject::connectSlotsByName(Preemptive);
    } // setupUi

    void retranslateUi(QWidget *Preemptive)
    {
        Preemptive->setWindowTitle(QCoreApplication::translate("Preemptive", "Form", nullptr));
        label->setText(QCoreApplication::translate("Preemptive", "Preemptive", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Preemptive: public Ui_Preemptive {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREEMPTIVE_H
