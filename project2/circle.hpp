/*******************************************************************
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 1/27/2016
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

	//copy constructor
	Circle(const Circle &);

	//recursive function that increases the length of radius n times
	void incSides(int);

	//other functions
	double area();
	double perimeter();

	//get function
	double getRadius();
};

#endif