#include "Card.h"
#include "Deck.h"

class CardDeck : public Deck<Card> {
public:
	static CardDeck& make_CardDeck();
	void shuffle();
	Card* getNext();
	bool isEmpty();
};