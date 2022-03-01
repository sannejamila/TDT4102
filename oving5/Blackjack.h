#pragma once
#include "card.h"
#include "CardDeck.h"

class Blackjack;

class Blackjack { 
    private:
        CardDeck deck;
        vector<Card> playerHand;
        vector<Card> dealerHand;
        int playerHandSum = 0;
        int dealerHandSum = 0;
    public:
        int getCardValue(Card card);
        int getHandScore(vector<Card> vector_cards);
        bool askPlayerDrawCard();
        void drawPlayerCard();
        void drawDealerCard();
        void playGame();
};

bool isAce(Card card);



