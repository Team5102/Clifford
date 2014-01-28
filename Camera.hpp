/* 
 * Generated on 1/24/14
 * By FIRST FRC Team 5102
 */

#ifndef CAMERA_HPP_
#define CAMERA_HPP_

#include "Vision2009/TrackAPI.h"
#include <iostream>

class Camera
{
	
public:
	
	Camera();
	
	void update();
	
private:

	Range hue, sat, lum;
	
};

#endif //CAMERA_HPP_
