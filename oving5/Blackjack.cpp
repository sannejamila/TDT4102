#include "card.h"
#include "CardDeck.h"
#include "Blackjack.h"


bool isAce(Card card){
    Rank rank = card.getRank();
    return (rank == Rank::ace);
}


int Blackjack::getCardValue(Card card){
    if(isAce(card) == true){
        return 11;
    }
    else{
        Rank rank = card.getRank();
        int value = static_cast<int>(rank);
        if(11 <= value && value <= 13){
            value = 10;
        }
        return value;
    }
}



int Blackjack::getHandScore(vector<Card> vector_cards){
    int poeng = 0;
    int ace_sum = 0;
    for(Card c : vector_cards){
        if(isAce(c) == true){
            ace_sum += 1;
        }
        else{
            poeng += getCardValue(c);
        }        
    }
    if(ace_sum > 0){
        poeng += ace_sum-1;
        if(poeng < 11){
            poeng += 11;
        }
        else{
            poeng += 1;
        }
    }
    
  return poeng;
}

bool Blackjack::askPlayerDrawCard(){
    string answer;
    cout << "Vil du trekke et nytt kort? (ja/nei)" << endl;
    cin >> answer;
    return (answer == "ja");
}

void Blackjack::drawPlayerCard(){
    Card card_player = deck.drawCard();
    playerHand.push_back(card_player);
    playerHandSum = getHandScore(playerHand);
}

void Blackjack::drawDealerCard(){
    Card card_dealer = deck.drawCard();
    dealerHand.push_back(card_dealer);
    dealerHandSum = getHandScore(dealerHand);
}

void Blackjack::playGame(){

    deck.shuffle();

    bool winner;

    drawDealerCard();

    Card first_dealer_card = dealerHand[0];
    cout << "Første dealerkort: "  << first_dealer_card.toString() << endl;

    drawPlayerCard();
    Card first_player_card = playerHand[0];
    cout << "Første spillerkort: " << first_player_card.toString() << endl;

    drawPlayerCard();

    Card second_player_card = playerHand[1];
    cout << "Andre spillerkort: " << second_player_card.toString() << endl;


    int i = 2;

    while(playerHandSum < 21 || dealerHandSum < 17){
        bool trekk = askPlayerDrawCard();
        if(trekk == true){
            drawPlayerCard();
            cout << playerHand[i].toString() << endl;;
            i += 1;
            drawDealerCard();
        }
        else{
            drawDealerCard();
        }

    }

    if(playerHandSum == 21 && dealerHandSum != 21){
        winner = true;
    }

    if(playerHandSum > dealerHandSum && playerHandSum < 21){
        winner = true;
    }

    if(playerHandSum < 21 && dealerHandSum > 21){
        winner = true;
    }
    
    else{
        winner = false;
    }

    if(winner == true){
        cout << "Gratulerer, du vant!" << endl;
    }
    else{
        cout << "Du tapte.." << endl;
    }
    
}
   

