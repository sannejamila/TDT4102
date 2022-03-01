#include "card.h"
#include "std_lib_facilities.h"
#include <map>



string suitToString(Suit suit){
    map<Suit, string> suit_to_string{
        {Suit::clubs, "clubs"}, {Suit::diamonds, "diamonds"},
        {Suit::hearts, "hearts"}, {Suit::spades, "spades"}
    };
    string streng = suit_to_string.at(suit);
    return streng;
}


string rankToString(Rank rank){
    map<Rank, string> rank_to_string{
        {Rank::two, "two"},{Rank::three, "three"}, {Rank::four, "four"},
        {Rank::five, "five"}, {Rank::six, "six"}, {Rank::seven, "seven"},
        {Rank::eight, "eight"},{Rank::nine, "nine"}, {Rank::ten, "ten"},
        {Rank::jack, "jack"},{Rank::queen, "queen"},{Rank::king, "king"},
        {Rank::ace, "ace"}
    };
    string streng = rank_to_string.at(rank);
    return streng;
}

Card::Card(Suit suit, Rank rank): s{suit}, r{rank}{}


Suit Card::getSuit(){
    return s;
}

Rank Card::getRank(){
    return r;
}

string Card::toString(){
    string srstring;
    srstring += suitToString(s) + "  " + rankToString(r);
    return srstring;
}

string Card::toStringShort(){
    string short_string;
    int rank = static_cast<int>(r);
    string srank = to_string(rank);
    short_string += suitToString(s)[0] + srank;
    return short_string;
}

