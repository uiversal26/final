#ifndef BACHELOR_H
#define BACHELOR_H
#include <string>
#include <iostream>

using namespace std;

class Bachelor
{
public:
	Bachelor(const string&, const string&, const string&, const string&);
	~Bachelor();
	
	///setter
	void setFirstName(const string&);
	void setLastName(const string&);
	void setUniversity(const string&);
	void setTitle(const string&);
	
	///getter
	string getFirstName() const;
	string getLastName() const;
	string getUniversity() const;
	string getTitle() const;
	
	virtual void printResume() const;
	virtual double performance() =0;
	
private:
	string firstName;
	string lastName;
	string university;
	string title;
};

#endif
