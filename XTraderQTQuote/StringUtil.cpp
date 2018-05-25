#include "StringUtil.h"

StringUtil::StringUtil(QObject *parent)
	: QObject(parent), configStruct(new ConfigStruct())
{
	QSettings * configIni  = new QSettings("config.ini", QSettings::IniFormat);
	configStruct->frontaddr = configIni->value("/quote/frontaddr").toString();
	configStruct->tradeaddr = configIni->value("/quote/trade_font_addr").toString();
	configStruct->investor = configIni->value("/account/investor").toString();
	configStruct->pwd = configIni->value("/account/pwd").toString();
	configStruct->brokerid = configIni->value("/account/brokerid").toString();
	configStruct->settingfile = configIni->value("/quote/settingfile").toString();
	configStruct->quote_file_dir = configIni->value("/quote/quote_file_dir").toString();
	configStruct->futures_db_file = configIni->value("/db/futures_db_file").toString();
	configStruct->futures_db_name = configIni->value("/db/futures_db_name").toString();
	configStruct->quoteconfigfile = configIni->value("/quote/quoteconfigfile").toString();
	
}

StringUtil::~StringUtil()
{
	delete configStruct;
}

ConfigStruct* StringUtil::getConfigStruct() {
	return configStruct;
}
