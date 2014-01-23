/* 
 * Generated on 1/21/14
 * By FIRST FRC Team 5102
 */

//Class to create more intuitive 
#ifndef XBOX_HPP_
#define XBOX_HPP_


#include "WPILib.h"
//#include "../Joystick.h"

class Xbox
{
	
public:
	
	Xbox();
	
	Xbox(uint32_t port);
	
	~Xbox();
	
	/*	Axes */
	float getLeftStickX();
	
	float getLeftStickY();
	
	float getRightStickX();
	
	float getRightStickY();

	/*	Buttons */
	
	
	
private:
	
	//This is the default port for the Xbox controller
	static const uint32_t defaultPort = 1;
	
	Joystick xbox;
};

#endif //XBOX_HPP_
