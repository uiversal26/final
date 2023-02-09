#include "Point.h"
#include <iostream>
#include <cmath>
#include<string>
#include <stdexcept>

using namespace std;

	int Point::count = 0;

	Point::Point (const string &n, struct P s1)
	:ID(n)
	{	
		setPoint(s1);
		cout<<getID()<<" is constructed"<<endl;
		count++;
	}
	Point::~Point(){
		cout<<getID()<<" is destructed"<<endl;
		count--;
	}
	void Point::setPoint(struct P s1){
		
		if( (s1.x >= 0) && (s1.y >= 0) && (s1.z >= 0)) {
			sp.x = s1.x;
			sp.y = s1.y;
			sp.z = s1.z;
		}else{
			throw invalid_argument("one of the coordinate was out of range");
		}
	}
	struct P Point::getPoint()const{
		return sp;
	}
	int Point::getCount(){
		return count;
	}
	string Point::getID()const{
		return ID;
	}
	struct P Point::getOrigin(){
		P dummy;
		
		dummy.x = oX;
		dummy.y = oY;
		dummy.z = oZ;
		return dummy;
	}
	void Point::print()const{
		P temp = getPoint();
	
		cout<<getID()<<"("<<temp.x<<","<<temp.y<<","<<temp.z<<")"<<endl;
	}
	Point &Point::EuclideanDist(const Point &pb){
		sp.x =  pow(sp.x - pb.sp.x,2) ;
		sp.y =  pow(sp.y - pb.sp.y,2) ;
		sp.z =  pow(sp.z - pb.sp.z,2) ;
		return *this;
	}
	Point Point::ManhattanDist(const Point  &b){
		P temp={};
		Point dump("dump",temp);
		
		dump.sp.x = abs( sp.x - b.sp.x );
		dump.sp.y = abs( sp.y - b.sp.y );
		dump.sp.z = abs( sp.z - b.sp.z );
		return dump;
	}
	
	
	void midPoint(const Point &p1){
		P temp = p1.getOrigin();
		Point dump("origin",temp);
		
		cout<<"The mid point of"<< endl;
		p1.print();
		dump.print();
		cout<<endl;
		double x = (p1.sp.x+dump.sp.x)/2;
		double y = (p1.sp.y+dump.sp.y)/2;
		double z = (p1.sp.z+dump.sp.z)/2;
		cout<<"points"<< "("<< x << ","<< y << ","<< z <<")"<<endl;
	}
