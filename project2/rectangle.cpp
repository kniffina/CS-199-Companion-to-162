/*******************************************************************
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 1/27/2016
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

//copyConstructor
Rectangle::Rectangle(const Rectangle &obj)
{
	this->numSides = obj.numSides;
	this->side1 = obj.side1;
	this->side2 = obj.side2;
}

//incSides take an integer as its parameter and recursively increases
//the length of each side of the Rectangle object n times. 
void Rectangle::incSides(int n)
{
	//base case
	if (n == 1)
		return;
	else
	{
		incSides(n - 1);
		this->side1 += (this->side1 / (n - 1));
		this->side2 += (this->side2 / (n - 1));
	}
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

/**********************************************************************
 * The next 2 functions are the get functions. They take no parameters and
 * return a double for each respective member variable.
 ********************************************************************/
double Rectangle::getSideLength1()
{
	return this->side1;
}

double Rectangle::getSideLength2()
{
	return this->side2;
}


