/* 
 * Generated on 1/21/14
 * By FIRST FRC Team 5102
 */

#ifndef XBOX_HPP_
#define XBOX_HPP_


#include "WPILib.h"
//#include "../Joystick.h"

class Xbox : public Joystick
{
	
public:
	
	Xbox(uint32_t port);
	
	Xbox();
	//~Xbox();
	
	float getLeftStickX();
	
	float getLeftStickY();
	
	float getRightStickX();
	
	float getRightStickY();

private:
	
};

#endif //XBOX_HPP_