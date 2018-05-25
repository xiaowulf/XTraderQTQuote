#ifndef XTRADERQTQUOTE_H
#define XTRADERQTQUOTE_H
#include <QtWidgets/QMainWindow>
#include "MainWidget.h"

class XTraderQTQuote : public QMainWindow
{
	Q_OBJECT

public:
	XTraderQTQuote(QWidget *parent = Q_NULLPTR);

private:
	MainWidget *mainWidget;
};
#endif