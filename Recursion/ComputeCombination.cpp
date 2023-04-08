/*
nCr = n!/r!(n-r)!
*/

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

int nCr(int n, int r)
{
	return factN(n)/factN(r) * factN(n-r);
}

// Using pascal triange

int nCrP(int c, int r)
{
	if (n == r || r == 0)
	{
		return 1;
	}
	return nCrP(n-1, r-1) + nCrP(n-1, r);
}

int main()
{
	int n, r;
	cin>> n >> r;
	cout<< nCr(n, r) << endl;
}