#include <iostream>
using namespace std;

int factN(int n)
{
	if(n > 0)
	{
		return factN(n - 1) * n;
	}
	return 1;
}



int main()
{
	int n;
	cin>> n;
	cout<< factN(n) << endl;
}

/*
The factorials of negative real numbers are complex numbers. At negative integers the imaginary part of complex factorials is zero, and the factorials for -1, -2, -3, -4 are -1, 2, -6, 24 respectively.
*/