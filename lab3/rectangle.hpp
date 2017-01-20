/*******************************************************************
* Author: Adam Kniffin
* Date: 1/21/2016
* Description: This is the header file for the Rectangle class. It contains
* member variables, function declarations, and other useful functions.
**********************************************************************/
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "shape.hpp"

class Rectangle : public Shape
{
private:
	//member variables
	double side1;
	double side2;
public:
	//default constructor
	Rectangle();

	//Constructor
	Rectangle(double, double);
	
	//geometry functions
	double area();
	double perimeter();
};

#endif