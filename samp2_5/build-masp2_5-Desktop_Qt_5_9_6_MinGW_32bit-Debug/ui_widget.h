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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_6;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 319);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 0, 361, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 2, 1, 1);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 2, 1, 1);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 1);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 3, 1, 1);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalLayoutWidget_2 = new QWidget(Widget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 139, 361, 161));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_2->addWidget(lineEdit_4, 0, 2, 1, 1);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_2->addWidget(lineEdit_6, 2, 2, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_2->addWidget(lineEdit_5, 1, 2, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 0, 3, 1, 1);

        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(verticalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 2, 3, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "  \345\215\225\344\273\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\350\256\241\347\256\227", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "  \346\200\273\344\273\267  ", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "    \346\225\260\351\207\217   ", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "     \345\205\253\350\277\233\345\210\266      ", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "     \345\215\201\350\277\233\345\210\266", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "     \344\272\214\350\277\233\345\210\266", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "      \350\275\254\346\215\242     ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "\350\275\254\346\215\242", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "\350\275\254\346\215\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
