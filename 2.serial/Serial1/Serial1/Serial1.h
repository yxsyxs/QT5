#pragma once

#include <QtWidgets/QWidget>
#include "ui_Serial1.h"

class Serial1 : public QWidget
{
	Q_OBJECT

public:
	Serial1(QWidget *parent = Q_NULLPTR);

private:
	Ui::Serial1Class ui;
};
