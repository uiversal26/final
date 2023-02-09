#include "Computer.h"

Computer::Computer(const string &a, int b, int c, int d)
	:cpu(a), ram(b), weight(c), price(d)
{	
}

Computer::~Computer()
{
	
}


///Setter
void Computer::setCpu(const string &a)
{
	cpu = a;
}
void Computer::setRam(int a)
{
	ram = a;
}
void Computer::setWeight(int a)
{
	weight = a;
} 
void Computer::setPrice(int a)
{
	price = a;
}

///getter
string Computer::getCpu()const
{
	return cpu;
}
int Computer::getRam()const
{
	return ram;
} 
int Computer::getWeight()const
{
	return weight;
 } 
int Computer::getPrice()const
{
	return price;
}

void Computer::printComputer() const
{
	cout << "Initializer for: " << getRam() << 	"GB " << getCpu() << endl;
	cout << "Ram: " << getRam() << " GB" <<  endl; 
	cout << "Cpu: " << getCpu() << endl;
	cout << "Weight: " << getWeight() << " Gram" <<  endl;
	cout << "Price: " << getPrice() << "TL" << endl; 
}

