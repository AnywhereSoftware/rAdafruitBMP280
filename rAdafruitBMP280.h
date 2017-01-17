#pragma once
#include "B4RDefines.h"
#include "Adafruit_BMP280.h"
namespace B4R {
	//~Version: 1.00
	//~shortname: Adafruit_BMP280
	/**
	*Wrapper for <link>Adafruit BMP280|https://github.com/adafruit/Adafruit_BMP280_Library</link> library. 
	*/
	class B4RAdafruit_BMP280 {
		private:
			Adafruit_BMP280* bmp;
			uint8_t be[sizeof(Adafruit_BMP280)];
		public:
		//Initializes the sensor. Returns True if successful.
  		bool Initialize();
		//Reads the temperature.
  		Double ReadTemperature();
		//Reads the pressure.
  		Double ReadPressure();
		//Reads the altitude based on the sea level pressure (default value is 1013.25).
		Double ReadAltitude(Double SeaLevelHPA);
   
	};
}