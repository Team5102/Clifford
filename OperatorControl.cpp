/* 
 * Generated on 1/14/14
 * By FIRST FRC Team 5102
 */

#include "OurRobot.hpp"

void OurRobot::OperatorControl()
{
	myDrive.SetSafetyEnabled(true);
	
	while(IsOperatorControl())
	{
		switch(drive)
		{
			case 1:
			myDrive.ArcadeDrive(lStick);
			break;
			case 2:
			myDrive.TankDrive(lStick, rStick);
			break;
			case 3:
			myDrive.ArcadeDrive(lStick.GetY(), -lStick.GetX());
			break;
			//Configuration for default xbox controller;
			case 4:
			myDrive.ArcadeDrive(lStick.GetRawAxis(2), -lStick.GetRawAxis(4));
			break;
			
			Wait(0.005);
		}
	}
}
