#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Matrix
{
	friend ostream &operator<<(ostream &, const Matrix &);
	friend istream &operator>>(istream &, Matrix &);
	friend void operator!(Matrix &);
	friend void operator-(Matrix &);
public:
	Matrix();
	~Matrix();
	
	void setMatrix(int,int,int);
	vector< vector < int > >  getMatrix() const;
	
	Matrix operator+(const Matrix &);
	Matrix operator*(int);
	
	
private:
	vector< vector < int > > twoD;
	
};

#endif
