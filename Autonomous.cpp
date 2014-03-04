#include "OurRobot.hpp"

void OurRobot::Autonomous()
{
	
	myDrive.m_drive.SetSafetyEnabled(false);

	while(IsAutonomous())
	{
		myCamera.update();
		Wait(0.01);
	}
	
}

