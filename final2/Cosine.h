#ifndef COSINE_H
#define COSINE_H

#include "Similarity.h"

struct Norm{
	
	Norm(double a=0, double b=0){
		norm1 = a;
		norm2 = b;
	}
	
	double norm1;
	double norm2;
	
};

class Cosine : public Similarity
{
public:
	Cosine(const Point &, const Point &);
	~Cosine();
	
	virtual double calculateSimilarity();
	virtual void print();
	
private:
	double dotProduct();
	Norm calculateNorm();
};

#endif
