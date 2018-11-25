#include "Reward.h"
#include <iostream>
#include <random>
#include <stdlib.h>

Reward::Reward(int val) {
	/*std::uniform_int_distribution<int> u(1, 4);
	std::default_random_engine e;

	int rand = u(e);

	if (rand == 1) {
		value = VALUE::one;
	}
	else if (rand == 2) {
		value = VALUE::two;
	}
	else if (rand == 3){
		value = VALUE::three;
	}
	else {
		value = VALUE::four;
	}*/

	if (val == 1) {
		value = VALUE::one;
	}
	else if (val == 2) {
		value = VALUE::two;
	}
	else if (val == 3) {
		value = VALUE::three;
	}
	else {
		value = VALUE::four;
	}
}

Reward::operator int() const {
	return value;
}

std::ostream &operator<<(std::ostream &os, const Reward item) {
	os << "Reward value is: " << item.operator int << std::endl;
	return os;
}
