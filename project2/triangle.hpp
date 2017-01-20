/*******************************************************************
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 1/27/2016
* Description: This is the header file for the Triangle class. It contains
* member variables, function declarations, and other useful functions.
* it is inherited from the Shape class.
**********************************************************************/
#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
#include "shape.hpp"

class Triangle : public Shape
{
private:
	//member variables
	double side1;
	double side2;
	double side3;
public:
	//default constructor
	Triangle();

	//constructor
	Triangle(double, double, double);

	//copy constructor
	Triangle(const Triangle &);

	//recursive function that increases the length of each side n times
	void incSides(int);

	//geometry functions
	double area();
	double perimeter();

	//returns the length of each side in the class
	double getSideLength1();
	double getSideLength2();
	double getSideLength3();

};

#endif