#include "OurRobot.hpp"

OurRobot::OurRobot():

	myDrive(),
	myShooter(),
	myCompressor(1, 1) //TODO: check the switch channel
{

	//Define Auton mode
	auton = 2; //Edit me to change autonomous modes. TODO: Make this editable without rebuilding/deploying
	
	//Determines if the robot should currently be moving
	isMoving = true;
	
	//Starts the timer for autonomous mode
	//autonTimer.Start();
	
	//myCompressor.Start();
	
	myDrive.m_drive.SetExpiration(0.1);
}

void OurRobot::Disabled()
{
	myCompressor.Stop();
	std::cout << "Robot is disabled";
	std::cout << autonTimer.Get();
	autonTimer.Reset();
	autonTimer.Stop();
	while(IsDisabled())
	{
		Wait(0.01);
		autonTimer.Stop();
	}	//TODO: Remove me and generate a file for it.
}

void OurRobot::Test()
{
	//TODO: Remove me and generate a file for it.
	std::cout << "Test mode enabled";
}

void OurRobot::RobotInit()
{
	std::cout << "Robot Init";
}

OurRobot::~OurRobot(){}

START_ROBOT_CLASS(OurRobot);
