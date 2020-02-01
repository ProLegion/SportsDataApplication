//Player.cpp
//Function Definitions for "Player.h"
//Version 1.0
#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
	pName = "Unamed Player";
	pNumber = 0;
	oRank = 0;
	dRank = 0;
}
Player::Player(string na) {
	pName = na;
	pNumber = 0;
	oRank = 0;
	dRank = 0;
}
Player::Player(string na, unsigned int nu) {
	pName = na;
	pNumber = nu;
	oRank = 0;
	dRank = 0;
}
Player::Player(string na, unsigned int nu, unsigned int r, bool fl) {
	pName = na;
	pName = nu;
	//If Bool is true, changing offensive rank
	//If Bool is false, then changing defensive rank

	if (fl) {
		oRank = r;
	}else {
		dRank = r;
	}
}
Player::Player(string na, unsigned int nu, unsigned int o, unsigned int d) {
	pName = na;
	pNumber = nu;
	oRank = o;
	dRank = d;
}
Player::~Player() {
	//Destructor
}

void Player::setRank() {
	oRank = 0;
	dRank = 0;
}
void Player::setRank(unsigned int r, bool fl){
	//If Bool is true, changing offensive rank
	//If Bool is false, then changing defensive rank

	if (fl) {
		oRank = r;
	}else {
		dRank = r;
	}
}
void Player::setRank(unsigned int o, unsigned int d) {
	oRank = o;
	dRank = d;
}

void Player::updateNumber(unsigned int nu) {
	pNumber = nu;
}
void Player::updateName(string na) {
	pName = na;
}

void Player::showPlayer() {
	cout << "#" << pNumber << ". ";
	cout << pName;
	cout << "( " << oRank;
	cout << " / " << dRank << " )" << endl;
}