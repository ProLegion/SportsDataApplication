#pragma once
#include "BasePlayer.h"

struct PlayerStats{
	int goals;
	int saves;
	int penalties;
}typedef pStat;
class TestPlayer : public Player{
private:
	pStat stats;
public:
	TestPlayer();
	TestPlayer(string, int);
	~TestPlayer();

	void ShowPlayer();

	int GetNumber();
	void SetNumber(int);
	string GetName();
	void SetName(string);

	int GetGoals();
	int GetSaves();
	int GetPenalties();
	void AddGoals(int);
	void AddSaves(int);
	void AddPenalties(int);
	void SetGoals(int);
	void SetSaves(int);
	void SetPenalties(int);


};

