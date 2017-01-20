/************************************************************
 * Author: Adam Kniffin
 * Date: 1/13/2016
 * Description: The is the header file for class Contact. It contains
 * member variables and function declarations that will be defined in more
 * detail in the .cpp file for Contact.
 ************************************************************/
#include <string>
using std::string;

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact
{
private:
	string name;
	string telNum;
	string email;
public:
	//Default constructor that initializes member variables
	Contact();
	
	//Constructor
	Contact(string, string, string);
	
	//Copy constructor
	Contact(const Contact &);

	//Overloaded == operator
	bool operator==(const Contact& c) const;

	//Overloaded != operator
	bool operator!=(const Contact& c) const;

	//set functions
	void setName(string);
	void setTel(string);
	void setEmail(string);

	//get functions
	string getName();
	string getTel();
	string getEmail();

};

#endif
