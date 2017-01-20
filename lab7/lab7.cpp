/*******************************************************************
* Filename: lab7.cpp
* Email: kniffina@oregonstate.edu
* Author: Adam Kniffin
* Email: kniffina@oregonstate.edu
* Date: 2/18/2016
* Description: This is the cpp file for lab7 of CS 199. It contains two function
* declarations, binarySearch, and linearSearch. Each of these functions take
* an integer array, int size, and int value, as its parameters. If the value
* is found, it is returned, if it is not -1 is returned. These two functions are 
* used to see which one is faster, in terms of finding the correct value.
**********************************************************************/
#include <iostream>
#include <ctime>
#include <stdlib.h>
using std::cout;

//declare linearSearch function. 
int linearSearch(int arr[], int size, int value);

//declare binarySearch function.
int binarySearch(int arr[], int size, int value);

//main function. Where the two functions are implemented. The functions are used
// 100,000,000 and the total time is calculated then displayed for each function
//respectively.
int main()
{
	//set seed so we can create random numbers
	srand(static_cast<unsigned int>(time(NULL)));

	//create two integer arrays with 1000 integers
	int arr[1000];
	int arr2[1000];
	
	for (int i = 0; i < 1000; i++)//fill the array with values from 0 - 999
	{
		int randomNumber1 = rand() % 999;
		int randomNumber2 = rand() % 999;
		arr[i] = randomNumber1;
		arr2[i] = randomNumber2;
	}

	time_t linStart = time(0);//set time before running function in forloop
	for (int i = 0; i < 100000000; i++) //loop and use function call 100,000,000 times
	{
		int randomNum = rand() % 999; //create random number between 0 -999
		linearSearch(arr, 1000, randomNum); //run function
	}
	time_t linEnd = time(0);//get time after run
	time_t totalLinearSearch = linEnd - linStart;//calculate the difference

	time_t binStart = time(0);//set time before running binary function
	for (int j = 0; j < 100000000; j++)
	{
		int randomNum = rand() % 999;//create random number between 0 - 999
		linearSearch(arr, 1000, randomNum); //run function
	}
	time_t binEnd = time(0);//get time after
	time_t totalBinarySearch = binEnd - binStart;//calculate total time to run all the functions

	cout << "It took the linear sort " << totalLinearSearch << " seconds to complete 100,000,00 searches.\n";
	cout << "It took the binary sort " << totalBinarySearch << " seconds to complete 100,000,00 searches.\n";

	return 0;
}

/*************************************************************************
 * linearSearch function takes an array, int, and int as parameters and searches
 * through the array starting at the beginning until the end, designated by the size
 * integer. If the value is found then it is returned, if it is not, then -1 is returned.
 *************************************************************************/
int linearSearch(int arr[], int size, int value)
{
	for (int i = 0; i < size; i++)//loop through the array
	{
		if (arr[i] == value)//if we find the value return its value
			return i;
	}
	return -1;
}

/*************************************************************************
* binarySearch function takes an array, int, and int as parameters and searches
* through the array starting at the beginning until the end. It finds the 
* location of the value being passed in by cutting the array in half and 
* searching in that half. It continues to cut the array in hafl until it finds
* the value, or -1 is returned. This binary search function was taken from the book
* Starting out with C++: Early objects (8th edition).
*************************************************************************/
int binarySearch(int arr[], int size, int value)
{
	int first = 0,//first array element
		last = size - 1,//last array element
		middle,//midpoint of the search
		position = -1;//position of search value, if found the value is stored, if not it is -1
	bool found = false;//bool to say if the value has been found

	while (found == false && first <= last)
	{
		middle = (first + last) / 2; //calculate midpoint

		if (arr[middle] == value) //if value is found at mid
		{
			found = true;//set bool to true
			position = middle;//
		}
		else if (arr[middle] > value)//if value is in lower half
			last = middle - 1;

		else //if value is in upper half
			first = middle + 1; 
	}
	return position;//return where the value is located
}
