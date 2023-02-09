#include "Player.h"

Player::Player(const string &a, const string &b, const string &c, int d)
	:firstName(a), lastName(b), nation(c), age(d)
{
	
}
Player::~Player()
{
	
}

///setter functions
void Player::setFirstName(const string &a)
{
	firstName = a;
}
void Player::setLastName(const string &a)
{
	lastName = a;
}
void Player::setNation(const string &a)
{
	nation = a;
}
void Player::setAge(int a)
{
	age = a;
}

///Getter
string Player::getFirstName() const
{
	return firstName;
}
string Player::getLastName() const
{
	return lastName;
}
string Player::getNation() const
{
	return nation;
}
int Player::getAge() const
{
	return age;
}

void Player::print() const
{
	cout << "Player: " << getFirstName() << " " << getLastName() << endl;
	cout << "Nation: " << getNation() << endl;
	cout << "Age: " << getAge() << endl;
}
