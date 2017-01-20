/*******************************************************************
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 1/27/2016
* Description: This is the cpp file for the Triangle class. It contains all of the
* the function implementation. Each function will be described in more detail below.
**********************************************************************/
#include "triangle.hpp"
#include <cmath>

//default constructor sets all member variables to -1 and uses the Shape
//constructor to set the number of sides to 3
Triangle::Triangle()
	: Shape(3)
{
	this->side1 = -1;
	this->side2 = -1;
	this->side3 = -1;
}

//constructor takes in 3 double parameters and sets the corresponding
//member variable side(1,2,3), equal to the value passed in and uses the Shape
//constructor to set the number of sides to 3
Triangle::Triangle(double s1, double s2, double s3)
	: Shape(3)
{
	this->side1 = s1;
	this->side2 = s2;
	this->side3 = s3;
}

//copy constructor takes a const Triangle object by reference and sets the 
//member variable's of the new Triangle object being created, equal to that of
//the one being passed in.
Triangle::Triangle(const Triangle &obj)
{
	this->numSides = obj.numSides;
	this->side1 = obj.side1;
	this->side2 = obj.side2;
	this->side3 = obj.side3;
}

//incSides take an integer as its parameter and recursively increases
//the length of each side of the Triangle object n times. 
void Triangle::incSides(int n)
{
	//base case
	if (n == 1)
		return;
	else
	{		
		incSides(n - 1);
		this->side1 += (this->side1 / (n - 1));
		this->side2 += (this->side2 / (n - 1));
		this->side3 += (this->side3 / (n - 1));
	}
}

//area function takes no parameters. If either of the 3 sides is equal to -1 then
//0 is returned. Otherwise the area is calculated by first determining half the triangle's
//perimeter. That value is stored in the double value "s". After that the area is calculated
//by finding the sqrt of s times s minus all the different member variables. It is in more detail
//in the function below.
double Triangle::area()
{
	if (this->side1 == -1 || this->side2 == -1 || this->side3 == -1)
		return 0;
	else
	{
		double numToBeSquared;//will hold the variable that will be square rooted
		double s = (this->side1 + this->side2 + this->side3) / 2;//s = half the triangles perimeter
		numToBeSquared = (s * ((s - this->side1) * (s - this->side2) * (s - this->side3)));

		return sqrt(numToBeSquared);//area
	}
}

//perimeter takes no parameters and if any of the sides of the Triangle = -1,
//0 is returned. Otherwise the sides are all added together to get the perimter
//and the value of the perimeter is returned.
double Triangle::perimeter()
{
	if (this->side1 == -1 || this->side2 == -1 || this->side3 == -1)
		return 0;
	else
		return this->side1 + this->side2 + this->side3;
}

/**********************************************************************
* The next 3 functions are the get functions. They take no parameters and
* return a double for each respective member variable.
********************************************************************/
double Triangle::getSideLength1()
{
	return this->side1;
}

double Triangle::getSideLength2()
{
	return this->side2;
}

double Triangle::getSideLength3()
{
	return this->side3;
}
