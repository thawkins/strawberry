/*
 * Strawberry Music Player
 * Copyright 2014, Jonas Kvinge <jonas@jkvinge.net>
 *
 * Strawberry is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Strawberry is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Strawberry.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef ENGINEDEVICE_H
#define ENGINEDEVICE_H

#include "config.h"

#include <QObject>
#include <QList>
#include <QString>

class DeviceFinder;

class EngineDevice : public QObject {
  Q_OBJECT

 public:
  explicit EngineDevice(QObject *parent = nullptr);
  ~EngineDevice();

  void Init();

  QList<DeviceFinder*> device_finders_;

 private:
  QString output_;

};

#endif // ENGINEDEVICE_H

