#include "OurRobot.h"

void OurRobot::Autonomous()
{
	//The default auton code
	myDrive.SetSafetyEnabled(false);
	myDrive.Drive(-0.5, 0.0);
	Wait(1.0); 				
	myDrive.Drive(0.0, 0.0); 	
}