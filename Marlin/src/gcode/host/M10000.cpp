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
#include "../../inc/MarlinConfig.h"
#include "../../feature/host_actions.h"
#include "../gcode.h"
#include "../../MarlinCore.h"

/**
 * M100000: Forward host actions
 */

void GcodeSuite::M10000() {
  if (!(parser.string_arg && parser.string_arg[0])) {
    SERIAL_ECHOLNPGM("Invalid input");
    return;
  }
  if (parser.string_arg[0] == 'S'){
      hostui.start();
  } 
  else if (parser.string_arg[0] == 'C'){
      hostui.cancel();
  } 
  else if (parser.string_arg[0] == 'P'){
      hostui.pause();
  } 
  else if (parser.string_arg[0] == 'R'){
      hostui.resume();
  } 
}