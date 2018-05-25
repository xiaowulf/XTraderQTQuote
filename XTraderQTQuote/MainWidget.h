#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#include <QWidget>
#include "LoginWidget.h"
#include "QuoteDispatchWidget.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
class MainWidget : public QWidget
{
	Q_OBJECT

public:
	MainWidget(QWidget *parent);
	~MainWidget();
	void initUI();
private:
	LoginWidget * loginWidget;
	QuoteDispatchWidget * quoteDispatchWidget;
	QVBoxLayout * vBoxLayout;
};
#endif