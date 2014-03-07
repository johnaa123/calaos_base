/******************************************************************************
**  Copyright (c) 2007-2008, Calaos. All Rights Reserved.
**
**  This file is part of Calaos Home.
**
**  Calaos Home is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation; either version 3 of the License, or
**  (at your option) any later version.
**
**  Calaos Home is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with Foobar; if not, write to the Free Software
**  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
**
******************************************************************************/
#ifndef S_PLANET_H
#define S_PLANET_H

#include <Calaos.h>
#include <Output.h>
#include <Input.h>
#include <CamInput.h>
#include <CamOutput.h>
#include <tcpsocket.h>
#include <IPCam.h>

namespace Calaos
{

class Planet: public IPCam
{
protected:
    string resolution, quality;
    string saturation, sharpness, contrast, hue;
    string brightness, color;

public:
    Planet(Params &p);
    ~Planet();

    //Standard IPCam functions.
    virtual std::string get_mpeg_stream(); //return the mpeg4 url stream (if any)
    virtual std::string get_mjpeg_stream(); //return the mpeg url stream
    virtual std::string get_picture(); //return the url for a single frame
    virtual std::string get_picture_real(); //return the real url for a single frame

    virtual void activateCapabilities(std::string cap, std::string cmd, std::string value);
};

}

#endif
