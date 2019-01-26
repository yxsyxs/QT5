#pragma once

#include <QtWidgets/QMainWindow>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include "ui_chart.h"



class chart : public QMainWindow
{
	Q_OBJECT

public:
	chart(QWidget *parent = Q_NULLPTR);

	//creat a Chart 
	QChartView* creatChart(void);

private:
	Ui::chartClass ui;
};
