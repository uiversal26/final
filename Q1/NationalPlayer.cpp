#include "NationalPlayer.h"

NationalPlayer::NationalPlayer(const string &a, const string &b, const string &c, int d, int e, int g, int f, int h)
	:LeaguePlay(a,b,c,d,e,g,f)
{
	setNNOG(h);
}

NationalPlayer::~NationalPlayer()
{
}

void NationalPlayer::setNNOG(int a)
{
	if (a > 0 ) NNOG = a;
	else throw invalid_argument("NNOG must be greater than 0");	
}
int NationalPlayer::getNNOG() const
{
	return NNOG;
}

void NationalPlayer::print() const
{
	cout << "National";
	LeaguePlay::print();
	cout << "NNOG: " << getNNOG() << endl; 
}
int NationalPlayer::points() const 
{
	return 10 * getNOG() + 3 * getNOW() - 2 * getNOL() + 15 * getNNOG();
}
