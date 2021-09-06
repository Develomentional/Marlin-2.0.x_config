/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define CONFIG_EXAMPLES_DIR "Creality/Ender-3 Pro/CrealityV427"

/**
 * Custom Boot Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable SHOW_CUSTOM_BOOTSCREEN in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

#define CUSTOM_BOOTSCREEN_TIMEOUT 1000
#define CUSTOM_BOOTSCREEN_BMPWIDTH 64
#define CUSTOM_BOOTSCREEN_INVERTED

const unsigned char custom_start_bmp[] PROGMEM = {
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11001111,B11111100,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11001111,B11111100,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11110011,B11110011,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11110011,B11110011,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11000000,B00000000,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11000000,B00000000,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B00001100,B00001100,B00111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B00001100,B00001100,B00111111,B11111111,B11111111,
  B11111111,B11111111,B11111100,B00000000,B00000000,B00001111,B11111111,B11111111,
  B11111111,B11111111,B11111100,B00000000,B00000000,B00001111,B11111111,B11111111,
  B11111111,B11111111,B11111100,B11000000,B00000000,B11001111,B11111111,B11111111,
  B11111111,B11111111,B11111100,B11000000,B00000000,B11001111,B11111111,B11111111,
  B11111111,B11111111,B11111100,B11001111,B11111100,B11001111,B11111111,B11111111,
  B11111111,B11111111,B11111100,B11001111,B11111100,B11001111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11110000,B11000011,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11110000,B11000011,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11101011,B01101010,B10110110,B10100010,B00100011,B00101011,B11111111,
  B11111111,B11101010,B10101010,B00101010,B01100111,B01100110,B11101011,B11111111,
  B11111111,B11110110,B10101010,B10100010,B10101111,B01101110,B11100011,B11111111,
  B11111111,B11110111,B01110110,B10101010,B10100011,B01100011,B00101011,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,
  B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111,B11111111
};
