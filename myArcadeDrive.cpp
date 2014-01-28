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
	//m_drive(lMotor, rMotor),

	m_stick(1),
	
	m_drive(lMotor, rMotor)
	
 {
	m_drive.SetExpiration(0.1);
}

void myArcadeDrive::teleop()
{
	//drive 
	m_drive.ArcadeDrive(m_stick.getLeftStickY(), -m_stick.getRightStickX());
	
	if(m_stick.RT())
	{
		m_drive.SetMaxOutput(.5);
	}
	else if(m_stick.LT())
	{
		m_drive.SetMaxOutput(1);
	}else if(m_stick.A())
	{
		m_axis.get();
	}
	
}	

myArcadeDrive::~myArcadeDrive()
{
	
}
	
