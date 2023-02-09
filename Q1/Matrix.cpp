#include "Matrix.h"

ostream &operator<<(ostream &out, const Matrix &a)
{
	for(int i = 0; i<2; i++)
	{
		out << "|  ";
		for (int j =0; j<2 ; j++)
		{
			out << a.getMatrix()[i][j] << "  ";
		}
		out << " | " << endl;
	}
	return out;
}
istream &operator>>(istream &in, Matrix &a)
{
	for(int i = 0; i<2; i++)
	{
		for (int j =0; j<2 ; j++)
		{
			int temp;
			in >> temp;
			a.setMatrix(i,j,temp);
			in.ignore();
		}
	}
	return in;
}

void operator!(Matrix &a)
{
	int temp = a.getMatrix()[1][0];
	a.twoD[1][0] = a.getMatrix()[0][1];
	a.twoD[0][1] =temp;
}
void operator-(Matrix &a)
{
	double det = 1 / ( a.getMatrix()[0][0] * a.getMatrix()[1][1] - a.getMatrix()[0][1] * a.getMatrix()[1][0] );
	
	a.twoD[0][0] = det * a.getMatrix()[1][1];
	a.twoD[0][1] = -(det * a.getMatrix()[0][1]);
	a.twoD[1][0] = -(det * a.getMatrix()[1][0]);
	a.twoD[1][1] = (det * a.getMatrix()[0][0]);
}

Matrix::Matrix()
{
	twoD.resize(2);
	twoD[1].resize(2);
	twoD[0].resize(2);
}

Matrix::~Matrix()
{
}

Matrix Matrix::operator+(const Matrix &a)
{
	Matrix dummy;
	for(int i = 0; i<2; i++)
	{
		for (int j =0; j<2 ; j++)
		{
			dummy.setMatrix(i,j, this->getMatrix()[i][j] + a.getMatrix()[i][j] );
		}
	}
	return dummy;
}

void Matrix::setMatrix(int a,int b,int c)
{
	twoD[a][b] = c;
}

vector< vector < int > >  Matrix::getMatrix() const
{
	return twoD;
}

Matrix Matrix::operator*(int a)
{
	Matrix dummy;
	for(int i = 0; i<2; i++)
	{
		for (int j =0; j<2 ; j++)
		{
			dummy.setMatrix(i,j, this->getMatrix()[i][j] * a );
		}
	}
	return dummy;
}
