/*****************************************************************************
** QNapi
** Copyright (C) 2008-2015 Piotr Krzemiński <pio.krzeminski@gmail.com>
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

#ifndef FFPROBEMOVIEINFOPARSER_H
#define FFPROBEMOVIEINFOPARSER_H

#include <QString>
#include "movieinfo.h"

class FFProbeMovieInfoParser
{
    QString ffProbePath;
public:
    FFProbeMovieInfoParser(const QString & ffProbeExePath);

    MovieInfo parseFile(const QString & movieFilePath) const;
};

#endif // FFPROBEMOVIEINFOPARSER_H
