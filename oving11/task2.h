#pragma once
#include <iostream>
#include <list>

using namespace std;

class Person{
    private:
        std::string fornavn;
        std::string etternavn;
    public:
        Person(string fornavn, string etternavn);
        string get_fornavn();
        string get_etternavn();
        friend ostream& operator<<(ostream &os, Person &p);
};


void insertOrdered(std::list<Person> &l, Person& p);