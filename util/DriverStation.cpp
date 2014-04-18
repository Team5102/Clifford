#include "DriverStation.hpp"

void printFloat(std::string n, float f, int l)
{
	clear(DriverStationLCD::kUser_Line1);
	DriverStationLCD* ds;
	ds = DriverStationLCD::GetInstance();
	switch(l)
	{
	case 1:
		ds->Printf(DriverStationLCD::kUser_Line1, 1, n.c_str(), f);
		break;
	case 2:
		ds->Printf(DriverStationLCD::kUser_Line2, 1, n.c_str(), f);
		break;

	}
	ds->UpdateLCD();
}

void clear(uint32_t l)
{
	DriverStationLCD* ds;
	ds = DriverStationLCD::GetInstance();
	ds->Clear();
	ds->UpdateLCD();
}
