Recursion:

	"“In order to understand recursion, one must first understand recursion.”"

	A function calling itself, then it is called as recrsive function

	Recursive function prototye

	void fun(<parameter>)
	{
		if (<base_condition>)
		{
			return
		}
		fun(<updated_parameter>)
	}

	Note : A base condition is mandatory in a recursive function, otherwise it will go in infinite loop.

	Implicitely complier use stack memory for recursive functions. So its a limitation on how many recursive call can be made is based on stack memory allocated to the programs.

	Each recusrsive call will have its on stack activation record in memory.

	e.g : function to print natural number in reverse order from 100

	void fun(int n)
	{
		if (n >= 100)
		{
			return;
		}
		fun(n - 1);
		cout<< n << endl;
	}

KeyPoints:
	Recursion has to phases
	a) calling phase
	b) returning phase

	For Tracing Recursion its better to create a Recursion Tree to visualize the recursion calls and function processing. 

Generalizing Recursion:

	void fun(int n)
	{
		if (n > 0)
		{
			// statements here will be executed at calling time

			fun(n -1);

			// statements here will be executed at returning time
		}
	}

How Recursion uses stack:
	The Call Stack
		Recursive functions use something called “the call stack.” When a program calls a function, that function goes on top of the call stack. This is similar to a stack of books. You add things one at a time. Then, when you are ready to take something off, you always take off the top item.

KeyPoints:
	Tail Recursion : If Recursive call is made at the end of the function.

	Head Recursion : If Recursive Call is made at the starting of the function

Static Variable in Recursion:

	 Static variables are created in data segment of the memory allocated to the program. Only one copy of static variable is maintained even if its been declared inside the function.

	 Operating system allocates a memory to any program, that memory is usually divivded into 4 segments/logial partition.

	 a) text/code : stores the compiled code for the program.
	 b) data : stores global and static variables.
	 c) stack : stores function call records
	 d) heap : used for dynamic allocated memory.

Types of Recursions:

a) Tail Recursion : can be easily convert to loop, better to use loop if program is using Tail recursion as loop will save memory because recursion will internally uses stack for recrsive calls.
b) Head Recursion : When function is doing processing at returning time. Not eaily converted to loop, but it can be converted.
c) Tree Recursion
d) Indirect Recursion : there may be more then one function and they call each other in circular manner.
e) Nested Recursion: In nested recursion parameter is passed as recursive call. 

e.g : int fun(int n)
	  {
	  	if (n > 100)
	  		return n - 10;
	  	else
	  		return fun(fun(n + 1));
	  }	

Tail and Head Recursion are linear Recursion.
Tree Recursion: When function is calling itself multiple times.

Time compleity for Tree recursion can be calculated by checking number of functin calls were made at each level. Space compleity will be the height of the tree.

