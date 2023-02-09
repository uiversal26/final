#ifndef SIMILARITY_H
#define SIMILARITY_H
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>

using namespace std;

struct Point{
	
	public:
	Point(const string &a, double b=0, double c=0 )
	{
		name = a;
		x = b;
		y = c;
	}
	string name;
	double x;
	double y;	
};


class Similarity
{
public:
	Similarity(const Point &, const Point &);
	~Similarity();
	///setter
	void setPointP1(const Point &);
	void setPointP2(const Point &);
	
	Point getPointP1()const;
	Point getPointP2()const;
	
	virtual double calculateSimilarity() = 0;
	virtual void print();
private:
	Point P1;
	Point P2;
	
};

#endif
