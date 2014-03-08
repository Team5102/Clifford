/* 
 * Generated on 1/14/14
 * By FIRST FRC Team 5102
 */

#include "OurRobot.hpp"

void OurRobot::OperatorControl()
{
	//myDrive.m_drive.SetSafetyEnabled(true);
	
	myCompressor.Start();
	
	while(IsOperatorControl() && IsEnabled())
	{
		myDrive.teleop();
		myShooter.teleop();
		
		Wait(0.005);
	}
}
