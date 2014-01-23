#include "OurRobot.hpp"

OurRobot::OurRobot():
	//Motors
	/*lVictor(1),
	rVictor(2),
	
	//Joysticks
	lStick(1),
	rStick(2),
	
	//Drive
	myDrive(lVictor, rVictor), */
	myDrive()
		
{
	myDrive.m_drive.SetExpiration(0.1);
	drive = 4;
	//maxSpeed = 1;
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

OurRobot::~OurRobot()
{
	
}

START_ROBOT_CLASS(OurRobot);
