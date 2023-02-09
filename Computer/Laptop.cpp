#include "Laptop.h"

Laptop::Laptop(const string &a, int b, int c, int d, int e, bool f)
	:Computer(a,b,c,d)
{
	setBattery(e);
	setTouchpad(f);
}

Laptop::~Laptop()
{
}
	
//Setter
void Laptop::setBattery(int a)
{
	if(a > 0) battery = a;
	else throw invalid_argument("Battery must be greater than 0");
}
void Laptop::setTouchpad(bool a)
{
	touchpad = a;
}

//Getter
int Laptop::getBattery() const
{
	return battery;
}
bool Laptop::getTouchpad() const
{
	return touchpad;
}

void Laptop::printComputer() const
{
	Computer::printComputer();
	cout << "Battery: " << getBattery() << " Cells" << endl;
	cout << "Touchpad: " ;
	if(getTouchpad()) cout << "YES" << endl;
	else cout << "NO" << endl;
}
double Laptop::performance() 
{
	return 0.3 * 10000 / getPrice() + 0.7 * 64 / getRam();
}
