/********************************************************************************
** Form generated from reading UI file 'samp2_1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMP2_1_H
#define UI_SAMP2_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_samp2_1Class
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *samp2_1Class)
    {
        if (samp2_1Class->objectName().isEmpty())
            samp2_1Class->setObjectName(QStringLiteral("samp2_1Class"));
        samp2_1Class->resize(600, 400);
        pushButton = new QPushButton(samp2_1Class);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(430, 300, 71, 61));
        QFont font;
        font.setFamily(QStringLiteral("AR BONNIE"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        label = new QLabel(samp2_1Class);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 70, 261, 111));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(48);
        label->setFont(font1);

        retranslateUi(samp2_1Class);
        QObject::connect(pushButton, SIGNAL(clicked()), samp2_1Class, SLOT(close()));

        QMetaObject::connectSlotsByName(samp2_1Class);
    } // setupUi

    void retranslateUi(QWidget *samp2_1Class)
    {
        samp2_1Class->setWindowTitle(QApplication::translate("samp2_1Class", "samp2_1", Q_NULLPTR));
        pushButton->setText(QApplication::translate("samp2_1Class", "\345\205\263\351\227\255", Q_NULLPTR));
        label->setText(QApplication::translate("samp2_1Class", "\346\202\250\345\245\275qt", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class samp2_1Class: public Ui_samp2_1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMP2_1_H
