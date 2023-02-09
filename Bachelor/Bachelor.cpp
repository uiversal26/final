#include "Bachelor.h"

Bachelor::Bachelor(const string& a, const string& b, const string& c, const string& d)
{
	setFirstName(a);
	setLastName(b);
	setUniversity(c);
	setTitle(d);
}
Bachelor::~Bachelor()
{
	
}

///setter
void Bachelor::setFirstName(const string &a)
{
	firstName = a;
}
void Bachelor::setLastName(const string &a)
{
	lastName = a;
}
void Bachelor::setUniversity(const string &a)
{
	university = a;
}
void Bachelor::setTitle(const string &a)
{
	title = a;
}

///getter
string Bachelor::getFirstName() const
{
	return firstName;
}
string Bachelor::getLastName() const
{
	return lastName;
}
string Bachelor::getUniversity() const
{
	return university;
}
string Bachelor::getTitle() const
{
	return title;
}
void Bachelor::printResume() const
{
	cout << "Name: " <<  getFirstName() << endl;
	cout << "Last Name: " <<  getLastName() << endl;
	cout << "University: " <<  getUniversity() << endl;
	cout << "Title: " <<  getTitle() << endl;
}
