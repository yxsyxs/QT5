/********************************************************************************
** Form generated from reading UI file 'Serial1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL1_H
#define UI_SERIAL1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serial1Class
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QFrame *frame_2;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QPushButton *pushButton_3;
    QCheckBox *checkBox;
    QFrame *frame_3;
    QPushButton *pushButton_2;
    QCheckBox *checkBox_2;

    void setupUi(QWidget *Serial1Class)
    {
        if (Serial1Class->objectName().isEmpty())
            Serial1Class->setObjectName(QStringLiteral("Serial1Class"));
        Serial1Class->resize(419, 405);
        Serial1Class->setAutoFillBackground(false);
        frame = new QFrame(Serial1Class);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 241, 381));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 71, 16));
        label->setAutoFillBackground(false);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 260, 61, 16));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(3, 280, 241, 111));
        textEdit_2 = new QTextEdit(frame);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(0, 30, 241, 221));
        frame_2 = new QFrame(Serial1Class);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(260, 10, 151, 251));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 54, 21));
        comboBox = new QComboBox(frame_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(70, 20, 69, 22));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 60, 54, 21));
        comboBox_2 = new QComboBox(frame_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(70, 60, 69, 22));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 100, 54, 21));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 140, 54, 21));
        comboBox_3 = new QComboBox(frame_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(70, 100, 69, 22));
        comboBox_4 = new QComboBox(frame_2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(70, 140, 69, 22));
        pushButton_3 = new QPushButton(frame_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 200, 131, 41));
        checkBox = new QCheckBox(frame_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 170, 71, 16));
        frame_3 = new QFrame(Serial1Class);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(260, 290, 151, 101));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButton_2 = new QPushButton(frame_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 40, 131, 41));
        checkBox_2 = new QCheckBox(frame_3);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 10, 71, 20));

        retranslateUi(Serial1Class);
        QObject::connect(pushButton_2, SIGNAL(clicked()), textEdit_2, SLOT(clear()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), textEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(Serial1Class);
    } // setupUi

    void retranslateUi(QWidget *Serial1Class)
    {
        Serial1Class->setWindowTitle(QApplication::translate("Serial1Class", "MINI SERIAL", Q_NULLPTR));
        label->setText(QApplication::translate("Serial1Class", "\346\225\260\346\215\256\346\216\245\346\224\266\345\214\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("Serial1Class", "\345\217\221\351\200\201\346\225\260\346\215\256\345\214\272", Q_NULLPTR));
        label_4->setText(QApplication::translate("Serial1Class", " \344\270\262 \345\217\243\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Serial1Class", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("Serial1Class", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("Serial1Class", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Serial1Class", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Serial1Class", "HEX", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Serial1Class", "\345\217\221\351\200\201\346\225\260\346\215\256", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Serial1Class", "HEX", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Serial1Class: public Ui_Serial1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL1_H
