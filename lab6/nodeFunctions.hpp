/*******************************************************************
* Filename: nodeFunctions.hpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 2/10/2016
* Description: This is the hpp file for the file nodeFunctions. It contains
* function declarations that will be used in the implementation file.
**********************************************************************/
#include <iostream>
#include "node.hpp"
#ifndef NODEFUNCTIONS_HPP
#define NODEFUNCTIONS_HPP

//displayList takes no parameter and prints the elements in the list
void displayList(Node *nodePtr);

//addValue functions returns void and takes an int parameter
void addValue(Node *&nodePtr, int number);

//removeLast functions returns void and takes an int parameter
void removeLast(Node *&nodePtr);

//takes a pointer to node and destroys all elementsin the list
void destroyList(Node *&nodePtr);

#endif