/***************************************************************
* Author: Adam Kniffin	
* Date: 1/13/2015
* Description: This is the cpp file for the Person class. It contains
* a default constructor, overload constructor, destructor, copy constructor, 
* and overloaded = operator. There are more functions that will be described in 
* more detail throughout this file. 
****************************************************************/
#include "person.h"
#include "address.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

//Default constructor initializes member variables to 0 or Null
Person::Person()
{
	setFirst("John");
	setLast("Doe");
	setAge(-1);
	setTel(-1);

	//set variable counting # of Addresses to 0
	setNumAddrs(0);

	//Loops through the array of Address pointers and sets 
	//the valuesto 0 or NULL
	for (int i = 0; i < 10; i++)
	{
		this->array[i] = NULL;
	}
}

//Constructor. Takes in 2 string parameters, and an 2 int parameters
//and sets the member variables equal to the values passed in using 
//each member variables set functions. 
Person::Person(string fName, string lName, int a, int t)
{	
	setFirst(fName);
	setLast(lName);
	setAge(a);
	setTel(t);
	setNumAddrs(0);

	for (int i = 0; i < 10; i++)
	{
		this->array[i] = NULL;
	}
}

//Destructor sets all values in the array of pointers to Address's
//back to 0 or NULL.
Person::~Person()
{
	for (int i = 0; i < 10; i++)
	{
		if (this->array[i] == NULL)
			;
		else
		{
			this->array[i] = NULL;
		}
	}
	
}

//Copy Constructor takes a Person object by reference and copies it contents
//into a new Person object. 
Person::Person(const Person& obj)
{
	if (this == &obj)
		;

	else
	{
		this->firstName = obj.firstName;
		this->lastName = obj.lastName;
		this->age = obj.age;
		this->telNum = obj.telNum;
		this->numAddrs = obj.numAddrs;

		//loops through the amount of address in the object being
		//passed in
		for (int i = 0; i < 10; i++)
		{
			if (this->array[i] != NULL)
			{
				this->array[i] = NULL;				
			}
			
			this->array[i] = new Address;
			this->array[i] = obj.array[i];
		}		
	}
}

Person& Person::operator=(const Person& obj)
{
	if (this == &obj)
		return *this;

	else
	{
		this->firstName = obj.firstName;
		this->lastName = obj.lastName;
		this->age = obj.age;
		this->telNum = obj.telNum;
		this->numAddrs = obj.numAddrs;

		//loops through the amount of address in the object being
		//passed in
		for (int i = 0; i < obj.numAddrs; i++)
		{
			if (this->array[i] != NULL)
			{
				this->array[i] = NULL;
			}
			this->array[i] = new Address; 
			this->array[i] = obj.array[i];
		}
		return *this;
	}
}

void Person::displayPerson()
{
	cout << "\nName: " << getFirst() << " "
		<< getLast() << "\nAge: " << getAge() <<
		"\nTelephone Number: " << getTel() << "\nAddress(es): \n";

	for (int i = 0; i < this->getNumAddrs(); i++)
	{
		cout << "Label: " << this->array[i]->getLabel() << endl;
		cout << "Street: " << this->array[i]->getHouseNumber()
			<< " " << this->array[i]->getStreetName() << endl;
		cout << "City: " << this->array[i]->getCity() << endl;
		cout << "State: " << this->array[i]->getState() << endl;
		cout << "Zip: " << this->array[i]->getZip() << endl;
	}
}


void Person::addAddress(Address &newAddr)
{
	this->array[numAddrs] = new Address;
	*this->array[numAddrs] = newAddr;

	//increment the number of Addresses in the Address Book
	this->numAddrs++;
}

/************************************************************************
* The next 4 functions are the set functions for the Person class.
* They take string and int parameters and return nothing, or void.
*************************************************************************/
void Person::setFirst(string firstN)
{
	firstName = firstN;
}

void Person::setLast(string lastN)
{
	lastName = lastN;
}

void Person::setAge(int a)
{
	age = a;
}

void Person::setTel(int tel)
{
	telNum = tel;
}

void Person::setNumAddrs(int n)
{
	numAddrs = n;
}

/************************************************************************
* The next 4 functions are the get functions for the Person class.
* They take no parameters and return string or integer values.
*************************************************************************/
int Person::getNumAddrs()
{
	return numAddrs;
}
string Person::getFirst()
{
	return firstName;
}

string Person::getLast()
{
	return lastName;
}

int Person::getAge()
{
	return age;
}

int Person::getTel()
{
	return telNum;
}
