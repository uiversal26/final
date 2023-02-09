#ifndef TENSOR_H
#define TENSOR_H
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stdexcept>

using namespace std;

class Tensor
{
	
	friend ostream &operator<<(ostream &, const Tensor &);
	friend istream &operator>>(istream &, Tensor &);
	friend Tensor operator*(int, Tensor &);
public:
	Tensor(const string &, int);
	Tensor(const string &);
	~Tensor();
	
	void setSize(int);
	void setName(const string &);
	void setTensorData(int, int);
	
	int getSize() const;
	string getName() const;
	vector <int> getTensor() const;
	
	Tensor &operator=( Tensor &);
	Tensor operator+(const Tensor &);
	Tensor operator-(const Tensor &);
	Tensor operator*(const Tensor &);
	
	bool operator==(const Tensor &);
	bool operator!=(const Tensor &);
	bool operator<(const Tensor &);
	bool operator>(const Tensor &);
private:
	vector <int> tensorData;
	string name;
	int size;
};

#endif
