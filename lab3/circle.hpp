/*******************************************************************
* Author: Adam Kniffin
* Date: 1/21/2016
* Description: This is the header file for the Circle class. It contains
* member variables, function declarations, and other useful functions.
**********************************************************************/
#include "shape.hpp"
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle : public Shape
{
private:
	//member variable(s)
	double radius;
public:
	//default constructor
	Circle();

	//constructor
	Circle(double);

	//other functions
	double area();
	double perimeter();
};

#endif