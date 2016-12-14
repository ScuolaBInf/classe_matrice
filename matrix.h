#include <iostream>
using namespace std;

class matrix
	{
		private:
			int** matrice;
			int dimX, dimY;

		public:
			matrix(int, int, bool iniz = true);
			inizializeMatrix(int val = 0);
			allocMatrix(int, int, bool iniz = true);
			printfMatrix();
			scanfMatrix();
			changeSingleElement(int, int, int);

			matrix operator +(matrix);
			matrix operator -(matrix);
			bool operator ==(matrix);
			bool operator !=(matrix);
	};
