/* 
 * Generated on 1/21/14
 * By FIRST FRC Team 5102
 */

#ifndef MY_ARCADEDRIVE_HPP_
#define MY_ARCADEDRIVE_HPP_

#include "WPILib.h"

#include "Util/Xbox.hpp"
#include "util/Axis.hpp"
#include "util/DriverStation.hpp"

#include <iostream>
#include "iostream"

class myArcadeDrive
{
private:
	
	Talon lMotor, rMotor;
	
	Xbox m_stick;
	
	//uint32_t m_buttonInvert;
public:
	
	myArcadeDrive();
	
	//myArcadeDrive(uint32_t leftMotor, uint32_t rightMotor);
	
	//myArcadeDrive(uint32_t leftMotor, uint32_t rightMotor, Joystick joystick);
		
	~myArcadeDrive();
	
	void teleop();
	
	bool toggle;
	
	void invert(Joystick toInvert);
	
	RobotDrive m_drive;
	
	DigitalInput pot;

	DoubleSolenoid shifter;
};
	
#endif //MY_ARCADEDRIVE_HPP_
