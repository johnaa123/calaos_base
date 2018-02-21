/******************************************************************************
 **  Copyright (c) 2006-2018, Calaos. All Rights Reserved.
 **
 **  This file is part of Calaos.
 **
 **  Calaos is free software; you can redistribute it and/or modify
 **  it under the terms of the GNU General Public License as published by
 **  the Free Software Foundation; either version 3 of the License, or
 **  (at your option) any later version.
 **
 **  Calaos is distributed in the hope that it will be useful,
 **  but WITHOUT ANY WARRANTY; without even the implied warranty of
 **  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 **  GNU General Public License for more details.
 **
 **  You should have received a copy of the GNU General Public License
 **  along with Foobar; if not, write to the Free Software
 **  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 **
 ******************************************************************************/
#ifndef S_ZibaseTemp_H
#define S_ZibaseTemp_H

#include <InputTemp.h>
#include "Zibase.h"

class ZibaseInfoSensor;

namespace Calaos
{

class ZibaseTemp : public InputTemp, public sigc::trackable
{
protected:
    int address;

    std::string host;
    int port;
    std::string id;

    virtual void readValue();

    void valueUpdated(ZibaseInfoSensor *sensor);

    ZibaseInfoSensor::eZibaseSensor sensor_type;

public:
    ZibaseTemp(Params &p);
    ~ZibaseTemp();
};

}
#endif
