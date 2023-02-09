#ifndef LAPTOP_H
#define LAPTOP_H

#include "Computer.h"

class Laptop : public Computer
{
public:
	Laptop(const string &, int =0, int =0, int=0, int =0, bool =false);
	~Laptop();
	
	//Setter
	void setBattery(int);
	void setTouchpad(bool);
	
	//Getter
	int getBattery() const;
	bool getTouchpad() const;
	
	virtual void printComputer() const;
	virtual double performance() ;
	
private:
	int battery;
	bool touchpad;
};

#endif
