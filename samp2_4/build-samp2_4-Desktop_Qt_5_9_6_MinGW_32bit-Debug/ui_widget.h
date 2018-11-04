/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *serialPortcomboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QLabel *label_5;
    QComboBox *comboBox_5;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_3;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QGroupBox *groupBox_4;
    QTextEdit *textEdit;
    QGroupBox *groupBox_5;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(700, 502);
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 21, 161, 231));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 54, 12));
        serialPortcomboBox = new QComboBox(groupBox);
        serialPortcomboBox->setObjectName(QStringLiteral("serialPortcomboBox"));
        serialPortcomboBox->setGeometry(QRect(70, 20, 69, 22));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 62, 54, 20));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(70, 60, 69, 22));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 100, 54, 12));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(70, 100, 69, 22));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 140, 54, 12));
        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(70, 140, 69, 22));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 54, 12));
        comboBox_5 = new QComboBox(groupBox);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(70, 180, 69, 22));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 260, 161, 81));
        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 20, 71, 16));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(30, 50, 71, 16));
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 350, 161, 81));
        checkBox_3 = new QCheckBox(groupBox_3);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(30, 20, 71, 16));
        checkBox_4 = new QCheckBox(groupBox_3);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(30, 50, 71, 16));
        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(210, 20, 461, 321));
        textEdit = new QTextEdit(groupBox_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(13, 20, 431, 281));
        groupBox_5 = new QGroupBox(Widget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(210, 350, 461, 81));
        textEdit_2 = new QTextEdit(groupBox_5);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(13, 20, 431, 41));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 450, 75, 31));
        groupBox_6 = new QGroupBox(Widget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(130, 440, 451, 41));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 450, 75, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Widget", "\344\270\262\345\217\243\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\344\270\262\345\217\243", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\346\240\241\351\252\214\344\275\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Widget", "\346\216\245\346\224\266\350\256\276\347\275\256", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Widget", "Hex", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Widget", "\346\215\242\350\241\214", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Widget", "\345\217\221\351\200\201\350\256\276\347\275\256", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("Widget", "Hex", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("Widget", "\346\215\242\350\241\214", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Widget", "\345\217\221\351\200\201\345\214\272", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("Widget", "\345\217\221\351\200\201\345\214\272", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("Widget", "\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
