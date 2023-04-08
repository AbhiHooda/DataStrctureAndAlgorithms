/*
0 1 1 2 3 5 8 13 . . . .
*/

#include <iostream>
using namespace std;

int fib(int n) // this is excessive recursion as it is calling fib(n) multiple time for same n
{
	if (n <= 1)
	{
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}


int fibIte(int n)
{
	int i0 = 0, i1 = 1;
	if(n <= 1)
	{
		return n;
	}
	for(int i = 2; i <= n; i++)
	{
		int temp = i0 + i1;
		i0 = i1;
		i1 = temp;
	}
	return i1;
}


int arrRes[100] = {0, 1};
int fibMem(int n)
{
	if(n <= 1)
	{
		return n;
	}
	else
	{
		if (arrRes[n-2] == -1)
		{
			arrRes[n-2] = fibMem(n-2);
		}
		if (arrRes[n-1] == -1)
		{
			arrRes[n-1] = fibMem(n-1);
		}
		arrRes[n] = arrRes[n-1] + arrRes[n-2];
		return arrRes[n];
	}
}


int main()
{
	int n;
	cin>> n
	for(int i = 0; i < 100; i++)
	{
		arrRes[i] = -1;
	}
	cout<< fibMem(n) << endl;
}