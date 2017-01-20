/************************************************************
* Author: Adam Kniffin
* Date: 1/12/2016
* Description: This is the function declaration page for the 
* Contact class. It contains Constructors, overloaded operators, 
* get and set  functions, overloaded equality operators for Contact.
************************************************************/
#include "contact.hpp"

Contact::Contact()
{
	setName("John Doe");
	setTel("555-555-5555");
	setEmail("johndoe@gmail.com");
}

//Constructor. Takes in 3 string parameters and sets the member 
//variables equal to the value passed in by using the set functions.
Contact::Contact(string n, string tel, string em)
{
	setName(n);
	setTel(tel);
	setEmail(em);
}

//Copies the contents of a Contact class to a new Contact
//object that is created
Contact::Contact(const Contact &obj)
{
	this->name = obj.name;
	this->telNum = obj.telNum;
	this->email = obj.email;
}

//This is the overloaded not equal operator. A Contact object is passed
//into the function and if all of the member variables are equal to eachother
//true is returned. If they are not, false is returned.
bool Contact::operator==(const Contact& cont) const
{
	bool a, b, c;

	if (this->name == cont.name)
		a = true;
	else
		a = false;

	if (this->telNum == cont.telNum)
		b = true;
	else
		b = false;

	if (this->email == cont.email)
		c = true;
	else
		c = false;

	if (a == true && b == true && c == true)
		return true;
	else
		return false;
}

//This is the overloaded equal operator. A Contact object is passed
//into the function and if all of the member variables are equal to eachother
//false is returned to indicate that they are in fact equal. If one of the member
//variables is not equal the boolean value true is returned.
bool Contact::operator!=(const Contact& cont) const
{
	bool a, b, c;

	if (this->name == cont.name)
		a = true;
	else
		a = false;

	if (this->telNum == cont.telNum)
		b = true;
	else
		b = false;

	if (this->email == cont.email)
		c = true;
	else
		c = false;

	if (a == true && b == true && c == true)
		return false;
	else
		return true;
}

/***************************************************************
* The next 3 functions are the set functions for the class Contact.
* They take a string parameter and set the member variable equal to the
* value passed in. They return nothing.
****************************************************************/
void Contact::setName(string n)
{
	name = n;
}

void Contact::setTel(string t)
{
	telNum = t;
}

void Contact::setEmail(string e)
{
	email = e;
}

/***************************************************************
* The next 3 functions are the get functions for class Contact.
* They take no parameters and return a string value.
****************************************************************/
string Contact::getName()
{
	return name;
}

string Contact::getTel()
{
	return telNum;
}

string Contact::getEmail()
{
	return email;
}