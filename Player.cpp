//Player.cpp
//Function Definitions for "Player.h"
//Version 1.0
#include "Player.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

Player::Player() {
	pData.pName = "Unamed Player";
	pFileName = "Player_" + pData.pName + ".pl";
	pData.pNumber = 0;
	pData.oRank = 0;
	pData.dRank = 0;
	createPlayer();
}
Player::Player(string na) {
	pData.pName = na;
	pFileName = "Player_" + pData.pName + ".pl";
	pData.pNumber = 0;
	pData.oRank = 0;
	pData.dRank = 0;
	createPlayer();
}
Player::Player(string na, unsigned int nu) {
	pData.pName = na;
	pFileName = "Player_" + pData.pName + ".pl";
	pData.pNumber = nu;
	pData.oRank = 0;
	pData.dRank = 0;
	createPlayer();
}
Player::Player(string na, unsigned int nu, unsigned int r, bool fl) {
	pData.pName = na;
	pFileName = "Player_" + pData.pName + ".pl";
	pData.pName = nu;
	//If Bool is true, changing offensive rank
	//If Bool is false, then changing defensive rank

	if (fl) {
		pData.oRank = r;
		pData.dRank = 0;
	}else {
		pData.dRank = r;
		pData.oRank = 0;
	}
	createPlayer();
}
Player::Player(string na, unsigned int nu, unsigned int o, unsigned int d) {
	pData.pName = na;
	pFileName = "Player_" + pData.pName + ".pl";
	pData.pNumber = nu;
	pData.oRank = o;
	pData.dRank = d;
	createPlayer();
}
Player::~Player() {
	//Destructor
}

void Player::setRank() {
	pData.oRank = 0;
	pData.dRank = 0;
}
void Player::setRank(unsigned int r, bool fl){
	//If Bool is true, changing offensive rank
	//If Bool is false, then changing defensive rank

	if (fl) {
		pData.oRank = r;
	}else {
		pData.dRank = r;
	}
}
void Player::setRank(unsigned int o, unsigned int d) {
	pData.oRank = o;
	pData.dRank = d;
}

void Player::updateNumber(unsigned int nu) {
	pData.pNumber = nu;
}
void Player::updateName(string na) {
	pData.pName = na;
}

void Player::showPlayer() {
	cout << "#" << pData.pNumber << ". ";
	cout << pData.pName;
	cout << "( " << pData.oRank;
	cout << " / " << pData.dRank << " )" << endl;
}

void Player::createPlayer() {
	ofstream fout(pFileName, ios_base::out|ios_base::binary);
	if (!fout.is_open()) {
		cerr << "FILE CANNOT BE OPENED";
		exit(EXIT_FAILURE);
	}//Checks for errors opening file

	fout.write((char*)&pData, sizeof pData); //Stores the entire player structure

	fout.close();
}
//void Player::loadPlayer() {
//	ifstream fin(pFileName);
//	string temp;
//
//	getline(fin, temp);
//	pName = temp;
//	getline(fin, temp);
//	pNumber = temp;
//	getline(fin, temp);
//	oRank = temp;
//	getline(fin, temp);
//	dRank = temp;
//
//	fin.close();
//}
//void Player::savePlayer() {
//	
//}
