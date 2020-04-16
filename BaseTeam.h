#pragma once
#include <string>
#include <iostream>

using namespace std;

class Team {
protected:
	string tName;
	int tSize;
	bool tFull;
	float tPoints;
public:

	virtual void AddPlayer(string, int) = 0;

	virtual string GetName() = 0;
	virtual int GetSize() = 0;
	virtual float GetPoints() = 0;

	virtual void AddWin() = 0;
	virtual void AddTie() = 0;
	virtual void AddLoss() = 0;

	virtual void ShowPlayers() = 0;


};