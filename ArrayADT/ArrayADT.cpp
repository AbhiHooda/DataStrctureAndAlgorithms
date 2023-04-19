#include <iostream>
#include <stdlib.h>
using namespace std;

struct ArrayADT
{
	int *A;
	int size;
	int length;	
};

struct ArrayADTStatic
{
	int A[20];
	int size;
	int length;	
};

int Delete(struct ArrayADTStatic *arr, int index)
{
	int val;
	if (index >= 0 && index < arr->length)
	{
		val = arr->A[index];
		for(int i = index; i < arr->length - 1; i++)
		{
			arr->A[i] = arr->A[i+1];
		}
		arr->length--;
		return val;
	}
	return 0;
}

void Display(struct ArrayADTStatic arr)
{
	for(int i = 0; i < arr.length; i++)
	{
		printf("%d \n", arr.A[i]);
	}
}

void Append( struct ArrayADTStatic *arr, int x)
{
	if (arr->length < arr->size)
	{
		arr->A[arr->length++] = x;
	}
}

void Insert(struct ArrayADTStatic *arr, int index, int val)
{
	if (index < 0 || index > arr->size)
	{
		cout << "Invalid Index" << endl;
		return;
	}
	if(arr->length == arr->size)
	{
		cout << "Array at max size" << endl;
		return;
	}

	for(int i = arr->length; i > index; i--)
	{
		arr->A[i] = arr->A[i - 1]; 
	}
	arr->A[index] = val;
	arr->length++;
}

int LinearSearch(struct ArrayADTStatic arr, int key)
{
	int index = -1;
	for(int i=0; i< arr.length; i++)
	{
		if(arr.A[i] == key)
		{
			index = i;
			break;
		}
	}
	return index;
}

// Optimized linear search : sometime its a possibility that we might search for same key again 
// So to reduce search time we can swap the searched key with previous index
// This method is known as 1) transposition 2) Move to front or head

int LinearSearchT(struct ArrayADTStatic arr, int key)
{
	int index = -1;
	for(int i=0; i< arr.length; i++)
	{
		if(arr.A[i] == key)
		{
			if (i != 0 || i != arr.length - 1)
			{
				int temp;
				temp = arr.A[i];
				arr.A[i] = arr.A[i - 1];
				arr.A[i - 1] = temp;
			}
			index = i - 1; 
			break;
		}
	}
	return index;
}

int binarySearhItr(struct ArrayADTStatic arr, int key)
{
	int low = 0, high = arr.length - 1, mid;
	while(low <= high)
	{
		mid = low + (high - low)/ 2; // this is done to avoid overflow 
		// cout << "mid : " << mid << endl; 
		if (arr.A[mid] == key)
		{
			return mid;
		}
		else if(arr.A[mid] > key)
		{
			high = mid - 1;
		} 
		else
		{
			low = mid + 1;
		}
	}
	return -1;
}

int binarySearhR(int arr[], int low, int high, int key)
{
	if (low > high)
	{
		return -1;
	}
	int mid = low + (high - low)/2;
	// cout << "mid : " << mid << endl; 
	if (arr[mid] == key)
	{
		return mid;
	}
	else if (arr[mid] > key)
	{
		return binarySearhR(arr, low, mid - 1, key);
	}
	else
	{
		return binarySearhR(arr, mid + 1, high, key);
	}
}

int Get(struct ArrayADTStatic arr, int index)
{
	if (index >= 0 && index < arr.length)
	{
		return arr.A[index];
	}
	return -1;
}

void Set(struct ArrayADTStatic *arr, int index, int val)
{
	if (index >= 0 && index < arr->length)
	{
		arr->A[index] = val;
	}
}

int Max(struct ArrayADTStatic arr)
{
	int maxNow = arr.A[0];
	for(int i = 1; i < arr.length; i++)
	{
		if (maxNow > arr.A[i])
		{
			maxNow = arr.A[i];
		}
	}
	return maxNow;
}

int Sum(struct ArrayADTStatic arr)
{
	int sum = 0;
	for(int i = 0; i < arr.length; i++)
	{
		sum += arr.A[i];
	}
	return sum;
}

float Avg(struct ArrayADTStatic arr)
{
	return Sum(arr)/arr.length;
}

int Min(struct ArrayADTStatic arr)
{
	int minNow = arr.A[0];
	for(int i = 1; i < arr.length; i++)
	{
		if (minNow < arr.A[i])
		{
			minNow = arr.A[i];
		}
	}
	return minNow;
}

int main()
{
	// struct ArrayADT arr;
	struct ArrayADTStatic arr = {{1,2,3,4,5}, 7, 5};
	// cin>> arr.size;
	// scanf("%d", &arr.size);
	// arr.A = (int *)malloc(arr.size * sizeof(int));
	// arr.length = 0;

	// printf("Enter all elements\n");
	// for(int i = 0; i < size; i++)
	// {
	// 	cin >> arr.A[i];
	// }
	// arr.length = arr.size;
	// Append(&arr, 10);
	// Insert(&arr, 2, 9);
	// Delete(&arr, 4);
	// cout << "Key at index : " << LinearSearch(arr, 6) << endl;
	// cout << "key at index : " << binarySearhItr(arr, 4) << endl;
	cout << "key at index : " << binarySearhR(arr.A,0, arr.length - 1, 4);
	// Display(arr);
	return 0;
}