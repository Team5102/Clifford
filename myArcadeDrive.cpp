/* 
 * Generated on 1/21/14
 * By FIRST FRC Team 5102
 */

#include "myArcadeDrive.hpp"


myArcadeDrive::myArcadeDrive():
	
	//Forward declaration of motors
	lMotor(1),
	rMotor(2),
	
	//Forward declaration of drive
	m_drive(lMotor, rMotor);

	m_buttonInvert(3),
{
		
}

myArcadeDrive::invert(Joystick toInvert)
{
	
}