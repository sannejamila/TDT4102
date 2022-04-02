#include "Person.h"
#include "car.h"
#include <iostream>

using namespace std;

Person::Person(string name, string email, Car car) : name{name}, email{email}{
    this->car = make_unique<Car>(car);   //Hvorfor?...
}

Person::Person(string name, string email) : name{name}, email{email}, car{nullptr} {}



string Person::getemail(){
    return email;
}

string Person::getname(){
    return name;
}

void Person::setemail(string email){
    this->email = email;
}

bool Person::hasAvailableSeats(){
    return car->hasFreeSeats();
}

ostream& operator<<(ostream &os,const Person &Person){
    cout << "Name: " << Person.name << endl;
    cout << "Email: " << Person.email << endl;
    cout << "Free seats: " << Person.car->hasFreeSeats() << endl;
    return os;
}