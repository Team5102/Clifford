#include "OurRobot.hpp"

OurRobot::OurRobot():

	myDrive(),
	myShooter()
{
	myDrive.m_drive.SetExpiration(0.1);
}

void OurRobot::Disabled()
{
	//TODO: Remove me and generate a file for it.
	std::cout << "Robot is disabled";
}

void OurRobot::Test()
{
	//TODO: Remove me and generate a file for it.
	std::cout << "Test mode enabled";
}

void OurRobot::RobotInit()
{
	std::cout << "Robot Init. Now leave me alone!";
}

OurRobot::~OurRobot(){}

START_ROBOT_CLASS(OurRobot);
