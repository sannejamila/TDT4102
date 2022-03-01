#include "card.h"
#include "CardDeck.h"
#include "std_lib_facilities.h"

CardDeck::CardDeck(){
    for( Rank i = Rank::two; i <= Rank::ace; i = Rank(int(i) + 1)){
      for (Suit j = Suit::clubs ; j <= Suit::spades; j=Suit(int(j)+1)){
          Card card = Card(j,i);
          Cards.push_back(card);
      }
    }
}

void CardDeck::swap(int a, int b){
    Card c = Cards[a];
    Cards[a] = Cards[b];
    Cards[b] = c;

}

void CardDeck::print(){
    for(Card c : Cards){
        cout << c.toString() << endl;
    }
}

void CardDeck::printShort(){
    for(Card c : Cards){
        cout << c.toStringShort() << endl;
    }
}

void CardDeck::shuffle(){
    int max = 51;
    int min = 0;
    for(int i = 0; i < 51; i++){
        swap(rand()%(max-min + 1) + min, i);
    }
}

const Card CardDeck::drawCard(){
    Card overste_kort = Cards.at(Cards.size()-1);
    Cards.pop_back();
    return overste_kort;
}