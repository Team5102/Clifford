#include "OurRobot.hpp"

void OurRobot::Autonomous()
{
	
	myDrive.m_drive.SetSafetyEnabled(false);
	/*
	myDrive.m_drive.SetSafetyEnabled(false);
	myDrive.m_drive.Drive(-0.5, 0);
	Wait(0.5);
	myDrive.m_drive.Drive(0, 0); */
	while(IsAutonomous())
	{
		myCamera.update();
		Wait(0.01);
	}
	
}

