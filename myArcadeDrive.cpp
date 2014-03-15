/* 
 * Generated on 1/21/14
 * By FIRST FRC Team 5102
 */

#include "myArcadeDrive.hpp"

myArcadeDrive::myArcadeDrive():
	
	//Forward declaration of motors
	lMotor(10),
	rMotor(9),
	
	//Forward declaration of drive
	//m_drive(lMotor, rMotor),

	m_stick(1),

	
	m_drive(lMotor, rMotor),
	pot(1),

	shifter(6,5)
	
{
	toggle = false;
	m_drive.SetExpiration(0.5);
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
	}
	else if(m_stick.getButtonSelect())
	{
		printFloat("Pot", pot.Get());
	}
	else if(m_stick.getButtonA())
	{
		shifter.Set(DoubleSolenoid::kForward);
	}
	else if(m_stick.getButtonB())
	{
		shifter.Set(DoubleSolenoid::kReverse);
	}
}	

myArcadeDrive::~myArcadeDrive()
{
	
}
	
