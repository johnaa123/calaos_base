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
#ifndef S_WODaliRVB_H
#define S_WODaliRVB_H

#include <OutputLightRGB.h>
#include <WagoMap.h>

namespace Calaos
{

class WODaliRVB : public OutputLightRGB
{
private:
    std::string host;
    int port;

    void WagoUDPCommandRed_cb(bool status, string command, string result);
    void WagoUDPCommandGreen_cb(bool status, string command, string result);
    void WagoUDPCommandBlue_cb(bool status, string command, string result);
    void WagoUDPCommand_cb(bool status, string command, string result);

    virtual void setColorReal(int r, int g, int b);

public:
    WODaliRVB(Params &p);
    ~WODaliRVB();
};

}
#endif
