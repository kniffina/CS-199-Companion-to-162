/***************************************************************
* Author: Adam Kniffin
* Date: 1/15/2016
* Description: This is the header file for class Address. It contains
* member variables, function declarations, and any other functions
* that are going to be used for the class. They are described in more detail
* below.
****************************************************************/

#include <iostream>
using std::string;

#ifndef KNIFFINA_ADDRESS_H
#define KNIFFINA_ADDRESS_H

class Address
{
private:
	//Member Variables
	string label;
	string houseNumber;
	string streetName;
	string city;
	string state;
	int zip;

public:
	//Default Constructor
	Address();

	//Constructor
	Address(string, string, string, string, string, int);

	//Overloaded assignment operator
	Address & operator=(const Address&);

	//Mutators
	void setLabel(string);
	void setHouseNumber(string);
	void setStreetName(string);
	void setCity(string);
	void setState(string);
	void setZip(int);

	//Accessors
	string getLabel();
	string getHouseNumber();
	string getStreetName();
	string getCity();
	string getState();
	int getZip();

};

#endif