#include <iostream>
using namespace std;

// Finding duplicate in sorted array
void findDuplicate(int arr[], int n)
{
	int lastDuplicate = arr[0];
	for(int i = 1; i < n; i++)
	{
		if (arr[i] == lastDuplicate)
		{
			cout << "Duplicate : " << arr[i] << endl;
		}
		else
		{
			lastDuplicate = arr[i];
		}
	}
}

// Finding duplicate in UNsorted array
void findDuplicate2(int arr[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		int count = 1;
		if (arr[i] != -1)
		{
			for(int j = i + 1; j < n ; j++)
			{
				if (arr[i] == arr[j])
				{
					count++;
					arr[j] = -1;
				}
			}
		}
		if (count > 1)
		{
			cout << "Duplicate : " << arr[i] << " times : " << count << endl;
		}
	}
}

// We can you hash table also : T(n) = O(n)
int main()
{
	int arr[] = {3,6,8,8,10,12,15,15,15,20};
	findDuplicate(arr, 10);
	return 0;
}