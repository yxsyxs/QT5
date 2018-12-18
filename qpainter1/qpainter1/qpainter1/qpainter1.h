#pragma once

#include <QtWidgets/QWidget>
#include "ui_qpainter1.h"

class qpainter1 : public QWidget
{
	Q_OBJECT

public:
	qpainter1(QWidget *parent = Q_NULLPTR);

private:
	Ui::qpainter1Class ui;

protected:
	void paintEvent(QPaintEvent *);

};
