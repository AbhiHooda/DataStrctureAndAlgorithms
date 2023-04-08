Pointers:
	A Pointer is an address variable.
	Its used to store the address of the variable not the data itself.

	Pointers are used for indirect access of the data.

	A Program can directly access its data and stack memory but it cannot access heap or other resources directly so we need pointers to those resources inside our program.

	e.g: 
		A program cannot directly access a file stored on the HDD so we need a pointer of file type to access that file.
		A Program also cannot access dynamicaly allocated memory in heap so a pointer is required to access heap memory.

Usage of Pointer:
	a) Accessing heap memory
	b) Accessing resources outside of program scope(eg: files, printers etc)
	c) Parameter passing.

Declaration of Pointer:
	Pointer are declared using * operator
	e.g int *p;

initilization:
	int x;
	int *p;
	p = &x;   

Allocating memory in heap:
	In c we need to include stdlib.h // malloc is defined in this header file.
	e.g int*p;
	p = (int*)malloc(sizeof(int))

	In c++ new operator is used.
	int *p
	p = new int;



Dereferencing a pointer:
	Dereferencing a pointer means accessing the value store at the address to which pointer is holding.
	* operator is used for dereferencing.
	e.g:
	int x = 5;
	int *p = &x;
	cout<< *p; // this will print 5
	cout<< p; //this will print the address of variable x.

Free memory alloated in heap(deallocating)
	In c free keyword is used.
	e.g:
	 free(p);
	In c++ delete keyword is used
	e.g:
	 delete p
	 if array :
	 	delete []p


Extas:
	Name of an array is the pointer to address of first element.
	e.g:
	int A[] = {1, 2, 3};
	int *p;
	p = A;

	// Accessing array elements
	cout<<p[0]; // 1
	cout<<A[0]; // 1

	Size of pointer is same for different types as this the address variable
	e.g:
		struct Rect
		{
			int l,b;
		};
		int *p;
		char *c;
		float *f;
		struct Rect *r;

		sizeof(p);
		sizeof(c);
		sizeof(f);
		sizeof(r);

		Output will be 8 bytes // depends on compiler as how much size is of address variable. 