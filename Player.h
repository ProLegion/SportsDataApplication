//Player.h
//Version 1.0
#include <string>
#ifndef PLAYER_H_
#define PLAYER_H_
using namespace std;

class Player {
private:
	string pName;
	unsigned int pNumber;
	unsigned int oRank;
	unsigned int dRank;
public:
	//Object Constructors
	Player();
	Player(string na);
	Player(string na, unsigned int nu);
	Player(string na, unsigned int nu, unsigned int r, bool fl);
	Player(string na, unsigned int nu, unsigned int o, unsigned int d);

	//Object Destructor
	~Player();

	//Object Functions
	void setRank();
	void setRank(unsigned int r, bool fl);
	void setRank(unsigned int o, unsigned int d);
	void updateNumber(unsigned int nu);
	void updateName(string na);
	void showPlayer();


};

#endif // !