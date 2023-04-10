2D Array can be assmed as matrix. Having row and columns. Memory allocated is linear

creating 2D Array:
	int A[3][4];
	int A[2][2] = {{1,2},{3,4}};

	Using Pointers:
		int *A[3];
		A[0] = new int[4];
		A[1] = new int[4];
		A[3] = new int[4];

	int **A;

	A = new int*[3];
	A[0] = new int[4];
	A[1] = new int[4];
	A[3] = new int[4];