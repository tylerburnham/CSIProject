#pragma once

class Card {
public:
	enum FaceAnimal {Crab, Penguin, Octopus, Turtle, Walrus};
	FaceAnimal face;
	
	enum FaceBackground {Red, Green, Purple, Blue, Yellow};
	FaceBackground background;
	bool isFaceUp;
private:
	Card(FaceAnimal, FaceBackground);
public:
	operator FaceAnimal() const;
	operator FaceBackground() const;
	
friend class CardDeck;
};