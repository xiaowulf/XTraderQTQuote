#include "LoginWidget.h"
#include "Common.h"
LoginWidget::LoginWidget(QWidget *parent)
	: QWidget(parent), stringUtil(new StringUtil(this))
{
	saveBtn = new QPushButton("����",this);
	loginBtn = new QPushButton("��¼",this);
	logoutBtn = new QPushButton("�˳�",this);
	mainLayout = new QHBoxLayout();

	frontLabel = new QLabel("����ǰ��:", this);
	frontEdit = new QLineEdit(this);

	useNameLabel = new QLabel("�û���:",this);
	userNameEdit = new QLineEdit(this);
	pwdEdit = new QLineEdit(this);
	pwdLabel = new QLabel("����:",this);
}

LoginWidget::~LoginWidget()
{
}
void LoginWidget::initUI()
{
	frontEdit->setText(stringUtil->getConfigStruct()->frontaddr);
	userNameEdit->setText(stringUtil->getConfigStruct()->investor);
	pwdEdit->setText(stringUtil->getConfigStruct()->pwd);
	mainLayout->addWidget(frontLabel);
	mainLayout->addWidget(frontEdit);
	mainLayout->addWidget(useNameLabel);
	mainLayout->addWidget(userNameEdit);
	mainLayout->addWidget(pwdLabel);
	mainLayout->addWidget(pwdEdit);
	mainLayout->addWidget(saveBtn);
	mainLayout->addWidget(loginBtn);
	mainLayout->addWidget(logoutBtn);
	mainLayout->addStretch();
	this->setLayout(mainLayout);
}
