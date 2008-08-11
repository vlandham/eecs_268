//pointers
#include <iostream>

// compile using something like:
//
//	g++ pointers.cpp -o points
	
// and run

// ./points

using namespace std;

int main()
{
	int *p; //pointer that can point to ints; an integer pointer
	
	int x = 7;
	
	p = &x;  //p contains the address of x.  Think of & as 'address'
	
	cout << "x : " << x << endl;
	
	// the next line will print out p -- which is the address of x NOT the value in x;
	// This is not very useful to anyone.
	cout << "p (address of x) : " << p << endl;
	
	//This will print out the value stored in the address held in p -- the value stored in x.
	cout << "*p (value of what p points to) : " << *p << endl;
	
	// referencing the same address with two pointers:
	
	int *q; // this is another pointer that can point to integers.
	
	if(p != q)
		cout << "just because they're pointers, doesn't make them equal" << endl;
	
	// now we'll have q point to the same thing as p -- the value stored by x;
	
	q  = &x; // same as before with p
	
	if(p == q)
		cout << "now they are equal as they both contain the same address" << endl;
	
	if(*p == *q)
		cout << "as you would expect, the value pointed to by both of these is the same as well" << endl;
	
	// now lets change the value stored in the address stored by p and q.
	
	*p = 2; // this changes the value stored in the address held by p. Meaning *p, *q, and x will change.
	cout << "x now has changed : " << x << endl;
	cout << "as have *p : " << *p << " and *q : " << *q << endl;
	
	cout << "(but not p or q as we haven't changed addresses, only whats stored in that address)" << endl;
	cout << "p : " << p << " q : " << q << endl;
	
	// Now lets dynamically create a new integer.
	
	q = new int; // now q points to an unnamed integer stored in a new memory location
	
	if(p != q)
	{
		cout << "See, the address stored in q has changed:" << endl;
		cout << "q : " << q << endl;
		cout << "p : " << p << endl;
	}
	
	*q = 55; // now the value stored at the address held in q is set to 55.
	cout << "*q : " << *q << endl;
	
	//always make sure to delete dynamically allocated variables.
	cout << "before delete: " << q << " : " << *q << endl;
	delete q; // deletes the value stored in the address held by q
	cout << "after delete: " << q << " : " << *q << endl;
	// but q still points to that address.  which is why we want to set it to NULL.
	
	q = NULL;  // see how we didn't say "*q = NULL" as that wouldn't make sense.  We are setting
			  // the address to NULL so we don't try to get at the deleted variable.
			  // that variable is gone and the memory it took up is restored with the delete call.
			
	cout << "after null: " << q << endl; // now its 'q' that is = 0 (i.e. null) and not *q

}

