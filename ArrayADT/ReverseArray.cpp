#include <iostream>
using namespace std;

// Approcah 1 : create an auxiliary array of size n, copy evelemt in reverse order from original array and copy element back to original array
void ReverseAux(int arr[], int size)
{
	int aux[size], index = 0;
	for(int i = size - 1; i >= 0; i--)
	{
		aux[index++] = arr[i];
	}
	for(int i = 0; i < size; i++)
	{
		arr[i] = aux[i];
	}
	// T(n) = O(n) & space = O(n)
}

void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}

void Reverse2Pointer(int arr[], int size)
{
	int low = 0, high = size -1;
	while(low < high)
	{
		swap(&arr[low], &arr[high]);
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
	int arr[] = {1,2,3,4,5};
	// ReverseAux(arr, 5);
	Reverse2Pointer(arr, 5);
	Display(arr, 5);
	return 0;
}

// TODO : left shift/ left rotate , Right shift/ right rotate :-> Usage for displaying information on LED board to give moving effect etc