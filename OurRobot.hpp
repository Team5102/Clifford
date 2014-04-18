#ifndef OURROBOT_H_
#define OURROBOT_H_

#include "WPILib.h"

#include "myArcadeDrive.hpp"
#include "Camera.hpp"
#include "Shooter.hpp"
#include "util/DriverStation.hpp"

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
    void RobotInit();
    
    //Unused functions - Don't uncomment these!
	//void RobotMain();
	//void StartCompetition();
	
private:

    
	myArcadeDrive myDrive;
	
	Shooter myShooter;
	
	Compressor myCompressor;
	
	Camera myCamera;
	
	float maxSpeed;
	
	unsigned int auton;
	
	bool isMoving;
	
	Timer autonTimer;
};

#endif // OURROBOT_H_
