#include "Desktop.h"

Desktop::Desktop(const string &a, int b, int c, int d,int e, bool f)
	:Computer(a,b,c,d)
{
	setPowerSupply(e);
	setMonitor(f);
}

Desktop::~Desktop()
{
}

///Setter
void Desktop::setPowerSupply(int a)
{
	if (a > 0) powerSupply = a;
	else throw invalid_argument("Power Supply must be greater than 0");
}
void Desktop::setMonitor(bool a)
{
	monitor = a;
}

///Getter
int Desktop::getPowerSupply() const
{
	return powerSupply;
}
bool Desktop::getMonitor() const
{
	return monitor;
}

void Desktop::printComputer() const
{
	Computer::printComputer();
	cout << "Power Supply: " << getPowerSupply() << "Watt" << endl;
	cout << "Monitor: ";
	if(getMonitor()) cout << "YES" << endl;
	else cout << "NO" << endl;
}
double Desktop::performance() 
{
	return 0.3 * 10000 / getPrice() + 0.7 * 64 / getRam();
}
