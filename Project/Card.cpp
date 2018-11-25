#include "Card.h"

Card::Card(FaceAnimal _face, FaceBackground _background) {
	face = _face;
	background = _background;
	isFaceUp = 0;
}

Card::operator FaceAnimal() const {
	return face;
}

Card::operator FaceBackground() const {
	return background;
}