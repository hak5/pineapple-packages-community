/*
    This file is part of Kismet

    Kismet is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Kismet is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Kismet; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "dot11_ie_192_vht_op.h"

void dot11_ie_192_vht_op::parse(std::shared_ptr<kaitai::kstream> p_io) {
    m_channel_width = p_io->read_u1();
    m_center1 = p_io->read_u1();
    m_center2 = p_io->read_u1();
    m_basic_mcs_map = p_io->read_u2be();
}

