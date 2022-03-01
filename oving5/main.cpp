#include "std_lib_facilities.h"
#include "card.h"
#include <map>
#include "CardDeck.h"
#include "Blackjack.h"

int main()
{


	srand(0);

	Blackjack blackjack;

	blackjack.playGame();

	CardDeck card_deck;

	card_deck.shuffle();

	Card card = card_deck.drawCard();

	string streng_card = card.toString();

	cout << streng_card << endl;

	Rank r = Rank::king;
	Suit s = Suit::hearts;
	string rank = rankToString(r);
	string suit = suitToString(s);

	cout << "Rank: " << rank << " Suit: " << suit << endl; 

	Card c{Suit::spades, Rank::ace};

	cout << c.toString() << endl;
	cout << c.toStringShort() << endl;

	



}

