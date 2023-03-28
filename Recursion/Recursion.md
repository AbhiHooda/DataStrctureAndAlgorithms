Recursion:

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