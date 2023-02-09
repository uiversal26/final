#include "Cosine.h"

Cosine::Cosine(const Point &a, const Point &b)
	:Similarity(a,b)
{
}

Cosine::~Cosine()
{
}

double Cosine::calculateSimilarity()
{
	double cosine;
	
	cosine  = dotProduct() / ( calculateNorm().norm1 * calculateNorm().norm2 );
	
	return cosine;
	
}

double Cosine::dotProduct()
{
	return getPointP1().x * getPointP2().x + getPointP1().y * getPointP2().y;
}

void Cosine::print()
{
	cout << "Cosine";
	Similarity::print();
}

Norm Cosine::calculateNorm()
{
	
	double nor1 = sqrt(getPointP1().x * getPointP1().x + getPointP1().y * getPointP1().y);
	double nor2 = sqrt(getPointP2().x * getPointP2().x + getPointP2().y * getPointP2().y);
	Norm n1(nor1,nor2);
	return n1;
}
