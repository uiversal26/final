#ifndef DOCTORAL_H
#define DOCTORAL_H

#include "Master.h"

class Doctoral : public Master
{
public:
	Doctoral(const string&, const string&, const string&, const string&, int =0, int =0, int =0, int =0);
	~Doctoral();
	
	///Setter
	void setNOAPhd(int);
	void setNOPPhd(int);
	
	///getter
	int getNOAPhd() const;
	int getNOPPhd() const;
	
	virtual void printResume() const;
	virtual double performance() ;
	
private:
	
	int NOAPhd;
	int NOPPhd;
};

#endif
