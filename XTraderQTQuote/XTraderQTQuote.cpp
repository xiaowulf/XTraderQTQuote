#include "XTraderQTQuote.h"
#include "Common.h"
XTraderQTQuote::XTraderQTQuote(QWidget *parent)
	: QMainWindow(parent), mainWidget(new MainWidget(this))
{
	this->setWindowTitle("XTrader �������ײ�������ת��");
	mainWidget->initUI();
	this->setCentralWidget(mainWidget);
}
