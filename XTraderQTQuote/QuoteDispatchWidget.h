#ifndef QUOTEDISPATCH_H
#define QUOTEDISPATCH_H
#include <QWidget>
#include <QPlainTextEdit>
#include <QVBoxLayout>
class QuoteDispatchWidget : public QWidget
{
	Q_OBJECT

public:
	QuoteDispatchWidget(QWidget *parent);
	~QuoteDispatchWidget();
	void initUI();
private:
	QPlainTextEdit * qTextExit;
	QVBoxLayout * mainLayout;
};
#endif