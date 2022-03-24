#include "car.h"
#include <iostream>

using namespace std;

bool Car::hasFreeSeats() const{
    if(freeSeats > 0){
        return true;
    }
    else{
        return false;
    }
}

void Car::reserveFreeSeat(){
    freeSeats--;
}