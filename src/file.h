#ifndef __FILE_H__
#define __FILE_H__
#include <QMessageBox>
#include <stdio.h>
#include <sys/stat.h>
#include <string>
#include <fstream>
#include <iostream>

#include "defines.h"

bool FileTest(const char* filename)
{
	struct stat info;
	int ret = -1;
	ret = stat(filename, &info);
	if(ret == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void tmpTest(const char* file)
{
	qDebug("Tesing for the existance of %s at /tmp/%s", file, file);
	QString qfile = QString::fromAscii(file);
	QString qfname = QString("/tmp/" % qfile);
	if(FileTest(qfname.toAscii()) == false)
	{
		QMessageBox msgBox;
		msgBox.setText("Please make sure to move " % qfile);
		msgBox.setInformativeText("this should be located in /tmp as " % qfname);
		msgBox.exec();
		tmpTest(file);
	}
	else
	{
		qDebug("%s has been found at /tmp/%s and should be extracted and moved to the correct spot", file, file);
		return;
	}
	return;
}


#endif // __FILE_H__
