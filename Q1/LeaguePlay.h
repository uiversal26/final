#ifndef LEAGUEPLAY_H
#define LEAGUEPLAY_H

#include "Player.h"

class LeaguePlay : public Player
{
public:
	LeaguePlay(const string &, const string &, const string &, int =0, int =0, int =0, int =0);
	~LeaguePlay();
	
	/// Setter
	void setNOG(int);
	void setNOW(int);
	void setNOL(int);
	
	///Getter
	int getNOG()const;
	int getNOW()const;
	int getNOL()const;
	
	virtual void print() const;
	virtual int points() const;
	
private:
	int NOG;
	int NOW;
	int NOL;
};

#endif
