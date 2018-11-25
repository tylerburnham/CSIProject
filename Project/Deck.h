#include <vector>

template <class C> class Deck {
protected:
	static std::vector<C> deck;
	static C* currentCard;
public:
	void shuffle() = 0;
	C* getNext() = 0;
	bool isEmpty() = 0;

};