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

Xbox::~Xbox(){}
