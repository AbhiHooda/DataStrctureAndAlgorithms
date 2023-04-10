Static Array:
	Size of array is static which mean size of array was known during comile time. Memory will be allocated during runtime.

	In C arrays are static which means size should be passed during compile time, but in C++ we can pass variable also hile declarting Arrray.

	Static Array are given memory in stack activation record of that function.  

Dynamic Array:
	Dynamic array are created in heap.

	e.g :

	int main()
	{
		int *p;
		p = new int[5]; // c++
		delete []p // c++

		p = (int *)malloc(sizeof(int) * 5); // c

		free(p) // c
	}


How to increase size of Array:
	In C/C++ we cannot increase the size of existing dynamic array. We need to allocate new memory in heap of bigger size and copy elements for existing array to new array.


	Why we can't increase size of existing array, because memory of array elements should be contigious and we dont know if adjacenet memory will be free or not during resizing operation.


