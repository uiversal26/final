#ifndef MASTER_H
#define MASTER_H

#include "Bachelor.h"


class Master : public Bachelor
{
public:
	Master(const string&, const string&, const string&, const string&, int =0, int =0);
	~Master();
	
	/// Setter
	void setNOAMaster(int);
	void setNOPMaster(int);
	
	///Getter
	int getNOAMaster() const;
	int getNOPMaster() const;
	
	virtual void printResume() const;
	virtual double performance() ;
private:
	int NOAMaster;
	int NOPMaster;
};

#endif
