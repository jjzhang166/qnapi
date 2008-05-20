/*****************************************************************************
** QNapi
** Copyright (C) 2008 Krzemin <pkrzemin@o2.pl>
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
*****************************************************************************/

#ifndef __QNAPIAPP__H__
#define __QNAPIAPP__H__

#include <QApplication>
#include <QString>
#include <QEvent>
#include <QFileOpenEvent>
#include <QMenu>
#include <QAction>
#include <QSystemTrayIcon>

#include "qcumber/qsingleapplication.h"

#include "frmprogress.h"
#include "frmabout.h"
#include "frmoptions.h"
#include "frmupload.h"
#include "frmcorrect.h"
#include "frmreport.h"
#include "frmscan.h"
#include "frmcreateuser.h"
#include "frmsummary.h"

#include "qnapiconfig.h"
#include "qnapiopendialog.h"


class QNapiApp : public QSingleApplication
{
	Q_OBJECT
	public:
		QNapiApp(int & argc, char **argv, bool useGui);
		~QNapiApp();

		void createTrayIcon();
		void showTrayMessage(QString title, QString msg);

		frmProgress * progress();

	public slots:

		void showOpenDialog();
		void showScanDialog();
		void showUploadDialog();
		void showCorrectDialog();
		void showReportDialog();
		void showOptions();
		void showCreateUser();
		void showAbout();
		void tryQuit();

	signals:
		void downloadFile(const QString & fileName);

	private:

		bool event(QEvent *ev);

		QSystemTrayIcon *trayIcon;
		QMenu *trayIconMenu, *napiSubMenu;
		QAction *getAction, *scanAction, *addNewAction, *addCorrectedAction,
				*reportBadAction, *optionsAction, *createUserAction,
				*aboutAction, *quitAction;

		QNapiOpenDialog *openDialog;
		
		frmProgress *f_progress;
		frmOptions *options;
		frmCreateUser *createUser;
		frmAbout *about;
		frmScan *scan;
		frmUpload *upload;
		frmCorrect *correct;
		frmReport *report;

	private slots:

		void trayIconActivated(QSystemTrayIcon::ActivationReason reason);

};

#endif