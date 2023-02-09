#ifndef DESKTOP_H
#define DESKTOP_H

#include "Computer.h"

class Desktop : public Computer
{
public:
	Desktop(const string &, int =0, int =0, int=0,int =0, bool =false);
	~Desktop();
	
	///Setter
	void setPowerSupply(int);
	void setMonitor(bool);
	
	///Getter
	int getPowerSupply() const;
	bool getMonitor() const;
	
	virtual void printComputer() const;
	virtual double performance() ;
	
private:
	int powerSupply;
	bool monitor;
};

#endif
