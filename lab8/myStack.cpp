/*******************************************************************
* Filename: myStack.hpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 2/24/2016
* Description: This is the cpp file for the myStack class. It contains
* function implementation. Each function is described in 
**********************************************************************/
#include <iostream>
#include "myStack.hpp"
using std::cout; 

//constructor sets all the values in the array to NULL and sets the 
//numberElements member variable to 0
myStack::myStack()
{ 
	for (int i = 0; i < 10; i++) 
		array[i] = NULL; 

	this->numberElements = 0;//set numberElements variable to 0	
}

/************************************************************
 * push function takes an integer as its parameter. If the stack is
 * full then false is returned. If there is room, then the value is added
 * and true is returned.
 *************************************************************/
bool myStack::push(int val)
{
	if (this->numberElements == 10)//array is full
	{
		cout << "The list is full. You must remove (pop) a value to add a new integer value!\n";
		return false;//return  bool false
	}
	else //add the value to the stack
	{
		array[this->numberElements] = val;//set value equal to numberElements array spot
		this->numberElements++;//increment numberElements
		return true;
	}
}

/*************************************************************
 * pop function deletes the top value in the list. It uses the 
 * the member variable numberElements to determine the last value
 * in the list, then sets it to NULL and decrements numberElements. 
 *************************************************************/
bool myStack::pop()
{
	if (this->numberElements == 0)//no elements in the list
		return false;
	else
	{
		array[this->numberElements - 1] = NULL;//set the last value to NULL. -1 because array starts at 0
		this->numberElements--;//decerement numberElements variable
		return true;
	}
}
/************************************************************
* top function returns the value at the top of the stack list.
* If there are no elements -1 is returned, otherwise, the top 
* integer value is returned.
*************************************************************/
int myStack::top()
{
	if (this->numberElements == 0)//no elements in the list
		return -1;
	else
	{
		int top = array[this->numberElements - 1];//-1 because array starts at 0
		return top;//return the integer value at top
	}	
}

/************************************************************
* print function takes no parameters and simply walks through each element
* in the array and outputs the value at that location of the array. 
* If the array is empty, that is outputted as well.
*************************************************************/
void myStack::print()
{
	if (this->numberElements == 0)//nothing in the list
		cout << "Nothing in the list!\n";

	else
	{
		cout << "The contents of the array are: ";
		//forloop is as big as the number of elements in the array
		for (int i = 0; i < this->numberElements; i++)
			cout << array[i] << " | ";
			
		cout << "\n";
	}
}
