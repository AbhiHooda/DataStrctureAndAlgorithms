#include <iostream>
using namespace std;

int sumN(int n)
{
	if(n > 0)
	{
		return sumN(n - 1) + n;
	}
	return 0;
}

int sumIterative(int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum = sum + i;
	}
	return sum;
}

int main()
{
	int n;
	cin>> n;
	cout<< sumN(n) << endl;
}

// KeyPoint : Base condition is mandatory otherwise recursion will go in infinite loop.
// Sum of first natural number = n(n+1)/2
// Better to use formula as recursion will be slower since internal stack will be used. 