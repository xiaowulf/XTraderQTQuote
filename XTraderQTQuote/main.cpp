#include "XTraderQTQuote.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	XTraderQTQuote mainWindow;
	//mainWindow.resize(QSize(400, 200));
	mainWindow.showMaximized();
	mainWindow.setWindowIcon(QIcon(":/XTraderQTQuote/Resources/xtrader.png"));
	mainWindow.show();
	return a.exec();
}
