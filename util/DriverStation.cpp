#include "DriverStation.hpp"

void printFloat(std::string n, float f)
{
	clear(DriverStationLCD::kUser_Line1);
	DriverStationLCD* ds;
	ds = DriverStationLCD::GetInstance();
	ds->Printf(DriverStationLCD::kUser_Line1, 1, n.c_str(), f);
	ds->UpdateLCD();
}

void clear(uint32_t l)
{
	DriverStationLCD* ds;
	ds = DriverStationLCD::GetInstance();
	ds->Clear();
	ds->UpdateLCD();
}
