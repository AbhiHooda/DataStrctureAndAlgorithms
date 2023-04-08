#include <iostream>
using namespace std;

void TOH(int src, int dest, int aux, int disk)
{
	if (disk <= 0)
	{
		return;
	}
	TOH(src, aux, dest, disk - 1);
	cout<< "move disk : " << disk << " from src: " << src <<" to dest : " << dest << endl;
	TOH(aux, dest, src, disk - 1);
}

int main()
{
	int disk;
	cin>> disk;
	TOH(1, 3, 2, disk);
}


// T(n) = O(2^n)