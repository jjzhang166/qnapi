/*****************************************************************************
** QNapi
** Copyright (C) 2008-2017 Piotr Krzemiński <pio.krzeminski@gmail.com>
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

#include "console.h"

#include <iostream>

Console::Console(bool isQuiet) : isQuiet(isQuiet) {}

void Console::printLine(const QString& line) const {
  if (isQuiet) return;
  std::cout << line.toStdString() << std::endl;
}

void Console::printLineHighlihted(const QString& line) const {
  printLine(" * " + line);
}

void Console::printLineOrdinary(const QString& line) const {
  printLine("   " + line);
}

void Console::printLineError(const QString& line) const {
  printLine("!! " + line);
}
