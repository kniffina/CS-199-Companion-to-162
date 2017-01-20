/*************************************************************
* Filename: lab9.cpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Date: 3/5/2016
* Description: This is the main file. Is is the original document
* that Darby Beltran had posted in the week 9 disussion for 
* CS 199. It tests the different ways in which the functions work
* from the myLL class.
***************************************************************/

#include <string>
#include <iostream>
#include "myll.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){


	cout << "This is the lab9 test file." << endl;


	//Demonstrate an int type
	cout << "Demonstrating a type of int..." << endl;

	myLL<int> intList;
	cout << "LL with type int created..." << endl;

	for (int i = 5; i>0; i--){

		cout << "Adding " << i << " to the LL..." << endl;
		intList.addValue(i);
	}

	cout << "LL before sort..." << endl;

	intList.displayList();

	cout << "LL after sort..." << endl;

	intList.sort();

	intList.displayList();

	cout << "Searching for 3 in LL..." << endl;

	int found = intList.search(3);

	if (found == 0){
		cout << "Search Test Passed!" << endl;
	}
	else
		cout << "Search Test Failed!" << endl;

	cout << "Searching for 10 in LL..." << endl;

	found = intList.search(10);

	if (found == 1){
		cout << "Search Test 2 Passed!" << endl;
	}
	else
		cout << "Search Test 2 Failed!" << endl;

	cout << "Removing last element of LL..." << endl;

	intList.removeLast();

	cout << "Displaying LL after removal of last element..." << endl;

	intList.displayList();

	//demonstrating a double type

	cout << "Demonstrating a type of double..." << endl;

	myLL<double> doubList;
	cout << "LL with type double created..." << endl;

	doubList.addValue(3.2);

	doubList.addValue(10.56);

	doubList.addValue(4.7);

	doubList.addValue(20.4);

	cout << "LL before sort..." << endl;

	doubList.displayList();

	cout << "LL after sort..." << endl;

	doubList.sort();

	doubList.displayList();

	cout << "Searching for 3.2 in LL..." << endl;

	found = doubList.search(3.2);

	if (found == 0){
		cout << "Search Test Passed!" << endl;
	}
	else
		cout << "Search Test Failed!" << endl;

	cout << "Searching for 2.6 in LL..." << endl;

	found = doubList.search(2.6);

	if (found == 1){
		cout << "Search Test 2 Passed!" << endl;
	}
	else
		cout << "Search Test 2 Failed!" << endl;

	cout << "Removing last element of LL..." << endl;

	doubList.removeLast();

	cout << "Displaying LL after removal of last element..." << endl;

	doubList.displayList();

	//Demonstrating a string type

	cout << "Demonstrating a type of string..." << endl;

	myLL<string> strList;
	cout << "LL with type string created..." << endl;

	strList.addValue("Zebra");

	strList.addValue("Drumpf");

	strList.addValue("Dare");

	strList.addValue("Test");

	cout << "LL before sort..." << endl;

	strList.displayList();

	cout << "LL after sort..." << endl;

	strList.sort();

	strList.displayList();

	cout << "Searching for 'Drumpf' in LL..." << endl;

	found = strList.search("Drumpf");

	if (found == 0){
		cout << "Search Test Passed!" << endl;
	}
	else
		cout << "Search Test Failed!" << endl;

	cout << "Searching for 'Temp' in LL..." << endl;

	found = strList.search("Temp");

	if (found == 1){
		cout << "Search Test 2 Passed!" << endl;
	}
	else
		cout << "Search Test 2 Failed!" << endl;

	cout << "Removing last element of LL..." << endl;

	strList.removeLast();

	cout << "Displaying LL after removal of last element..." << endl;

	strList.displayList();

	return 0;
}
