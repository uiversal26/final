#ifndef COMPUTER_H
#define COMPUTER_H
#include<iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Computer
{
public:
	Computer(const string &, int =0, int =0, int=0);
	~Computer();
	
	///Setter
	void setCpu(const string &);
	void setRam(int); 
	void setWeight(int); 
	void setPrice(int); 
	
	///getter
	string getCpu()const;
	int getRam()const; 
	int getWeight()const; 
	int getPrice()const; 
	
	virtual void printComputer() const;
	virtual double performance() =0;

private:
	string cpu;
	int ram;
	int weight;
	int price;
};

#endif
