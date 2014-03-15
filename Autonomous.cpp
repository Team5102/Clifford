#include "OurRobot.hpp"

void OurRobot::Autonomous()
{
	
	myDrive.m_drive.SetSafetyEnabled(false);

	//Define Auton mode
	unsigned int auton = 1;
	
	while(IsAutonomous() && IsEnabled())
	{
		switch(auton)	
		{
			/* Do nothing */
			case 0:
			//pass
			break;
				
			/* Move forward */
			case 1:
			myDrive.m_drive.ArcadeDrive(-0.75, 0.0);
			break;
			
			/* Move backward and attempt to score*/
			case 2:
			//myDrive.m_drive.ArcadeDrive(0.75, 0.0);
			//Wait(1.5);
			myShooter.shooter.Set(-1);
			Wait(3);
			break;

		}

		Wait(2);
	}
	
}
