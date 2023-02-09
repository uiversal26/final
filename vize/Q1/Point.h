#ifndef POINT_H
#define POINT_H

#include<string>

using namespace std;

struct P{
	double x,y,z;
};

class Point
{
	friend void midPoint(const Point &p1);
	
public:
	Point(const string &, struct P );
	~Point();
	void setPoint(struct P);
	struct P getPoint()const;
	static int getCount();
	string getID()const;
	static struct P getOrigin();
	void print()const;
	Point &EuclideanDist(const Point &pb);
	Point ManhattanDist(const Point  &b);
	
private:
	const static int oX = 0, oY = 0, oZ = 0;
	static int count;
	const string ID;
	struct P sp;
};


#endif
