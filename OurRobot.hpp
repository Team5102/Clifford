#ifndef OURROBOT_H_
#define OURROBOT_H_

#include "WPILib.h"

#include "myArcadeDrive.hpp"
#include "Camera.hpp"
#include "Shooter.hpp"

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
    void RobotInit();
	//void RobotMain();
	//void StartCompetition();
	
private:

	myArcadeDrive myDrive;
	
	Shooter myShooter;
	
	Camera myCamera;
	
	float maxSpeed;
	
};

#endif // OURROBOT_H_
