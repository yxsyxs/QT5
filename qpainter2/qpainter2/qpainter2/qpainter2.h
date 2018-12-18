#pragma once

#include <QtWidgets/QWidget>
#include "ui_qpainter2.h"

class qpainter2 : public QWidget
{
	Q_OBJECT

public:
	qpainter2(QWidget *parent = Q_NULLPTR);

private:
	Ui::qpainter2Class ui;

	void paintEvent(QPaintEvent *event);
};
