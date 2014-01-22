#ifndef OURROBOT_H_
#define OURROBOT_H_

#include "WPILib.h"

#include "myArcadeDrive.hpp"

class OurRobot : public SimpleRobot
{

public:
	
	OurRobot();
	~OurRobot();
	
	/*	Inherented functions  */
	
	void Disabled();
	void Autonomous();
    void OperatorControl();
    void Test();
    
    //Unused functions - Don't uncomment these!
    //void RobotInit();
	//void RobotMain();
	//void StartCompetition();
	
private:

	Victor lVictor, rVictor;
	Joystick lStick, rStick;
	RobotDrive myDrive;
	myArcadeDrive mynDrive;

	unsigned int drive;
	float maxSpeed;
	
};

#endif // OURROBOT_H_
