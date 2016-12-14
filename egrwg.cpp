#include<iostream>
using namespace std;

main ()
	{
		char* a;
		for (int i = 0; i < 5; i++)
			{
				a = new char[i+1];
				cin >> a[i];
			}
		for (int i = 0; i < 5; i++)
			{
				cout << a[i];
			}
	}
