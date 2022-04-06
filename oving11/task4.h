#pragma once

template<typename T>
T maximum(T a,T b){
    if (a > b){
        return a;
    }
    else{
        return b;
    }
}

//For å bruke denne for egendefinerte klasser må du overlaste > operatoren først.

int random_int(int max, int min){
    return rand()%(max-min + 1) + min;
}


template<typename T>
void shuffle(vector<T> &vec){
    for(int i = 0; i <  vec.size(); i++){
        T t = vec[i];
        int b = random_int(vec.size(),0);
        vec[i] = vec[b];
        vec[b] = t;
    }
}