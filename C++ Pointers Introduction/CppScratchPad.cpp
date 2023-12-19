#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

// ----------------------------------- C++ Pointers Introduction --------------------------------------------
// ref link:https://www.youtube.com/watch?v=lAHgavXXWXM&list=PLRwVmtr-pp05AW78n3IkMJ3M1dlQ-wgv1

// C++ predecessor to java and C#

void main() // functions
{
	int myVar = 23; // store in the memory stack
	int* myPointer = &myVar;		// & - means what is the address of
	// myPointer ---> myVar
	cout << myPointer << endl;    // 00000066DE56FC14 - address of myVar;
	cout << (*myPointer) << endl;		// output value: 23
	(*myPointer) = 15;
	cout << myVar << endl;
}
