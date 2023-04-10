Arrays
	Arrays is defined as collection of similar data types such as int, float char and other permitive types and also struct, classes and other not permitive data types. 
	Arrays are stored in contigious memory location.

	Array is also knon as vector data type as it has magnitude(values) and direction.


Initilization:
	int A[5];
	int A[5] = {1,2,3,4,5};
	int A[5] = {1,2};
	int A[5] = {0};
	int A[] = {1,2,3,4,5};


Accesing Element of Array
	A[i];
	i[A];
	*(A + i);

Note:  In C to print address %u is used.

Arrays in Compiler:
	Address of ith index = A0(base Addreess) + index * sizeof(data type) // this is data binding

Row Major for 2 D Array:(left to right)

	Address of ith row and jth col = (base address) + (i * col * sizeof(datatype)) + (j * sizeof(datatype))

	A[i][j] = (base address) + (i * n + j) * (sizeof(datatype));

Column Major Mapping:(right to left)
	A[i][j] = (base address) + (j * m + i) * (sizeof(datatype));


Generalizing:
	A[d1][d2][d3][d4]

	address(A[i][j][k][l]) = (base address) + (i * d2*d3*d4 + j * d3*d4 + k * d4 + l) * (sizeof(data type))


T(n) = O(n^2)

Using horners rule : taking common we can reduce number of multiplication
T(n) = O(n)
