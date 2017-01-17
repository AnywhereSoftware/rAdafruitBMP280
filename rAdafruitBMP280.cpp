#include "B4RDefines.h"
namespace B4R {
	bool B4RAdafruit_BMP280::Initialize() {
		bmp = new (be) Adafruit_BMP280();
		return bmp->begin();
		
	}
	Double B4RAdafruit_BMP280::ReadTemperature() {
		return bmp->readTemperature();
	}
	Double B4RAdafruit_BMP280::ReadPressure() {
		return bmp->readPressure();
	}
	Double B4RAdafruit_BMP280::ReadAltitude(Double SeaLevelHPA) {
		return bmp->readAltitude(SeaLevelHPA);
	}
	
 
}
