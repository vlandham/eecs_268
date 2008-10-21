#include <iostream>
#include <string>
#include <fstream>
#include <stack>
#include <queue>

using namespace std;

bool isPal(string inputString);

int main(int argc, char* argv[])
{
	// check that the correct number of arguments have been given
	//  one for the program name and one for the input file.
	//  produce error message to cout and exit if wrong number
	
	// attempt to open the file
	//  produce error message and exit if file is not opened
	
	// input will contain the input string
	string input = "";
	
	//read in from file the first input string
	
	// while the input string is not equal to 'end'
	while()
	{
	
		//call isPal on input string
		
		//print out message including input string
		//  and if it was a palindrome or not
		
		// read in next input string
	}
	return 0;
}

// uses stl implementation of stack and queue to test 
//  if inputString is a palindrome
bool isPal(string inputString)
{
	//create stack
	stack<char> cStack;
	// create queue
	queue<char> cQueue;
	
	
	int stringLength = inputString.length();
	
	for(int i=0;i<stringLength;i++)
	{
		char letter = inputString[i];
		//add each letter to the stack and queue
	}
	
	// bool that is changed to false if two characters are not equal
	bool charactersEqual = true;
	
	//while the queue is not empty and charactersEqual is true
	while()
	{
		// get the front of the queue -- don't de-queue yet
		
		// get the top of the stack -- don't pop yet
		
		// if the front of the queue and the top of the stack are equal
		if()
		{
			// remove the first element of the queue
			// pop the stack
		}
		else
		{
			charactersEqual = false;
		}
		
	}
	return charactersEqual;
}
