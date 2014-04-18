/* 
 * Generated on 1/14/14
 * By FIRST FRC Team 5102
 */

#include "OurRobot.hpp"

void OurRobot::OperatorControl()
{
	myDrive.m_drive.SetSafetyEnabled(true);
	
	myCompressor.Start();
	
	while(IsOperatorControl() && IsEnabled())
	{
		myDrive.teleop();
		myShooter.teleop();

		//TODO: This is so shitty. Remake this in the teleop function!
		if(myShooter.m_stick.getLeftBumper())
		{
			auton = 1;
		}
		else if(myShooter.m_stick.getRightBumper())
		{
			auton = 2;
		}
		Wait(0.005);
	}
}
