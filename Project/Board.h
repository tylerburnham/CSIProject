#include <string>
#include "Card.h"
#include "CardDeck.h"
#include "RewardDeck.h"


class Board {
protected:
	enum Letter {A = 1, B = 2, C = 3, D = 4, E = 5};
	Letter letter;
	enum Number {one = 1, two = 2, three = 3, four = 4, five = 5};
	Number number;
	std::string board[19];
	CardDeck cardDeck;
	RewardDeck rewardDeck;
	Card *cards[5][5];
public:
	Board();
	bool isFaceUp(const Letter&, const Number&) const;
	bool turnFaceUp(const Letter&, const Number&);
	bool turnFaceDown(const Letter&, const Number&);
	Card* getCard(const Letter&, const Number&);
	void setCard(const Letter&, const Number&, Card*);
	void reset();
};