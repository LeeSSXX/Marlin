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

/**
 * Espressif ESP32 (Tensilica Xtensa LX6) pin assignments
 */

#include "env_validate.h"

#define BOARD_INFO_NAME "Espressif ESP32"

//
// I2S (steppers & other output-only pins)
//
#define I2S_STEPPER_STREAM
#if ENABLED(I2S_STEPPER_STREAM)
  #define I2S_WS                              25
  #define I2S_BCK                             26
  #define I2S_DATA                            27
#endif

//
// Limit Switches
//
#define X_MIN_PIN                             34
#define Y_MIN_PIN                             35
#define Z_MIN_PIN                             15

//
// Steppers
//
#define X_STEP_PIN                           128
#define X_DIR_PIN                            129
#define X_ENABLE_PIN                         130
//#define X_CS_PIN                             0

#define Y_STEP_PIN                           131
#define Y_DIR_PIN                            132
#define Y_ENABLE_PIN                         133
//#define Y_CS_PIN                            13

#define Z_STEP_PIN                           134
#define Z_DIR_PIN                            135
#define Z_ENABLE_PIN                         136
//#define Z_CS_PIN                             5  // SS_PIN

#define E0_STEP_PIN                          137
#define E0_DIR_PIN                           138
#define E0_ENABLE_PIN                        139
//#define E0_CS_PIN                           21

#define E1_STEP_PIN                          137
#define E1_DIR_PIN                           138
#define E1_ENABLE_PIN                        139
//#define E0_CS_PIN                           21

//
// Temperature Sensors
//

#define TEMP_BED_PIN                          36  // Analog Input
#define TEMP_0_PIN                            39  // Analog Input
#define TEMP_1_PIN                            34  // Analog Input

//
// Heaters / Fans
//
#define HEATER_0_PIN                          13
#define HEATER_1_PIN                          4
#define HEATER_BED_PIN                        21
#define FAN_PIN                               25
#define FAN1_PIN                              22

// CS, MISO, MOSI, and SCK for MAX Thermocouple SPI
#if HAS_MAX_TC
  // SPI3
  #define TEMP_0_CS_PIN                       5  //PIN:29
  #define TEMP_0_SCK_PIN                      18 //PIN:30
  #define TEMP_0_MISO_PIN                     19 //PIN:31
  #define TEMP_0_MOSI_PIN                     23 //PIN:37


  // SPI2
  //#define TEMP_1_CS_PIN                       15
  //#define TEMP_1_MISO_PIN                     12
  //#define TEMP_1_MOSI_PIN                     13
  //#define TEMP_1_SCK_PIN                      14
#endif