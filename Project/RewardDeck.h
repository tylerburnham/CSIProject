#include "Deck.h"
#include "Reward.h"


class RewardDeck : public Deck<Reward> {
public:
	static RewardDeck& make_RewardDeck();
};