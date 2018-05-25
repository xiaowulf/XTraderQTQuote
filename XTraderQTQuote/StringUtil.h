#ifndef STRINGUTIL_H
#define STRINGUTIL_H

#include <QObject>
#include <QSettings>
#include "StructUtil.h"
class StringUtil : public QObject
{
	Q_OBJECT
private:
	ConfigStruct * configStruct;
public:
	StringUtil(QObject *parent);
	ConfigStruct* getConfigStruct();
	~StringUtil();
};
#endif
