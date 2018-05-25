#include "MainWidget.h"

MainWidget::MainWidget(QWidget *parent)
	: QWidget(parent)
{
	loginWidget = new LoginWidget(this);
	quoteDispatchWidget = new QuoteDispatchWidget(this);
	//������Ĳ��֣����²���
	vBoxLayout = new QVBoxLayout(this);
	
}

MainWidget::~MainWidget()
{
}

void MainWidget::initUI()
{
	quoteDispatchWidget->initUI();
	loginWidget->initUI();
	vBoxLayout->addWidget(loginWidget, 1);
	vBoxLayout->addWidget(quoteDispatchWidget, 10);
	this->setLayout(vBoxLayout);
}
