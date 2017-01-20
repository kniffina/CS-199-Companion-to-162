/***************************************************************
* Author: Adam Kniffin
* Date: 1/15/2016
* Description: This is the header file for class Person. It contains
* member variables, function declarations, and any other functions
* that are going to be used for the class. They are described in more detail
* below.
****************************************************************/
#include <iostream>
#include "address.h"
using std::string;
using std::cin;

#ifndef KNIFFINA_PERSON_H
#define KNIFFINA_PERSON_H

class Person
{
private:
	//Member Variables
	string firstName;
	string lastName;
	int age;
	int telNum;
	Address* array[10];
	int numAddrs; 

public:
	//Default constructor
	Person();
	//Constructor
	Person(string, string, int, int);
	//destructor
	~Person();
	//copy constructor
	Person(const Person &);
	//Overloaded assignment operator = 
	Person & operator=(const Person&);

	//mutators
	void setFirst(string);
	void setLast(string);
	void setAge(int);
	void setTel(int);
	void setNumAddrs(int);

	//accessors
	string getFirst();
	string getLast();
	int getAge();
	int getTel();
	int getNumAddrs();

	void displayPerson();//displays information about a person including addresses
	void addAddress(Address &newAddr);
};

#endif