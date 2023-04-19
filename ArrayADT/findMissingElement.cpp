#include <iostream>
using namespace std;

// 1 element is missing
int getMissing1stNNumbers(int arr[], int n)
{
	int sum = n * (n + 1)/2;
	for(int i = 0; i < n ; i++)
	{
		sum -= arr[i];
	}
	return sum;
}

// Taking help from index
void getMissing1stNNumbers(int arr[], int n)
{
	int diff = arr[0];
	for(int i = 0; i < n; i++)
	{
		if(arr[i] - i != diff)
		{
			cout << "Missing number : " << diff + i << endl;
		}
	}
}

// More element are missing
void getMissing1stNNumbers(int arr[], int n)
{
	int diff = arr[0];
	for(int i = 0; i < n; i++)
	{
		if(arr[i] - i != diff)
		{
			int tempDiff = arr[i] - i;
			while(diff < tempDiff)
			{
				cout << "Missing number : " << diff + i << endl;
				diff++;
			}
		}
	}
}

// if array is UNsorted Take an array of size in n , initilize to 0, loop over given array and mark as 1 and missing element will be 0 -> Hashing / bit set
void missingInSortedArray(int arr[], int n)
{
	int arrTemp[arr[n-1] + 1] = {0};
	for(int i=0; i< n; i++)
	{
		arrTemp[arr[i]]++;
	}
	for(int i = 1; i <= arr[n-1]; i++)
	{
		if(arrTemp[i] == 0)
		{
			cout << "Missing number : " << i << endl;
		}
	}
}