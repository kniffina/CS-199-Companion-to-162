/***************************************************************
* Author: Adam Kniffin	
* Date: 1/13/2015
* Description: This is the cpp file for the class Address. It has the function
* declarations and their implementation. Each function will be described in
* more detail in the
****************************************************************/
#include "address.h"

//Default Constructor. Sets each of the member variables to 0 or NULL.
Address::Address()
{
	//strings are automatically set to 0
	setZip(-1);
}

//Constructor takes in 5 string and 1 integer as parameters and uses the Address classes 
//set functions to set each of the member variables equal to the value passed in
Address::Address(string l, string hNum, string sName, string c, string s, int z)
{
	setLabel(l);
	setHouseNumber(hNum);
	setStreetName(sName);
	setCity(c);
	setState(s);
	setZip(z);
}

//Overloaded Assignment operator passes in an Address object by 
//reference and copies its contents to the address 
Address& Address::operator=(const Address &RHS)
{
	this->setLabel(RHS.label);
	this->setHouseNumber(RHS.houseNumber);
	this->setStreetName(RHS.streetName);
	this->setCity(RHS.city);
	this->setState(RHS.state);
	this->setZip(RHS.zip);

	return* this;
}

/************************************************************************
* The next 6 functions are the sett functions for the Address class. They take 
* string and int parameters and return nothing or void.
*************************************************************************/
void Address::setLabel(string l)
{
	label = l;
}

void Address::setHouseNumber(string hNum)
{
	houseNumber = hNum;
}

void Address::setStreetName(string sName)
{
	streetName = sName;
}

void Address::setCity(string c)
{
	city = c;
}

void Address::setState(string s)
{
	state = s;
}

void Address::setZip(int z)
{
	zip = z;
}

/************************************************************************
* The next 6 functions are the get functions for the Address class.
* They take no parameters and return string or integer values.
*************************************************************************/
string Address::getLabel()
{
	return label;
}

string Address::getHouseNumber()
{
	return houseNumber;
}

string Address::getStreetName()
{
	return streetName;
}

string Address::getCity()
{
	return city;
}

string Address::getState()
{
	return state;
}

int Address::getZip()
{
	return zip;
}
