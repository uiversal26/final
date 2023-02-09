#include "LeaguePlay.h"

LeaguePlay::LeaguePlay(const string &a, const string &b, const string &c, int d, int e, int g, int f)
	:Player(a,b,c,d)
{
	setNOG(e);
	setNOW(g);
	setNOL(f);
}

LeaguePlay::~LeaguePlay()
{
}


	
/// Setter
void LeaguePlay::setNOG(int a)
{
	if (a > 0 ) NOG = a;
	else throw invalid_argument("NOG must be greater than 0");
}
void LeaguePlay::setNOW(int a)
{
	if (a > 0 ) NOW = a;
	else throw invalid_argument("NOW must be greater than 0");
}
void LeaguePlay::setNOL(int a)
{
	if (a > 0 ) NOL = a;
	else throw invalid_argument("NOL must be greater than 0");
}

///Getter
int LeaguePlay::getNOG()const
{
	return NOG;
}
int LeaguePlay::getNOW()const
{
	return NOW;
}
int LeaguePlay::getNOL()const
{
	return NOL;
}

void LeaguePlay::print() const
{
	cout << "League";
	Player::print();
	cout << "NOG: " << getNOG() << endl;
	cout << "NOW: " << getNOW() << endl;
	cout << "NOL: " << getNOL() << endl;
}
int LeaguePlay::points() const
{
	return 10 * getNOG() + 3 * getNOW() - 2 * getNOL();
}
