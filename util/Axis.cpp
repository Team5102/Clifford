#include "Axis.hpp"

Axis::Axis():
	x(x_port),
	y(y_port){}

Axis::

Axis::~Axis(){}

void Axis::up()
{
	if(y.Get() > 150)
	{
		y.Set(y.Get() + 15);
	}
}

void Axis::down()
{
	if(y.Get() > 16)
	{
		y.Set(y.Get() -15);
	}
}

void Axis::left()
{
	//if(x.Get() < 150)
	//{
		x.Set(x.Get() + 15);
	//}
}

void Axis::right()
{
	//if(x.Get() > 16)
	//{
		x.Set(x.Get() -15);
	//}
}

void Axis::move(AxisType axisType, float move)
{
	
	switch(axisType)
	{
		case 0:
		y.Set(move);
		break;
		case 1:
		y.Set(-move);
		break;
		case 2:
		x.Set(-move);
		break;
		case 3:
		x.Set(move);
		break;
	}	
}

float Axis::get()
{
	return x.Get();
}
