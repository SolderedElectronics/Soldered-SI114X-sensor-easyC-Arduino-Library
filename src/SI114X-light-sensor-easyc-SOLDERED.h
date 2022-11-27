/**
 **************************************************
 *
 * @file        SI114X-light-sensor-SOLDERED.h
 * @brief       Header file for sensor specific code.
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Goran Juric for soldered.com
 ***************************************************/

#ifndef _Light_Sensor_
#define _Light_Sensor_

#include "Arduino.h"
#include "libs/Adafruit_SI1145_Library_BusIO/Adafruit_SI1145.h"

// I2C addresses of the two different sensor variants
#define SI1142 0x5A
#define SI1147 0x60

class SI114X : public Adafruit_SI1145
{
  public:
    SI114X() : Adafruit_SI1145()
    {
    }
    bool begin(uint8_t _i2c_addr);

  private:
    uint8_t _i2c_addr;
};

#endif