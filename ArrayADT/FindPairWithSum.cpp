#include <iostream>
using namespace std;

int Max(int arr[], int n)
{
	int maxNow = arr[0];
	for(int i = 1; i < n; i++)
	{
		if (maxNow > arr[i])
		{
			maxNow = arr[i];
		}
	}
	return maxNow;
}

void findPair(int arr[], int n, int k)
{
	int hash[Max(arr, n)] = {0};
	for(int i = 0; i < n; i++)
	{
		if (hash[k - arr[i]] != 0)
		{
			cout << "Pair Found " << arr[i] << " " << k - arr[i] << endl; 
		}
		hash[arr[i]]++;
	}
}

// sorted array
void pairSorted(int arr[], int n, int k)
{
	int low = 0, high = n - 1;
	while(low < high)
	{
		if (arr[low] + arr[high] == k)
		{
			cout << "Pair Found " << arr[low] << " " << arr[high] << endl; 
		}
		if (arr[low] + arr[high] < k)
		{
			low++;
		}
		else
		{
			high--;
		}

	}
}

int main()
{
	int arr[] = {7, 8, 9, 6, 0, 5};
	findPair(arr, 6, 11);
	return 0;
}