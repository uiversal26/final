#ifndef MINKOWSKI_H
#define MINKOWSKI_H

#include "Similarity.h"

class Minkowski : public Similarity
{
public:
	Minkowski(const Point &, const Point &, int =2);
	~Minkowski();
	
	///SetterGetter
	void setOrderP(int);
	int getOrderP() const;
	
	virtual double calculateSimilarity();
	virtual void print();
	
private:
	int orderP;
};

#endif
