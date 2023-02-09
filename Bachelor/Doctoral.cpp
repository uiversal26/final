#include "Doctoral.h"

Doctoral::Doctoral(const string& a, const string& b, const string& c, const string& d, int e, int f, int g, int h)
	:Master(a,b,c,d,e,f)
{
	setNOAPhd(g);
	setNOPPhd(h);
}

Doctoral::~Doctoral()
{
}

///Setter
void Doctoral::setNOAPhd(int a)
{
	NOAPhd = a;
}
void Doctoral::setNOPPhd(int a)
{
	NOPPhd = a;
}

///getter
int Doctoral::getNOAPhd() const
{
	return NOAPhd;
}
int Doctoral::getNOPPhd() const
{
	return NOPPhd;
}

void Doctoral::printResume() const
{
	Master::printResume();
	cout << "NOA Phd: " << getNOAPhd() << endl;
	cout << "NOP Phd: " << getNOPPhd() << endl;
}
double Doctoral::performance()
{
	return Master::performance() + 8.5*getNOAPhd() + 26.5*getNOPPhd();
}
