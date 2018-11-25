#include "Board.h"

Board::Board() {
	cardDeck = cardDeck.make_CardDeck();
	rewardDeck = rewardDeck.make_RewardDeck();

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cards[i][j] = cardDeck.getNext();
		}
	}

	cards[2][2] = nullptr;

}