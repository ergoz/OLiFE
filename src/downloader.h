#ifndef __DOWNLOADER_H__
#define __DOWNLOADER_H__
#include <QMessageBox>
#include "file.h"
#include "defines.h"

void download(const char* dlpath, const char* file)
{
	QString qfile = QString::fromAscii(file);
	QString qdlpath = QString::fromAscii(dlpath);
	QString qinfoText = QString();
 	qDebug("This is not implemented yet, but the file you requested was %s from %s", file, dlpath);
 	QMessageBox msgBox;
 	msgBox.setText("The download agent is not fully implemented yet");
 	msgBox.setInformativeText("You can download " % qfile);
 	if(qdlpath == LDK_URL)
 	{
 		msgBox.setInformativeText("You can download tegra-linux-12.alpha.1.0.tar.gz <a href='http://developer.download.nvidia.com/assets/mobile/files/tegra-linux-12.alpha.1.0.tar.gz'>from here</a>");
	}
 	msgBox.setIcon(QMessageBox::Critical);
 	int ret = msgBox.exec();
 	switch(ret)
 		{
 			case QMessageBox::Ok:
 			tmpTest(file);
 			break;
		}
 	return;
}

#endif // __DOWNLOADER_H__
