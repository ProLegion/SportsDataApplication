//Player.h
//Version 1.0
#include <string>
#ifndef PLAYER_H_
#define PLAYER_H_
using namespace std;

struct PlayerInfo {
	string pName;
	unsigned int pNumber;
	unsigned int oRank;
	unsigned int dRank;
}typedef plyr;

class Player {
private:
	plyr pData;
	string pFileName;
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

	void createPlayer();
	void savePlayer();
	void loadPlayer();

};

#endif // !
