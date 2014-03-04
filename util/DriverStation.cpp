#include <iostream>
#include "WPILib.h"


void printFloat(std::string n, float f)
{
	DriverStationLCD* ds;
	ds = DriverStationLCD::GetInstance();
	ds->Printf(DriverStationLCD::kUser_Line1, 1, n.c_str(), f);
	ds->UpdateLCD();
}
