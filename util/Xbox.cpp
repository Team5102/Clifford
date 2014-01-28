/* 
 * Generated on 1/21/14
 * By FIRST FRC Team 5102
 */

#include "Xbox.hpp"

Xbox::Xbox():
	xbox(defaultPort){}

Xbox::Xbox(uint32_t port):
	xbox(port){}

float Xbox::getLeftStickX(){ return xbox.GetRawAxis(1); }

float Xbox::getLeftStickY(){ return xbox.GetRawAxis(2); }

float Xbox::getRightStickX(){ return xbox.GetRawAxis(4); }

float Xbox::getRightStickY(){ return xbox.GetRawAxis(5); }

bool Xbox::getLeftTrigger()
{ 
	bool toReturn = false;
	if(xbox.GetRawAxis(3) == -1)
	{
		toReturn = true;
	}
	
	return toReturn;
}

bool Xbox::LT()
{
	bool toReturn = false;
	if(xbox.GetRawAxis(3) == -1)
	{
		toReturn = true;
	}
	
	return toReturn;
}

bool Xbox::getRightTrigger()
{
	bool toReturn = false;
	if(xbox.GetRawAxis(3) == 1)
	{
		toReturn = true;
	}
	
	return toReturn;
}

bool Xbox::RT()
{
	bool toReturn = false;
	if(xbox.GetRawAxis(3) == 1)
	{
		toReturn = true;
	}
	
	return toReturn;
}

bool Xbox::A(){ return xbox.GetRawButton(1); }
bool Xbox::getButtonA(){ return xbox.GetRawButton(1); }

bool Xbox::getButtonB(){ return xbox.GetRawButton(2); }  
bool Xbox::B(){ return xbox.GetRawButton(2); }

bool Xbox::getButtonX(){ return xbox.GetRawButton(3); }  
bool Xbox::X(){ return xbox.GetRawButton(3); }

bool Xbox::getButtonY(){ return xbox.GetRawButton(4); }  
bool Xbox::Y(){ return xbox.GetRawButton(4); }

bool Xbox::getLeftBumper(){ return xbox.GetRawButton(5); }
bool Xbox::LB(){ return xbox.GetRawButton(5); }

bool Xbox::getRightBumper(){ return xbox.GetRawButton(6); }
bool Xbox::RB(){ return xbox.GetRawButton(6); }

bool Xbox::getButtonSelect(){ return xbox.GetRawButton(7); }
bool Xbox::Select(){ return xbox.GetRawButton(7); }

bool Xbox::getButtonStart(){ return xbox.GetRawButton(8); }
bool Xbox::Start(){ return xbox.GetRawButton(8); }

bool Xbox::getLeftStickClick(){ return xbox.GetRawButton(9); }
bool Xbox::LS(){ return xbox.GetRawButton(9); }

bool Xbox::getRightStickClick(){ return xbox.GetRawButton(10); }
bool Xbox::RS(){ return xbox.GetRawButton(10); }

Xbox::~Xbox()
{
	
}

