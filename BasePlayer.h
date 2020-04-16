#pragma once
#include <string>

using namespace std;


class Player{
protected:
	string pName;
	int pNumber;
	int pGamesPlayed;
public:
	virtual void ShowPlayer() = 0;
	virtual int GetNumber() = 0;
	virtual void SetNumber(int) = 0;
	virtual string GetName() = 0;
	virtual void SetName(string) = 0;
};

