#include <iostream>
#include "Laptop.h"
#include "Desktop.h"
#include "Computer.h"
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Desktop d1("Intel Core i7", 12,3250,6000,180,true);
	Desktop d2("Intel Core i9", 8,2860,7450,180,false);
	
	Laptop l1("AMD Ryzen 5", 16,1756,5550,3,false);
	Laptop l2("AMD Threadripper 3990X", 8,1950,12500,3,false);
	
	vector < Computer * > comps(4);
	
	comps[0] = &d1;
	comps[1] = &d2;
	comps[2] = &l1;
	comps[3] = &l2;
	
	for( int i = 0; i < comps.size(); i++)
	{
		comps[i] -> printComputer();
		cout << "Performance = " << comps[i]->performance() <<endl << endl;
	}

	return 0;
}
