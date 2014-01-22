/* 
 * Generated on 1/21/14
 * By FIRST FRC Team 5102
 */

#ifndef MY_ARCADEDRIVE_HPP_
#define MY_ARCADEDRIVE_HPP_

#include "WPILib.h"

class myArcadeDrive : public RobotDrive
{
	
public:
	
	myArcadeDrive();
	
	myArcadeDrive(uint32_t leftMotor, uint32_t rightMotor);
	
	myArcadeDrive(uint32_t leftMotor, uint32_t rightMotor, Joystick joystick);
		
	~myArcadeDrive();
	
	void invert(Joystick toInvert);
	
	
private:
	
	Victor lMotor, rMotor;
	
	RobotDrive m_drive;
	
	Joystick m_stick;

	uint32_t m_buttonInvert;
};
	
#endif //MY_ARCADEDRIVE_HPP_
