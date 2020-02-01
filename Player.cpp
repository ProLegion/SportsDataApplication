//Player.cpp
//Function Definitions for "Player.h"
//Version 1.0
#include "Player.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

Player::Player() {
	pName = "Unamed Player";
	pFileName = "Player_" + pName + ".pl";
	pNumber = 0;
	oRank = 0;
	dRank = 0;
	createPlayer();
}
Player::Player(string na) {
	pName = na;
	pFileName = "Player_" + pName + ".pl";
	pNumber = 0;
	oRank = 0;
	dRank = 0;
	createPlayer();
}
Player::Player(string na, unsigned int nu) {
	pName = na;
	pFileName = "Player_" + pName + ".pl";
	pNumber = nu;
	oRank = 0;
	dRank = 0;
	createPlayer();
}
Player::Player(string na, unsigned int nu, unsigned int r, bool fl) {
	pName = na;
	pFileName = "Player_" + pName + ".pl";
	pName = nu;
	//If Bool is true, changing offensive rank
	//If Bool is false, then changing defensive rank

	if (fl) {
		oRank = r;
		dRank = 0;
	}else {
		dRank = r;
		oRank = 0;
	}
	createPlayer();
}
Player::Player(string na, unsigned int nu, unsigned int o, unsigned int d) {
	pName = na;
	pFileName = "Player_" + pName + ".pl";
	pNumber = nu;
	oRank = o;
	dRank = d;
	createPlayer();
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

void Player::createPlayer() {
	ofstream fout(pFileName);
	if (!fout.is_open()) {
		cerr << "FILE CANNOT BE OPENED";
		exit(EXIT_FAILURE);
	}//Checks for errors opening file

	fout << pName << endl;
	fout << pNumber << endl;
	fout << oRank << endl;
	fout << dRank << endl;

	fout.close();
}
void Player::loadPlayer() {
	ifstream fin(pFileName);
	string temp;

	getline(fin, temp);
	pName = temp;
	getline(fin, temp);
	pNumber = temp;
	getline(fin, temp);
	oRank = temp;
	getline(fin, temp);
	dRank = temp;

	fin.close();
}
void Player::savePlayer() {
	
}
