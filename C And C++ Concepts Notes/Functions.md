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

Types of function call
	a) call by value // in this value of actual variables is copied to formal parameters of the function This is prefered hen function is returning something and we dont want to change actual parameters.
	b) call by pointers // in this address of actual variables is passed to formal parameters of the function. This is prefered when we want to change actual parameters.
	c) call by references // In this compiler may replace the function call with the function body and no new activation record will be created in stack. Usually prefered with smaller functions. It may become inline function, it depends on the complier. 


Notes:
	References are internally created using pointer which support implecit referencing and dereferencing, code may behave like a monolithic program(compiler dependent).
	A function cannot directly access the other functions valiables, but it can access other functions variable indirectly using pointers or references.  