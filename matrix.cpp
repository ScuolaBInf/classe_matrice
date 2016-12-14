#include<iostream>
#include"matrix.h"
using namespace std;

matrix::matrix(int dimY, int dimX, bool iniz)
	{
		this -> dimX = dimX;
		this -> dimY = dimY;
		matrice = new int*[dimX];
		for (int i = 0; i < dimX; i++)
			{					
				matrice[i] = new int[dimY];
			}
		if (iniz == true)
		this -> inizializeMatrix();
	}

matrix::inizializeMatrix(int val)
	{
		for (int i = 0; i < dimX; i++)
			{
				for (int j = 0; j < dimY; j++)
					{
						matrice[i][j] = val;
					}
			}
	}
	
matrix::printfMatrix()
	{
		for (int i = 0; i < dimX; i++)
			{
				for (int j = 0; j < dimY; j++)
					{
						cout << matrice[i][j] << ' ';	
					}
				cout << endl;
			}					
	}		

matrix::scanfMatrix()
	{
		for (int i = 0; i < dimX; i++)
			{
				for (int j = 0; j < dimY; j++)
					{
						cin >> matrice[i][j];	
					}
			}	
	}
	
matrix::allocMatrix(int dimY, int dimX, bool iniz)
	{
		this -> dimX = dimX;
		this -> dimY = dimY;
		matrice = new int*[dimX];
		for (int i = 0; i < dimX; i++)
			{					
				matrice[i] = new int[dimY];
			}
		if (iniz == true)
		this -> inizializeMatrix();
	}
	
matrix::changeSingleElement(int dimY, int dimX, int value)
	{
		if (!(dimX >= this -> dimX || dimY >= this -> dimY))
			{
				matrice[dimX][dimY] = value;
			}
	}
	
matrix matrix::operator +(matrix m)
	{
		matrix r(dimX, dimY);
		if (dimX == m.dimX and dimY == m.dimY)
			{
				for (int i = 0; i < dimX; i++)
					{			
						for (int j = 0; j < dimY; j++)
							{
								r.matrice[i][j] = matrice[i][j] + m.matrice[i][j];	
							}
					}
			}
		else
			{
				cout<<"Error";
			}
			
		return r;
	}

matrix matrix::operator -(matrix m)
	{
		matrix r(dimX, dimY);
		if (dimX == m.dimX and dimY == m.dimY)
			{
				for (int i = 0; i < dimX; i++)
					{			
						for (int j = 0; j < dimY; j++)
							{
								r.matrice[i][j] = matrice[i][j] - m.matrice[i][j];	
							}
					}
			}
		else
			{
				cout<<"Error";
			}
			
		return r;
	}
				
bool matrix::operator ==(matrix m)
	{
		if (dimX == m.dimX and dimY == m.dimY)
			{
				for (int i = 0; i < dimX; i++)
					{			
						for (int j = 0; j < dimY; j++)
							{
								if (matrice[i][j] != m.matrice[i][j])
									{
										return false;
									}	
							}
					}
			}
		return true;
	}
