#pragma once
#include <iostream>
#include <ostream>
#include "car.h"

using namespace std;

class Person{
    private:
        string name;
        string email;
        unique_ptr <Car> car;  //Bruker peker for å kunne ha nullptr, slik at personer uten bil kan defineres
    public:
        Person(string name, string email, Car car);
        Person(string name, string email);
        string getemail();
        string getname();
        void setemail(string email);
        bool hasAvailableSeats();
        friend ostream& operator<<(ostream &os,const Person &Person);
        
};