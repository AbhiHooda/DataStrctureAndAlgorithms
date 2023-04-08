/*
e^x = 1 + x/1! + x^2/2! + x^3/3! + . . . . + n terms
*/

#include <iostream>
using namespace std;

double taylorSeries(int x, int n)
{
	static double fact = 1, power = 1;
	if (n == 0)
	{
		return 1;
	}
	
	double temp = taylorSeries(x, n - 1);
	power *= x;
	fact *= n;
	return temp + power/fact;
}

double taylorSeriesHornerRule(int x, int n)
{
	static double resTill = 1.0;
	if (n == 0)
	{
		return resTill;
	}
	resTill = (resTill*x)/n + 1;
	return taylorSeriesHornerRule(x, n - 1);
}

double taylorSeriesHornerRuleIter(int x, int n)
{
	double resTill = 1.0;
	for (; n>0; n--)
	{
		resTill = (resTill*x)/n + 1;
	}
	return resTill;
}


int main()
{
	int x, m;
	cin>> x >> m;
	cout<< taylorSeries(x, m) << endl;
}