#include<iostream>
using namespace std;


struct Array
{
	int A[20];
	int size;
	int length;	
};


struct Array * merge(struct Array *arr1, struct Array *arr2)
{
	int i = 0,j = 0,k = 0;
	struct Array *arr3 = new struct Array;
	while( i < arr1->length && j < arr2->length)
	{
		if(arr1->A[i] < arr2->A[j])
		{
			arr3->A[k++] = arr1->A[i++];
		}
		else
		{
			arr3->A[k++] = arr2->A[j++];
		}
	}

	while( i < arr1->length)
	{
		arr3->A[k++] = arr1->A[i++];
	}
	while( j < arr2->length)
	{
		arr3->A[k++] = arr2->A[j++];
	}
	arr3->length = arr1->length + arr2->length;
	arr3->size = 20;
	return arr3;
}

void Display(struct Array arr)
{
	for(int i = 0; i < arr.length; i++)
	{
		printf("%d \n", arr.A[i]);
	}
}

int main()
{
	struct Array arr1 = {{2,3,6,8,9}, 10, 5};
	struct Array arr2 = {{6,7,8,10,12}, 10, 6};
	struct Array *arr3 = merge(&arr1, &arr2);
	Display(*arr3);
}