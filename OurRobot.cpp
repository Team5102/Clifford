#include "OurRobot.hpp"

OurRobot::OurRobot():

	myDrive(),
	myShooter(),
	myCompressor(1, 1) //TODO: check the switch channel
{
	myDrive.m_drive.SetExpiration(0.1);
}

void OurRobot::Disabled()
{
	myCompressor.Stop();
	std::cout << "Robot is disabled";
	while(IsDisabled())
	{
		Wait(0.01);
	}
	//TODO: Remove me and generate a file for it.
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
