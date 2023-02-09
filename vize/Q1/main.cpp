#include <iostream>
#include <stdexcept>
#include "Point.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout<<"Number of points before instantiation of any objects is "<<Point::getCount()<<endl;
	{
		struct P pt1={3,4,5};
		Point p1("p1",pt1);
		p1.print();
		
		struct P pt2={1,2,3};
		const Point p2("p2",pt2);
		p2.print();
		
		struct P pt3={7,8,9};
		Point p3("p3",pt3);

		cout<<"\nNumber of points after objects are instantiated "<<Point::getCount()<<endl;
		
		p3.ManhattanDist(p2).print();
		p1.EuclideanDist(p2).print();
	}
	cout<<"\nNumber of points after objects are deleted "<<Point::getCount()<<endl;
	
	struct P ptA={5,6,7};
	const Point A("A",ptA);
	
	cout<<"Number of points after objects are instantiated "<<Point::getCount()<<endl;
	
	midPoint(A);
	
	try{
		struct P ptB={-1,-1,-1};
		const Point B("B",ptB);
	}
	catch (invalid_argument &e)
	{
		cout<<"\nException: "<<e.what()<<endl<<endl;
	}
		
		
	return 0;
}
