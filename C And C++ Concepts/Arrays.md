Arrays
	Arrays is defined as collection of similar data types such as int, float char and other permitive types and also struct, classes and other not permitive data types. 
	Arrays are stored in contigious memory location.

	It is a group of variables of similar data types referred to by a single element.
	The size of the array should be mentioned while declaring it.
	Array elements are always counted from zero (0) onward.
	Array elements can be accessed using the position of the element in the array.
	The array can have one or more dimensions.

Why Do we need Arrays?
	We can use variables also to store values e.g (v1, v2, v3 and so on). But if we need to manage lots on values then handling of individuals variables will be difficult 
	and code will be difficult to maintain. 
	e.g saving results for a class of 100 students. In this case declaring 100 variables might not be the good idea, so we use an Array.

Advantages
	Code Optimization : we can store, sort the data efficiently
	Random access : we can access any value within array using index.

Disadvantages
	Size Limit: Array size is defined at the time of its declaration it does not grow or shrink at run time.
	Insertion and deletion of elements can be costly since the elements are needed to be managed in accordance with the new memory allocation.

Array Declatation : 
	// array declaration by specifying size
    int arr1[10];
    // Array declaration by initializing elements
    int arr[] = { 10, 20, 30, 40};
    // Array declaration by specifying size and initializing elements
    int arr[6] = { 10, 20, 30, 40 }; //  {10, 20, 30, 40, 0, 0}

By default, regular arrays of local scope (for example, those declared within a function) are left uninitialized. This means that none of its elements are set to any particular value; their contents are undetermined at the point the array is declared.

Note : 
	No Index Out of bound Checking: 
	#include <iostream>
	using namespace std;
	  
	int main()
	{
	    int arr[2];
	  
	    cout << arr[3] << " ";
	    cout << arr[-2] << " ";
	  
	    return 0;
	}

	#include <iomanip>
	using std::setw; //  setw() function to format the output this function insert the spaces e.g setw(3) will insert 3 spaces.