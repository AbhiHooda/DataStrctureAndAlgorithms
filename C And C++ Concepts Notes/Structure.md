Structure:
	Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

	Structures in C++ can contain two types of members:  

		Data Member: These members are normal C++ variables. We can create a structure with variables of different data types in C++.
		Member Functions: These members are normal C++ functions. Along with variables, we can also include functions inside a structure declaration.

Declaration:
	A struct can be declared using struct keyword
		e.g:
			struct Point
			{
				int x;
				int y;
			};

Initilization:
	struct Point p; // declaration
	struct Point p = {0, 1} // declaration + initilization

Access:
	A member of struct can be accessed using dot(.) operator.
	e.g: 
		p.x or p.y

structure pointer
	e.g:
		#include <iostream>
		using namespace std;
		 
		struct Point {
		    int x, y;
		};
		 
		int main()
		{
		    struct Point p1 = { 1, 2 };
		 
		    // p2 is a pointer to structure p1
		    struct Point* p2 = &p1;
		 
		    // Accessing structure members using
		    // structure pointer
		    cout << p2->x << " " << p2->y;
		    return 0;
		}

Size of struct:
	Size of struct is the sum of size of its data members
	eg: 
		struct Point
		{
			int x;
			int y;
		};

		sizeof(Point) = 8 bytes // Assuming size of int = 4 bytes

		struct Padding
		{
			int x;
			int y;
			char c;
		}

		sizeof(Padding) = 12 bytes // Here compiler is assuming 4 bytes for char because its easy for machine to read 4 bytes continiosly, this is known as padding.
								   // nearest size is given to smaller data types in multiple of 2