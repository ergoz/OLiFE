#ifndef __NVHASH_H__
#define __NVHASH_H__


#include "defines.h"

bool HashCmp(const char* filename)
{
	QFile file(filename);
	
	if(file.open(QIODevice::ReadOnly))
	{
		QByteArray fileData = file.readAll();
		
		QByteArray hashData = QCryptographicHash::hash(fileData,QCryptographicHash::Md5);
		qDebug() << hashData.toHex();
		if(hashData.toHex() == NVHASH1)
		{
			return true;
		}
		else;
		if(hashData.toHex() == NVHASH2)
		{
			return true;
		}
		else;
		if(hashData.toHex() == NVINTERNAL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

#endif // __NVHASH_H__
