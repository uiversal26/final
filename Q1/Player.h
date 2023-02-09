#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

class Player
{
public:
	Player(const string &, const string &, const string &, int =0);
	~Player();
	
	///setter functions
	void setFirstName(const string &);
	void setLastName(const string &);
	void setNation(const string &);
	void setAge(int);
	
	///Getter
	string getFirstName() const;
	string getLastName() const;
	string getNation() const;
	int getAge() const;
	
	virtual void print() const;
	virtual int points() const = 0;
	
private:
	string firstName;
	string lastName;
	string nation;
	int age;
};

#endif
