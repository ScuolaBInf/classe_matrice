#include<iostream>
#include"matrix.h"
using namespace std;

int main(int argc, char** argv) 
	{
		matrix a(7,8), b(7,8), c(7,8);
		a.inizializeMatrix(2);
		c = a + b;		
		c.printfMatrix();
		return 0;
	}
