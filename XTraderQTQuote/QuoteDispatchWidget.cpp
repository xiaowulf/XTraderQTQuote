#include "QuoteDispatchWidget.h"

QuoteDispatchWidget::QuoteDispatchWidget(QWidget *parent)
	: QWidget(parent)
{
	qTextExit = new QPlainTextEdit(this);
	mainLayout = new QVBoxLayout(this);
}

QuoteDispatchWidget::~QuoteDispatchWidget()
{

}

void QuoteDispatchWidget::initUI()
{
	qTextExit->setLineWidth(0);
	qTextExit->setFrameStyle(QFrame::StyledPanel);
	mainLayout->addWidget(qTextExit);
	this->setLayout(mainLayout);
}
