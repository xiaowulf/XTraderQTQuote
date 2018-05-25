#pragma once

#include <QWidget>
#include <qpushbutton.h>
#include <QHBoxLayout>
#include <qlabel.h>
#include <qlineedit.h>
#include "StringUtil.h"
#include "StructUtil.h"
class LoginWidget : public QWidget
{
	Q_OBJECT

public:
	LoginWidget(QWidget *parent);
	~LoginWidget();
	void initUI();
private:
	StringUtil * stringUtil;
	QLabel * frontLabel;
	QLineEdit * frontEdit;

	QLabel * useNameLabel;
	QLineEdit * userNameEdit;
	QLineEdit * pwdEdit;
	QLabel * pwdLabel;


	QPushButton * saveBtn;
	QPushButton * loginBtn;
	QPushButton * logoutBtn;
	QHBoxLayout * mainLayout;
};
