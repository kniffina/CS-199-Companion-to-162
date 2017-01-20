/*******************************************************************
* Filename: myStack.hpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 2/24/2016
* Description: This is the header file for the myStack class.
**********************************************************************/
#include "myStack.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string; 

int main()
{
	myStack s1;//declare a myStack object named s1
	
	bool done = false;//set bool for while loop
	while (done == false)
	{
		string choice;//variable for user to enter what they want to do
		cout 
			 << "\nEnter the corresponding number to select that Option!\n"
			 << "Option 1 - * Push * Adds an Element to the top of the Stack.\n"
			 << "Option 2 - * Pop * Removes the top element from the Stack.\n"
			 << "Option 3 - * Top * Returns the value of the top element\n"
			 << "Option 4 - * Print * Prints all the values in the list\n"
			 << "Option Q - * Quit * Hit 'Q' to exit the program.\n";
		cin >> choice;

		if (choice == "1")//push function, adds an element to the top of the list
		{
			int value;//variable to add to lsit
			cout << "What integer value would you like to add to the list?\n";
			cin >> value;
			s1.push(value);//push the value onto the stack
		}
		else if (choice == "2")//pop function, removes the top element and returns true if removed
		{
			int removed = s1.pop();//set the variable to the remove function and remove the top variable
			if (removed == 1)//true. value removed
				cout << "Value REMOVED from the top of the list!\n";
			else
				cout << "No values in the list to remove!\n";

		}
		else if (choice == "3")
		{
			int value;//declare variable to hold value that is returned
			value = s1.top();//return value using top function
			if (value == -1)//list is empty
				cout << "The list is empty. No values at the top of it!\n";
			else
				cout << "The value at the top of the list is: " << value << "\n";
		}
		else if (choice == "4")
		{
			s1.print();//use print function to print values
		}
		else if (choice == "Q" || choice == "q")
		{
			cout << "Thank you for using the program!\n";
			done = true;//set done to true to exit while loop
		}
		else
		{
			cout << "***   ERROR. Invalid input. Please look at the menu options and re-enter your choice   ***\n";
		}

	}
}
