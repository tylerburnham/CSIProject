#include "Player.h"
#include <string>
#include <iostream>

std::string Player::getName() {
	return name;
}

void Player::setActive(bool status){
	activeStatus = status;
}

bool Player::isActive() {
	return activeStatus;
}

int Player::getNRubies() const {
	return rubieCount;
}

void Player::addReward(const Reward& reward) {
	rubieCount += reward.operator int;
}


void Player::setDisplayMode(bool endOfGame) {
	displayMode = endOfGame;
}

bool Player::getDisplayMode() {
	return displayMode;
}

Player::SIDE Player::getSide() {
	return side;
}

void Player::setSide(SIDE _side) {
	side = _side;
}

std::ostream &operator<<(std::ostream &os, Player player) {
	if (player.getDisplayMode() == 0) {
		os << player.getName() << ": " << player.getSide() << "(" << player.isActive() << ")" << std::endl;
	}
	else {
		os << player.getName() << ": " << player.getNRubies() << " rubies" << std::endl;
	}
	return os;
}
