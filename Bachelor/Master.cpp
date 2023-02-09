#include "Master.h"

Master::Master(const string& a, const string& b, const string& c, const string& d, int e, int f)
	:Bachelor(a,b,c,d)
{
	setNOAMaster(e);
	setNOPMaster(f);
}

Master::~Master()
{
}

/// Setter
void Master::setNOAMaster(int a)
{
	NOAMaster = a;
}
void Master::setNOPMaster(int a)
{
	NOPMaster = a;
}

///Getter
int Master::getNOAMaster() const
{
	return NOAMaster;
}
int Master::getNOPMaster() const
{
	return NOPMaster;	
}

void Master::printResume() const
{
	Bachelor::printResume();
	cout << "NOA Master: " << getNOAMaster() << endl;
	cout << "NOP Master: " << getNOPMaster() << endl ;
}
double Master::performance()
{
	return 12.0 + 6.2*getNOAMaster() + 14.5*getNOPMaster();
}
