#include <iostream>
using namespace std;

void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}  

void segregate(int arr[], int size)
{
	int low = 0, high = size - 1;
	while(low < high)
	{
		while (low < size && arr[low] < 0)
		{
			low++;
		}
		while (high >= 0 && arr[high] > 0)
		{
			high--;
		}
		if (low < high)
		{
			swap(&arr[low], &arr[high]);
		}
		low++;
		high--;
	}
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
	int arr[7] = {1,-4,-1,-3};
	segregate(arr, 4);
	Display(arr, 4);
	return 0;
} 