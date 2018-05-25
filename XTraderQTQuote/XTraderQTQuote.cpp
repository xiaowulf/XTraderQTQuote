#include "XTraderQTQuote.h"
#include "Common.h"
XTraderQTQuote::XTraderQTQuote(QWidget *parent)
	: QMainWindow(parent), mainWidget(new MainWidget(this))
{
	this->setWindowTitle("XTrader 量化交易策略行情转发");
	mainWidget->initUI();
	this->setCentralWidget(mainWidget);
}
