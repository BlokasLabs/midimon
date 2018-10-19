/*
 * Midimon.
 * Copyright (C) 2018  Vilniaus Blokas UAB, https://blokas.io/midimon
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2 of the
 * License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef MIDIMON_UC1701_H
#define MIDIMON_UC1701_H

#include "midimon_display.h"

class MidimonDisplay_UC1701 : public IMidimonDisplay
{
public:
	virtual void begin() override;
	virtual void setDrawPosition(uint8_t x, uint8_t y_8) override;
	virtual void setVerticalScroll(uint8_t linee) override;
	virtual void addVerticalScroll(int8_t lines) override;
	virtual void drawSpace(uint8_t n, bool inverse) override;
	virtual void drawBitmap(const void * data, uint8_t n, bool inverse) override;
	virtual void drawBitmap_P(const void * data, uint8_t n, bool inverse) override;
	virtual void clear() override;
};

#endif // MIDIMON_UC1701_H
