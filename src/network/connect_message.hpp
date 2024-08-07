//  $Id: connect_message.hpp 2128 2008-06-13 00:53:52Z cosmosninja $
//
//  SuperTuxKart - a fun racing game with go-kart
//  Copyright (C) 2008 Joerg Henrichs
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 3
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_CONNECT_MESSAGE_H
#define HEADER_CONNECT_MESSAGE_H

#include <string>

#include "network/message.hpp"

class ConnectMessage : public Message
{
private:
    std::string m_id;
    void        setId();
public:
                ConnectMessage();
                ConnectMessage(ENetPacket* pkt);
    const std::string&
                getId()       { return m_id; }
};   // ConnectMessage
#endif
