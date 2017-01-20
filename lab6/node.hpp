/*******************************************************************
* Filename: node.hpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 2/10/2016
* Description: This is the header file for a node Struct. It contains a pointer
* called next, and a declaration of an int value.
**********************************************************************/
//**** PAGE 1028 IN BOOK 
#include <iostream>
#ifndef NODE_HPP
#define NODE_HPP

//making actual ListNode class? or just creating node Struct
struct Node {

	int value;//declare integer value
	Node *next;//declare node pointer next
}; 

#endif


