#include "TestPlayer.h"

TestPlayer::TestPlayer(){
	pName = "DEFAULT";
	pNumber = 0;

	stats.goals = 0;
	stats.penalties = 0;
	stats.saves = 0;
}
TestPlayer::TestPlayer(string na, int nu) {
	pName = na;
	pNumber = nu;

	stats.goals = 0;
	stats.penalties = 0;
	stats.saves = 0;
}
TestPlayer::~TestPlayer() {
	// Deconstructor
}

/* Universal Functions */

int TestPlayer::GetNumber() {
	return pNumber;
}

void TestPlayer::SetNumber(int n) {
	pNumber = n;
}

string TestPlayer::GetName() {
	return pName;
}

void TestPlayer::SetName(string n) {
	pName = n;
}

/* Sport Dependent Functions */

int TestPlayer::GetGoals() {
	return stats.goals;
}

int TestPlayer::GetSaves() {
	return stats.saves;
}

int TestPlayer::GetPenalties() {
	return stats.penalties;
}

void TestPlayer::AddGoals(int g) {
	stats.goals = g;
}

void TestPlayer::AddSaves(int s) {
	stats.saves = s;
}

void TestPlayer::AddPenalties(int p) {
	stats.penalties = p;
}

void TestPlayer::SetGoals(int g) {
	stats.goals = g;
}

void TestPlayer::SetSaves(int s) {
	stats.saves = s;
}

void TestPlayer::SetPenalties(int p) {
	stats.penalties = p;
}
