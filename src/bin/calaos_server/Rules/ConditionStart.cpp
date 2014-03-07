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
#include <ConditionStart.h>

using namespace Calaos;

ConditionStart::ConditionStart():
    Condition(COND_START),
    start(true)
{
    cDebugDom("rule.condition.start") <<  "ConditionStart::ConditionStart(): New Start condition";
}

ConditionStart::~ConditionStart()
{
    cDebugDom("rule.condition.start") <<  "ConditionStart::~ConditionStart(): Ok";
}

bool ConditionStart::Evaluate()
{
    if (start)
    {
        start = false;
        cDebugDom("rule.condition.start") <<  "ConditionStart::Evaluate(): calaosd is starting, true";

        return true;
    }
    else
    {
        cDebugDom("rule.condition.start") <<  "ConditionStart::Evaluate(): calaosd is already started, false";
    }

    return false;
}

bool ConditionStart::LoadFromXml(TiXmlElement *node)
{
    return true;
}

bool ConditionStart::SaveToXml(TiXmlElement *node)
{
    TiXmlElement *cond_node = new TiXmlElement("calaos:condition");
    cond_node->SetAttribute("type", "start");
    node->LinkEndChild(cond_node);

    return true;
}
