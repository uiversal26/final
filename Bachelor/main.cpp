#include <iostream>
#include "Bachelor.h"
#include <vector>
#include "Master.h"
#include "Doctoral.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Master m1("Ricardo","Charles","ESOGU","Research Asistant", 16,3);
	Master m2("Jonas","Benz","ESOGU","Research Asistant", 4,1);
	
	Doctoral d1("Andrew", "Liang","ESOGU", "Assistant Professor", 26, 8, 18, 13);
	Doctoral d2("Lilian", "Bartez","ESOGU", "Professor", 13, 2, 23, 5);
	
	vector <Bachelor*> v1(4);
	
	v1[0] = &m1;
	v1[1] = &m2;
	v1[2] = &d1;
	v1[3] = &d2;
	
	for(int i = 0; i < v.size(); i++)
	{
		v1[i]->printResume();
		cout <<"Performance " << v1[i]->performance() << endl << endl;
		
	}
		
	
	return 0;
}
