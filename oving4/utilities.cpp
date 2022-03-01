#include "utilities.h"
#include "std_lib_facilities.h"
#include <cctype>
#include<cstring>



int incrementByValueNumTimes(int startValue,int increment, int numTimes){
    for (int i = 0; i < numTimes; i++){
        startValue += increment;
    }
    return startValue;
}

int incrementByValueNumTimesRef(int& startValue, int increment, int numTimes){
     for (int i = 0; i < numTimes; i++){
        startValue += increment;
    }
    return startValue;
}


void swapNumbers(int &a,int &b){
    int c = a;
    a = b;
    b = c;

    /* Har valgt å bruke pass-by-reference slik at de er byttet for alltid.  */
}


void printStudent(Student student){
    cout << student.name << endl;
    cout << student.studyProgram << endl;
    cout << student.age << endl;
}

bool isInProgram(Student student, string studyprogram){
    if(student.studyProgram == studyprogram){
        return true;
    }
    else{
        return false;
    }
}


string randomizeString(int signs, char upper, char lower){
    string random_string;
    int k = 0;
    int max = upper;
    int min = lower;
    while(k < signs){
        char random = rand()%(max-min + 1) + min;
        random_string += random;
        k += 1;
    }
    return random_string;
}


string readInputToString(int n, char upper, char lower){
    int k = 0;
    string input_string;
    while(k < n){
        char letter;
        cout << "Skriv inn en bokstav: " << endl;
        cin >> letter;
        int letter_as_int = letter;
        if(tolower(letter_as_int) > upper || tolower(letter_as_int) < lower ){
            cout << "Bokstaven din ligger utenfor intervallet" << endl;
        }
        else{
            input_string += letter;
            k +=1;
        }
    }
    return input_string;
}

int countChar(string streng, char letter){
    int k = 0;
    int length = streng.length();
    for(int i = 0; i < length; i++){
        if(streng[i] == letter){
            k +=1;
        }
    }
    return k;
}