#include "Minkowski.h"

Minkowski::Minkowski(const Point &a, const Point &b, int c)
	:Similarity(a,b)
{
	setOrderP(c);
}
Minkowski::~Minkowski()
{
	
}

///SetterGetter
void Minkowski::setOrderP(int a)
{
	if( a > 0) orderP = a;
	else throw invalid_argument("OrderP must be greater than 0!");
}
int Minkowski::getOrderP() const
{
	return orderP;
}

double Minkowski::calculateSimilarity()
{
	double minkowski;
	double order = 1 / orderP;
	double a,b;
	a = pow(abs(getPointP1().x - getPointP2(). x), orderP);
	b = pow(abs(getPointP1().y - getPointP2(). y), orderP);
	minkowski = pow (a+b, order);

	return minkowski;
}
void Minkowski::print()
{
	cout << "Minkowski";
	Similarity::print();
}
	
