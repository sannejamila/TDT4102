#include "test.h"
#include "utilities.h"
#include "std_lib_facilities.h"
#include "mastermind.h"

int checkCharactersAndPosition(string guess, string code){

    assert(code.length()==guess.length());
    int n = 0;
    for(int i = 0; i < static_cast<int>(guess.length()) ; ++i){
        if(guess.at(i) == code.at(i)){
            n += 1;
        }
    }
    return n;
}


int checkCharacters(string guess, string code){
    int n = 0;
    for(int i = 0; i < static_cast<int>(code.length()); i++){
       if(countChar(code, guess.at(i)) > 0){
           n += 1;
       }
    }
    return n;
}




void playMasterMind(){
    constexpr int size = 4;
    constexpr int letters  = 6;

    string code;
    string guess;


    code = randomizeString(size, 'a' + (letters -1), 'a');
   

    int k = 0;
    int n = 4;

    do{
        guess = readInputToString(size,'a' + (letters -1), 'a');
        cout << "Du gjettet: " << checkCharacters(code, guess) << " bokstaver riktig" << endl;
        cout << "Du gjettet: " << checkCharactersAndPosition(code, guess) << " bokstaver på riktig plass" << endl;
        k += 1;
        if(checkCharactersAndPosition(code, guess) == size){
            cout << "Gratulerer, du vant!" << endl;
            break;
        }
    } 
    while(checkCharactersAndPosition(code, guess) < size && k < n);

    if(checkCharactersAndPosition(code, guess) != size){
        cout << "Du tapte.. " << endl;
    }

   



}