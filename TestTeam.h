#pragma once
#include "BaseTeam.h"
#include "TestPlayer.h"
class TestTeam : public Team{
private:
	TestPlayer** tPlayers;
public:
	TestTeam(string, int);
	~TestTeam();
	
	void AddPlayer(string, int);
	
	string GetName();
	int GetSize();
	float GetPoints();

	void AddWin();
	void AddTie();
	void AddLoss();

	void ShowPlayers();
};

