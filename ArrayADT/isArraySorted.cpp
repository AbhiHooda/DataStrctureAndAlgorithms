#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
	int index = 1;
	while(index < size)
	{
		if (arr[index] < arr[index - 1])
		{
			return false;
		}
		index++;
	}
	return true;
}

void Display(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int arr[7] = {1,4,5,3};
	cout << isSorted(arr, 4);
	// Display(arr, 5);
	return 0;
} 