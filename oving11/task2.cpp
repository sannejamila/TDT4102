#include "task2.h"
#include <iostream>

using namespace std;

Person::Person(string fornavn, string etternavn) : fornavn{fornavn}, etternavn{etternavn} {}

string Person::get_fornavn(){
    return fornavn;
}

string Person::get_etternavn(){
    return etternavn;
}

ostream &operator<<(ostream &os, Person &p){
    os << "Fornavn: " << p.get_fornavn() << " Etternavn: " << p.get_etternavn() << endl;
    return os;
}

void insertOrdered(std::list<Person> &l, Person& p){
    list<Person>::iterator it;
    if(l.size() == 0){
        l.emplace_back(p);

    }
    else{
        for(it = l.begin(); it != l.end(); it++){
            if(p.get_etternavn() < it->get_etternavn()){
                l.emplace(it,p);
            }
            else{
                l.emplace_back(p);
            }
            break;
        }
    }
}