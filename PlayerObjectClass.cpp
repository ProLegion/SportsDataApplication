//Test file for Player class/header
#include <iostream>
#include "Player.h"


int main() {
	string testString = "TestName";
	string filename = "player_" + testString + ".pl";
	Player player1("Owen Cantor", 5);
	player1.showPlayer();

	cout << filename << endl;

	player1.createPlayer();
	
	player1.updateName("Billy Bob Joe");
	player1.showPlayer();
	player1.loadPlayer();

	return 0;
}

