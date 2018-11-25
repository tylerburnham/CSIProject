#include "CardDeck.h"
#include "Card.h"
#include <algorithm>

CardDeck& CardDeck::make_CardDeck() {
	CardDeck * cardDeck = new CardDeck;
	Card *CR = new Card(Card::FaceAnimal::Crab, Card::FaceBackground::Red);
	Card *CG = new Card(Card::FaceAnimal::Crab, Card::FaceBackground::Green);
	Card *CP = new Card(Card::FaceAnimal::Crab, Card::FaceBackground::Purple);
	Card *CB = new Card(Card::FaceAnimal::Crab, Card::FaceBackground::Blue);
	Card *CY = new Card(Card::FaceAnimal::Crab, Card::FaceBackground::Yellow);
	cardDeck->deck.push_back(*CR);
	cardDeck->deck.push_back(*CG);
	cardDeck->deck.push_back(*CP);
	cardDeck->deck.push_back(*CB);
	cardDeck->deck.push_back(*CY);

	Card *PR = new Card(Card::FaceAnimal::Penguin, Card::FaceBackground::Red);
	Card *PG = new Card(Card::FaceAnimal::Penguin, Card::FaceBackground::Green);
	Card *PP = new Card(Card::FaceAnimal::Penguin, Card::FaceBackground::Purple);
	Card *PB = new Card(Card::FaceAnimal::Penguin, Card::FaceBackground::Blue);
	Card *PY = new Card(Card::FaceAnimal::Penguin, Card::FaceBackground::Yellow);
	cardDeck->deck.push_back(*PR);
	cardDeck->deck.push_back(*PG);
	cardDeck->deck.push_back(*PP);
	cardDeck->deck.push_back(*PB);
	cardDeck->deck.push_back(*PY);


	Card *OR = new Card(Card::FaceAnimal::Octopus, Card::FaceBackground::Red);
	Card *OG = new Card(Card::FaceAnimal::Octopus, Card::FaceBackground::Green);
	Card *OP = new Card(Card::FaceAnimal::Octopus, Card::FaceBackground::Purple);
	Card *OB = new Card(Card::FaceAnimal::Octopus, Card::FaceBackground::Blue);
	Card *OY = new Card(Card::FaceAnimal::Octopus, Card::FaceBackground::Yellow);
	cardDeck->deck.push_back(*OR);
	cardDeck->deck.push_back(*OG);
	cardDeck->deck.push_back(*OP);
	cardDeck->deck.push_back(*OB);
	cardDeck->deck.push_back(*OY);

	Card *TR = new Card(Card::FaceAnimal::Turtle, Card::FaceBackground::Red);
	Card *TG = new Card(Card::FaceAnimal::Turtle, Card::FaceBackground::Green);
	Card *TP = new Card(Card::FaceAnimal::Turtle, Card::FaceBackground::Purple);
	Card *TB = new Card(Card::FaceAnimal::Turtle, Card::FaceBackground::Blue);
	Card *TY = new Card(Card::FaceAnimal::Turtle, Card::FaceBackground::Yellow);
	cardDeck->deck.push_back(*TR);
	cardDeck->deck.push_back(*TG);
	cardDeck->deck.push_back(*TP);
	cardDeck->deck.push_back(*TB);
	cardDeck->deck.push_back(*TY);

	Card *WR = new Card(Card::FaceAnimal::Walrus, Card::FaceBackground::Red);
	Card *WG = new Card(Card::FaceAnimal::Walrus, Card::FaceBackground::Green);
	Card *WP = new Card(Card::FaceAnimal::Walrus, Card::FaceBackground::Purple);
	Card *WB = new Card(Card::FaceAnimal::Walrus, Card::FaceBackground::Blue);
	Card *WY = new Card(Card::FaceAnimal::Walrus, Card::FaceBackground::Yellow);
	cardDeck->deck.push_back(*WR);
	cardDeck->deck.push_back(*WG);
	cardDeck->deck.push_back(*WP);
	cardDeck->deck.push_back(*WB);
	cardDeck->deck.push_back(*WY);

	cardDeck->currentCard = &(cardDeck->deck.back());

	return *cardDeck;
}

void CardDeck::shuffle(){
	std::random_shuffle(deck.begin(), deck.end());
}

Card* CardDeck::getNext() {
	Card nextCard = *currentCard;
	deck.pop_back();
	currentCard = &(deck.back());
	return &nextCard;
}

bool CardDeck::isEmpty() {
	if (currentCard == nullptr) {
		return true;
	}
	return false;
}