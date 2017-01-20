/*******************************************************************
* Author: Adam Kniffin
* Date: 1/21/2016
* Description: This is the header file for the Shape class. It contains
* member variables, function declarations, and other useful functions.
**********************************************************************/
#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape
{
protected:
	//member variable(s)
	int numSides;
public:
	//Default constructor.
	Shape();

	//constructor
	Shape(int);

	//Geometry functions
	double area();
	double perimeter();

	//get sides function
	int getSides();

};

#endif
