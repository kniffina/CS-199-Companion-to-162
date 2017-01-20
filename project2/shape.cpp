/*******************************************************************
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 1/27/2016
* Description: This is the cpp file for the Shape class. It contains all of the
* the function implementation. Each function will be described in more detail below.
**********************************************************************/
#include "shape.hpp"
#include <ctype.h>
#include <iostream>

//default constructor sets member variable numSides to -1.
Shape::Shape()
{
	this->numSides = -1;
}
//constructor takes an integer parameter. If no value is passed
//in the member variable numSides is set to -1. Otherwise numSides is set 
//to the value being passed into the function.
Shape::Shape(int sides)
{
	this->numSides = sides;
}

//The copy constructor takes a const Shape object by reference and copies the contents
//of the new Shape object to the new object being created.
Shape::Shape(const Shape &obj)
{
	this->numSides = obj.numSides;
}
//area takes no parameters and returns integer value -1
double Shape::area()
{
	return -1;
}

//perimeter takes no parameters and returns integer value -1
double Shape::perimeter()
{
	return -1;
}

//getSides takes no parameters and returns number of sides for given object
int Shape::getSides()
{
	return this->numSides;
}