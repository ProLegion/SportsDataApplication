#include "TestTeam.h"

TestTeam::TestTeam(string name, int size){
	tSize = size;
	tPlayers =(TestPlayer**) new TestPlayer[size];
	tName = name;
	tPoints = 0;
	tFull = false;
	for (int i = 0; i < size; i++){
		tPlayers[i] = nullptr;
	}
}

TestTeam::~TestTeam() {
	delete[] tPlayers;
}


void TestTeam::AddPlayer(string name, int num) {
	int fullCntr = 0;
	if (tFull) {
		//Then Team is already full
	}
	else {
		//We are unsure if full, so we will check here

		for (int i = 0; i < tSize; i++){
			if (tPlayers[i] == nullptr) {
				//Count Available Spots
				fullCntr++;
			}
		}
		
		if (fullCntr > 1) {
			//More than 1 spot
			for (int i = 0; i < tSize; i++) {
				if (tPlayers[i] == nullptr) {
					tPlayers[i] == new TestPlayer();
					cout << "Player Name: ";
					getline(cin, tPlayers[i]->SetName);
					cout << "Player Number: ";
					getline(con, tPlayers[i]->SetNumber);					
				}
				break;
			}
			tFull = false;
		}
		else if (fullCntr == 1) {
			//Only one spot left
			for (int i = 0; i < tSize; i++) {
				if (tPlayers[i] == nullptr) {
					tPlayers[i] == new TestPlayer();
					cout << "Player Name: ";
					getline(cin, tPlayers[i]->SetName);
					cout << "Player Number: ";
					getline(con, tPlayers[i]->SetNumber);				
				}
				break;
			}

			tFull = true;
		}
		else {
			//No spots left, team full
			tFull = true;
		}

	}
}

string TestTeam::GetName() {
	return tName;
}

int TestTeam::GetSize() {
	return tSize;
}

float TestTeam::GetPoints() {
	return tPoints;
}

void TestTeam::AddWin() {
	tPoints += 1;
}

void TestTeam::AddTie() {
	tPoints += 0.5;
}

void TestTeam::AddLoss() {
	tPoints += 0; //Pointless, but for following flow of code and logic we will keep for now
}

void TestTeam::ShowPlayers() {

}