#include "Similarity.h"

Similarity::Similarity(const Point &a, const Point &b)
	: P1(a), P2(b)
{
	
}
Similarity::~Similarity()
{
	
}
///setter
void Similarity::setPointP1(const Point &a)
{
	P1 = a;
}
void Similarity::setPointP2(const Point &a)
{
	P2 = a;
}

Point Similarity::getPointP1()const
{
	return P1;
}
Point Similarity::getPointP2()const
{
	return P2;
}

void Similarity::print()
{
	cout << " similarity" << endl; 
	cout << "P1(" << P1.x << "," << P1.y << ")" << endl;
	cout << "P2(" << P2.x << "," << P2.y << ")" << endl;
}
