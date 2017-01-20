/*******************************************************************
* Author: Adam Kniffin
* Date: 1/21/2016
* Description: This is the cpp file for the Rectangle class. It contains all of the
* the function implementation. Each function will be described in more detail below.
**********************************************************************/
#include "rectangle.hpp"
#include <ctype.h>
#include <iostream>

//default constructor sets member variables side1 and side2 to -1. Calls
//Shape class constructor and sends it the value of 4.
Rectangle::Rectangle()
	: Shape(4)
{
	this->side1 = -1;
	this->side2 = -1;
}
//Rectangle constructor takes 2 doubles as parameters. It is determined if
//a value is passed to either side. If it is not, then that specific side is set to -1.
//Otherwise the value passed into the function is set to the member variables sid1 and side2.
Rectangle::Rectangle(double s1, double s2)
	: Shape(4)
{
	this->side1 = s1;	
	this->side2 = s2;		
}

//area function takes no parameters. If either side is equal to -1 then
//0 is returned. Otherwise the area is calculated by multiplying both sides
//together and the double value is returned.
double Rectangle::area()
{
	if (this->side1 == -1 || this->side2 == -1)
		return 0;

	else
		return (this->side1 * this->side2);
}

//perimeter function takes no parameters. If either side is equal to -1 then
//0 is returned. Otherwise the perimeter is calculated by multiplying 2 to each side
//and returning that double value.
double Rectangle::perimeter()
{
	if (this->side1 == -1 || this->side2 == -1)
		return 0;

	else
		return ((2 * side1) + (2 * side2));
}