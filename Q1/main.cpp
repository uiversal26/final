#include <iostream>
#include "LeaguePlay.h"
#include "Player.h"
#include "NationalPlayer.h"
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	LeaguePlay l1("Shane", "Larkin", "USA", 27, 28, 24, 4);
	LeaguePlay l2("Roger", "Federer", "Switzerland", 38, 14, 13, 1);
	
	NationalPlayer n1("Zlatan", "Ibrahimovic", "Sweden", 38,24,14,10,6);
	NationalPlayer n2("Malwina", "Snarzek", "Poland", 23,32,29,3,12);
	
	vector <Player*> players(4);
	
	players[0] = &l1;
	players[1] = &l2;
	players[2] = &n1;
	players[3] = &n2;
	
	for (int i = 0; i < players.size(); i++)
	{
		players[i] -> print();
		cout << "Points " << players[i]	-> points() << endl << endl;
	
	}
	
	return 0;
}
