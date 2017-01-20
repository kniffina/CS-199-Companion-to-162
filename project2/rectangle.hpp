/*******************************************************************
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 1/27/2016
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

	//copy constructor
	Rectangle(const Rectangle &);

	//recursive function that increases the length of each side n times
	void incSides(int);

	//geometry functions
	double area();
	double perimeter();

	//returns the length of each side
	double getSideLength1();
	double getSideLength2();
};

#endif