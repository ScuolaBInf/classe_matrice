//test
#include <iostream>
using namespace std;

class matrix
	{
		private:
			int** matrice;
			int dimX, dimY;

		public:
			matrix(int dimY, int dimX, bool iniz = true);
			inizializeMatrix(int val = 0);
			allocMatrix(int, int, bool iniz = true);
			printfMatrix();
			scanfMatrix();
			changeSingleElement(int, int, int);

			matrix operator +(matrix m);
			matrix operator -(matrix m);
			bool operator ==(matrix m);
			bool operator !=(matrix m);
	};
