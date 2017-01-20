/*************************************************************
* Filename: myll.hpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Date: 2/16/2016
* Description: This the cpp file for the myLL class. It contains a destructor
* and function implementation which will be described in  more detail below. 
***************************************************************/
#include "myll.hpp"
#include <iostream>
using std::cout;

/*****************************************************************************
* destructor will delete all of the elements in the List.
*****************************************************************************/
myLL::~myLL()
{
	Node *current = head;//make new node and set it to head
	Node *next;//create next Node

	while (current != NULL)//use while loop to loop until NULL comes up
	{
		next = current->next;//set next to current->next. Starts at begging, goes till end
		delete current;//delete the current node
		current = next;//set current back to next
	}
	head = NULL;//set head to NULL
	cout << "List Destroyed!\n";//output that the list has been destroyed
}

/*****************************************************************************
* displayList takes a pointer to a Node strut and starts at the head of the
* list and displays each of the values that are in the list. This will continue
* until there are no more elements to display.
*****************************************************************************/
void myLL::displayList()
{
	Node *current = head;
	if (current == NULL)//nothing in the list
		cout << "List is empty!\n";

	while (current != NULL)//cout until current != NULL (end of list)
	{
		cout << current->value->getType() << "\n";
		current = current->next;//move to next position
	}
}

/*****************************************************************************
*  addValue function takes a pointer to a Node element and an integer value as its
* parameters. It creates a new Node and sets the new nodes value to the number being passed in.
* If the Node being passed in is null, then it is set as the first element. If it is not, then
* the function goes through the list to find Null (end) and adds the value at the end.
*****************************************************************************/
void myLL::addValue(Monster *monster)
{
	Node *newNode = new Node;//create a new Node
	newNode->value = monster;//set the value to the Monster passed in
	newNode->next = NULL;//set the next variable to NULL

	if (head == NULL)//head is NULL
		head = newNode;//set head equal to the newNode already created

	else
	{
		Node *temp2 = head;//create a new pointer that starts at head
		while (temp2->next != NULL)//loop until NULL is reached
		{
			temp2 = temp2->next;//move through the list
		}//end of while loop
		temp2->next = newNode;//set the 
	}
}

/*****************************************************************************
* removeLast takes a pointer to a Node and deletes the last element in the List.
* If the list as no elements, the functions outputs that, and if the function's
* item that is deleted is the last element in the list, it outputs that. Otherwise
* the Node is simply deleted from the back of the list.
*****************************************************************************/
void myLL::removeLast()
{
	if (head == NULL)//nothing there
		cout << "Nothing in the list!\n";

	else if (head->next == NULL)//last item in the list
	{
		delete head;
		head = NULL;
		cout << "Removed from the list. There are now NO elements LEFT!\n";
	}
	else
	{
		Node *nextToEnd = head;//create two Node pointer variables and point them to 
		Node *end = head->next;//to head and the value after head. 

		while (end->next != NULL)//loop until the next pointer is NULL
		{
			nextToEnd = end;
			end = end->next;
		}
		delete end;//delete
		nextToEnd->next = NULL;//set to NULL
		cout << "Removed from the list!\n";
	}
}

/*****************************************************************************
* attack function moves through each monster in the list and uses the attack function
* to call that specific function for reach Monster.
*****************************************************************************/
void myLL::attack()
{
	Node *current = head;
	if (current == NULL)//nothing in the list
		cout << "List is empty!\n";

	else if (head->next == NULL)//1 item in the list
		head->value->attack();

	else
	{
		while (current != NULL)//cout until current != NULL (end of list)
		{
			current->value->attack();
			current = current->next;//move to next position
		}
	}
}
