#include "RewardDeck.h"
#include "Reward.h"

RewardDeck& RewardDeck::make_RewardDeck() {
	RewardDeck *rewardDeck = new RewardDeck;

	Reward *oneRuby1 = new Reward(1);
	Reward *oneRuby2 = new Reward(1);
	Reward *oneRuby3 = new Reward(1);
	Reward *twoRuby1 = new Reward(2);
	Reward *twoRuby2 = new Reward(2);
	Reward *threeRuby = new Reward(3);
	Reward *fourRuby = new Reward(4);

	rewardDeck->deck.push_back(*oneRuby1);
	rewardDeck->deck.push_back(*oneRuby2);
	rewardDeck->deck.push_back(*oneRuby3);
	rewardDeck->deck.push_back(*twoRuby1);
	rewardDeck->deck.push_back(*twoRuby2);
	rewardDeck->deck.push_back(*threeRuby);
	rewardDeck->deck.push_back(*fourRuby);

	rewardDeck->currentCard = &(rewardDeck->deck.back());

	return *rewardDeck;
}