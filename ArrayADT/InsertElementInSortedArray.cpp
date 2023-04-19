#include <iostream>
using namespace std;

void Insert(int arr[], int val, int size)
{
	// Assuming array has capacity available
	int index = size - 1;
	while(index >= 0 && arr[index] > val)
	{
		arr[index + 1] = arr[index];
		index--;
	}
	arr[index + 1] = val;
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
	int arr[7] = {1,3,4,5};
	Insert(arr, 6, 4);
	Display(arr, 5);
	return 0;
} 