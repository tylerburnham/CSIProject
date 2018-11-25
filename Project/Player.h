#pragma once
#include<string>
#include "Reward.h"

class Player {
protected:
	std::string name;
	enum SIDE { top, bottom, left, right };
	SIDE side;
	int rubieCount;
	bool activeStatus;
	bool displayMode;

public: 
	
	std::string getName();
	void setActive(bool);
	bool isActive();
	int getNRubies() const;
	void addReward(const Reward&);
	void setDisplayMode(bool endOfGame);
	bool getDisplayMode();
	SIDE getSide();
	void setSide(SIDE);
};