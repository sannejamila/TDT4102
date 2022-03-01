#pragma once
#include "card.h"
#include <vector>
#include "std_lib_facilities.h"

class CardDeck;

class CardDeck{
    private:
        vector<Card> Cards;

    public:
        CardDeck();
        void swap(int a, int b);
        void print();
        void printShort();
        void shuffle();
        const Card drawCard();

};