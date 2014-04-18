#include "OurRobot.hpp"

void OurRobot::Autonomous()
{
	
	myDrive.m_drive.SetSafetyEnabled(false);

	std::cout << auton << "\n";

	bool armMove = true;
	bool o = true;
	
	autonTimer.Start();
	autonTimer.Reset();
	
	myCompressor.Start();
	
	if(isMoving)
		std::cout << "True";
	else
		std::cout << "False";

	std::cout << autonTimer.Get() << "\n";
	
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
			myDrive.m_drive.ArcadeDrive(-0.5, 0.0);
			break;
			
			/* Move backward and attempt to score*/
			case 2:
			//std::cout << autonTimer.Get();
			if(o)
			{
				myShooter.claw.Set(1);
				o = false;
				Wait(0.1);
				myShooter.claw.Set(0);
			}
				
			if(armMove)
			{
				myShooter.arm.Set(0.25);
				armMove = false; // Keep this above the wait;`
				Wait(1.48);
				//myShooter.arm.Set(-.1); //TODO: If this isn't the cause, get rid of me.
			}else
			{
				myShooter.arm.Set(0);
			}
			
			if(autonTimer.Get() > 4.85)
			{
				isMoving = false;
			}
			
			if(isMoving)
			{
				//std::cout << "Do you think you're driving?";
				myDrive.m_drive.ArcadeDrive(-0.75, 0.0);
			}
			
			if(!isMoving)
			{
				//This is dumb, but let's not run the motor for too long
				myDrive.m_drive.ArcadeDrive(0.0f, 0.0f);
				
				if(autonTimer.Get() < 7)
				{
					myShooter.arm.Set(0);
					myShooter.claw.Set(-1);
				}else
				{
					myShooter.claw.Set(0);
				}
			}
			break;
			
			Wait(0.1);
		}
	}
	
}
