/*******************************************************************
* Author: Adam Kniffin
* Date: 1/21/2016
* Description: This is the cpp file for the Circle class. It contains all of the
* the function implementation. Each function will be described in more detail below.
**********************************************************************/
#include "circle.hpp"

//Constructor sets member variable radius to -1 and calls Shape's constructor
//and sends it the value of 0. (no sides in a circle)
Circle::Circle()
	: Shape(0)
{
	this->radius = -1;
}

//constructor takes in a single double value as it's parameters. It
//inherits class Shape's constructor and sends it the value 0 (because there is no sides).
//If the value passed into circle is NULL or nothing, the member variable radius is set to 
//-1. Otherwise radius is set to the value passed into the function.
Circle::Circle(double r) 
	: Shape(0)
{
	this->radius = r;
}

//area function takes no parameters. If the value of the object's radius variable
//is -1, the integer value -1 is returned. Otherwise it calculates the area of a cirlce
//using the formula pi (or 3.14) * radius^2. 
double Circle::area()
{
	if (this->radius == -1)
		return 0;

	else
		return (3.14 *(this->radius*this->radius));
}

//perimeter function takes no parameters. If the value of the object's radius variable
//is -1, the integer value -1 is returned. Otherwise it calculates the perimeter of the
//circle using the formula 2*pi*radius. PI is also 3.14.
double Circle::perimeter()
{
	if (this->radius == -1)
		return 0;

	else
		return (2 * 3.14 * this->radius);
}
