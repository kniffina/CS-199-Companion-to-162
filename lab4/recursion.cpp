/*************************************************************
* Filename: recursion.cpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Date: 1/25/2016
* Description: This is the cpp file which contains the implementation
* of the fact function. It takes an unsigned long integer as a parameter.
* If the value passed in is zero (base case) then 1 is return. Otherwise
* the value passed in is multiplied by a new function call that is 1 less than the
* number. This continues until the value reaches 0.
***************************************************************/
#include "recursion.hpp"

unsigned long fact(unsigned long n)
{
	//base case
	if (n == 0)
		return 1;

	else
	{
		//return n * (n - 1) until n = 0
		return n * fact(n - 1);
	}
}