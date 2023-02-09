#include <iostream>
#include "Similarity.h"
#include "Cosine.h"
#include "Minkowski.h"
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Point p1("P1",1,3.5);
	Point p2("P2",-2.0,0.5);
	Point p3("P3",1.7,-3.1);

	Cosine c1(p1,p2);
	Cosine c2(p1,p3);
	
	Minkowski m1(p1,p2,3);
	Minkowski m2(p1,p3,3);
	
	vector <Similarity*> v(4);
	
	v[0] = &c1;
	v[1] = &m1;
	v[2] = &c2;
	v[3] = &m2;
	
	for(int i = 0; i < v.size(); i++)
	{
		v[i]->print();
		cout << "Similarity= " << v[i]->calculateSimilarity() << endl << endl;
	}
	
	
	return 0;
}
