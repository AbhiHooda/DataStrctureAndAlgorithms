#include <iostream>
using namespace std;

int power(int n, int m)
{
	if(m == 0)
	{
		return 1;
	}
	int temp = power(n, m/2);
	if (m % 2 == 0)
	{
		return temp * temp;
	} 
	else
	{
		return n * temp * temp;
	}

}

int power2(int n, int m)
{
	if(m == 0)
	{
		return 1;
	}
	
	if (m % 2 == 0)
	{
		return power(n * n, m/2);
	} 
	else
	{
		return power(n * n, (m - 1)/2) * n; // m - 1 is done because its been multiplied by n 
	}

}


int main()
{
	int n, m;
	cin>> n >> m;
	cout<< power(n, m) << endl;
}