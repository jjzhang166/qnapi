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

#ifndef __NAPITHREAD__H__
#define __NAPITHREAD__H__

#include <QThread>

class NapiThread : public QThread
{
Q_OBJECT
	public:
		NapiThread() : abort(false)
		{
			setTerminationEnabled(true);
		}
		void requestAbort() { abort = true; }
	protected:
		bool abort;
};

#endif