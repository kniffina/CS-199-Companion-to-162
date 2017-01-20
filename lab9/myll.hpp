/*************************************************************
* Filename: myll.hpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Date: 2/16/2016
* Description: This is the hpp file for a Node structure. It contains
* two member variable declarations. 
***************************************************************/
#ifndef MYLL_HPP
#define MYLL_HPP
#include <iostream>
using std::cout;

template <typename T>
class myLL
{
protected:
	//create a Node structure
	struct Node
	{
		T value;//declare Monster pointer named value
		Node *next;//declare Node element pointer of next

	}; Node *head;
public:
	//constructor that sets the head of the list to NULL
	myLL() { head = NULL; }

	//destructor
	~myLL();

	//displayList outputs all of the types of monsters in the list
	void displayList();

	//add / remove functions
	void addValue(T);
	void removeLast();

	//sorts the values in ascending order
	void sort();

	//goes through the values and searches for T
	bool search(T);
};

#endif


/*****************************************************************************
* displayList takes a pointer to a Node strut and starts at the head of the
* list and displays each of the values that are in the list. This will continue
* until there are no more elements to display.
*****************************************************************************/
template <typename T>
void myLL<T>::displayList()
{
	Node *current = head;
	if (current == NULL)//nothing in the list
		cout << "List is empty!\n";

	while (current != NULL)//cout until current != NULL (end of list)
	{
		cout << current->value << "\n";
		current = current->next;//move to next position
	}
}

/*****************************************************************************
*  addValue function takes a pointer to a Node element and an integer value as its
* parameters. It creates a new Node and sets the new nodes value to the number being passed in.
* If the Node being passed in is null, then it is set as the first element. If it is not, then
* the function goes through the list to find Null (end) and adds the value at the end.
*****************************************************************************/
template <typename T>
void myLL<T>::addValue(T variable)
{
	Node *newNode = new Node;//create a new Node
	newNode->value = variable;//set the value to the Monster passed in
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
template <typename T>
void myLL<T>::removeLast()
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
* destructor will delete all of the elements in the List.
*****************************************************************************/
template <typename T>
myLL<T>::~myLL()
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

/*********************************************************************************
 * search takes a T variable as its parameters and goes through each value in the list
 * to determine if it is in the list. If it is, then true is returned. If the
 * value is not found then false is returned. 
 *******************************************************************************/
template <typename T>
bool myLL<T>::search(T variable)
{
	Node *current = head;
	bool valueReturn = false;
	if (current == NULL)//nothing in the list
		cout << "List is empty!\n";

	else if(head->next == NULL)//1 value
		if (head->value == variable)
			valueReturn = true;
	
	else
	{
		while (current != NULL)//cout until current != NULL (end of list)
		{
			if (current->value == variable)
			{
				valueReturn = true;
				break;
			}
			else
				valueReturn = false;
		}
	}
	return valueReturn;
}

/*********************************************************************************
* sort takes no parameters and puts the list into ascending order. 
*******************************************************************************/
template <typename T>
void myLL<T>::sort()
{
	if (head == NULL)
		cout << "No items to sort!\n";

	else if (head->next == NULL)
		return;

	else
	{

	}

}

