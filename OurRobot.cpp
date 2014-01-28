#include "OurRobot.hpp"

OurRobot::OurRobot():

	myDrive()
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

OurRobot::~OurRobot(){}

START_ROBOT_CLASS(OurRobot);
