#ifndef NATIONALPLAYER_H
#define NATIONALPLAYER_H

#include "LeaguePlay.h"

class NationalPlayer : public LeaguePlay
{
public:
	NationalPlayer(const string &, const string &, const string &, int =0, int =0, int =0, int =0, int =0);
	~NationalPlayer();
	
	void setNNOG(int);
	int getNNOG() const;
	
	virtual void print() const;
	virtual int points() const ;
	
	
private:
	int NNOG;
};

#endif
