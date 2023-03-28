Functions
	A function is a group of related instructions to perform a specifc task. A function is also known as module or procedure.

	if we put all instructions in main then this type of programming is known as monolithic programming, breaking down of program into smaller task or procedure is known as modular or procedural programming, benefit of this is increased productivity, code reusabillity and managining and testing of code will e easy as we need to test each individual procedures. 

	So c is a procedural or modular programming language.

e.g
	#include<iostream>
	using namespace std;

	int add (int a, int b); // prototype or signature of function

	int main()
	{
		int x, y, z;
		x = 10;
		y = 20;
		z = add(x, y); // x , y are actual parameters 
		cout<<z<<endl;
	} 

	// function declaration

	int add(int a, int b) // a, b are formal parameters.
	{
		int c;
		c = a + b;
		return c;
	}

Passing Arrays as parameters:
	An array name is the pointer to the first element of the array

	// syntex to pass array as parameter:
		void fun(int A[], int size)
		or 
		void fun(int *A, int n)

    // Retrning Array from function
    	int * fun(int n) // Some compiler doesn't support [] in return so better to use *
    	int [] fun(int n)
    	{
    		int *p;
    		p = (int *) malloc(n * sizeof(int)); // Allocating contigious memory on n * sizeof(int))
    		return p;
    	}
Types of function call
	a) call by value // in this value of actual variables is copied to formal parameters of the function This is prefered hen function is returning something and we dont want to change actual parameters.
	b) call by pointers // in this address of actual variables is passed to formal parameters of the function. This is prefered when we want to change actual parameters.
	c) call by references // In this compiler may replace the function call with the function body and no new activation record will be created in stack. Usually prefered with smaller functions. It may become inline function, it depends on the complier. 
Examples:
	
	#include<iostream>
	using namespace std;

	void fun(int A[])
	{
		cout<< sizeof(A)/sizeof(int); // this will print 2 as size of pointer is 8 and int is 4 and this shows arrays are passed by address
	}

	int main()
	{
		int A[] = {1,2,3,4,5};
		fun(A);
		cout<< sizeof(A)/sizeof(int); // this will print 5
	}


	#include<iostream>
	using namespace std;

	void fun(int A[])
	{
		for(int a:A) // This will give error as we cannot use foreach loop on pointer
		{
			cout<<a<<endl;
		}
	}

	int main()
	{
		int A[] = {1,2,3,4,5};
		fun(A);
		cout<< sizeof(A)/sizeof(int); // this will print 5
	}

	Takeaway : Arrays in parameter will behave like a pointer.

	Passing structure as Parameter to function
	struct Test
	{
		int A[5];
		int n;
	}

	void fun(struct Test t1)
	{
		// Here struct is passed as value so a copy of A[] will be created. 
	}
	int main()
	{
		struct Test t = {{1,2,3,4,5}, 5};
		fun(t);
	}

	Takeaway : When a structure is passed by valueeven it is having an array, it will be passed by value not address.

Notes:
	References are internally created using pointer which support implecit referencing and dereferencing, code may behave like a monolithic program(compiler dependent).
	A function cannot directly access the other functions valiables, but it can access other functions variable indirectly using pointers or references.  