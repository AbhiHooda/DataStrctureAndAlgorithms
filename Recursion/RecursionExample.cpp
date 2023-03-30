// This prints the natural number n -> 0

#include <iostream>
using namespace std

// Example of Tail Recursion
void printNum(int n)
{
	if (n > 0)
	{
		cout<< n << endl;
		printNum(n - 1);
	}
}

// Example of Head Recursion

void printHead(int n)
{
	if (n > 0)
	{
		printHead(n - 1);
		cout << n << endl;
	}
}

int int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	printNum()
	return 0;
}