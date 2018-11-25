#include <iostream>

class Reward {
protected:
	enum VALUE : int { one = 1,two = 2,three = 3, four = 4 };
	VALUE value;
private:
	Reward(int);
public:
	operator int() const;
	
friend class RewardDeck;
};