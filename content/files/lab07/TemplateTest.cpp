#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"

int main()
{
	//create stack that holds ints
	Stack<int> iStack;
	
	// test int stack
	iStack.push(50);
	iStack.push(40);
	iStack.push(30);
	int temp;
	cout << "iStack: ";
	while(!iStack.isEmpty())
	{
		iStack.pop(temp);
		cout << temp << " ";
	}
	cout << endl;
	
	//create stack that holds strings
	Stack<string> sStack;
	
	// test string stack
	sStack.push("stack");
	sStack.push("string");
	sStack.push("a");
	sStack.push("Now");
	
	string tS = "";
	cout << "sStack: ";
	while(!sStack.isEmpty())
	{
		sStack.pop(tS);
		cout << tS << " ";
	}
	cout << endl;
	
	return 0;
}

