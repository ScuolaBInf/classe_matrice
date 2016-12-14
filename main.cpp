#include<iostream>
#include"matrix.h"
using namespace std;

int main(int argc, char** argv)
	{
		matrix a(8,8), b(8,8), c(8,8);
		a.inizializeMatrix(2);
		b.inizializeMatrix(3);
		c = a + b;
		c.printfMatrix();
		if (a == b)
			{
				cout << "a";
			}

		return 0;
	}
