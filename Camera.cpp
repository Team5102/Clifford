/* 
 * Generated on 1/24/14
 * By FIRST FRC Team 5102
 */

#include "Camera.hpp"

Camera::Camera()
{
	
	//The below is not used;
	hue.minValue = 140;
	hue.maxValue = 155;
	
	sat.minValue = 100;
	sat.maxValue = 255;
	
	lum.minValue = 40;
	lum.maxValue = 255;
}

void Camera::update()
{
	
	TrackingThreshold t = GetTrackingData(FrcHue(2), FrcLight(4));
	ParticleAnalysisReport par;
	
	if(FindColor(IMAQ_HSL, &t.hue, &t.saturation, &t.luminance, &par ))
	{
		std::cout << "x and y" << "\n"; 
		std::cout << par.center_mass_x_normalized; std::cout << " " << par.center_mass_y_normalized << "\n";
		
		std::cout << "color percent \n" << par.particleToImagePercent << "\n";
	}else
	{
		std::cout << "No image found";
	}
}
