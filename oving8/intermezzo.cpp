#include "intermezzo.h"
#include <iostream>

using namespace std;

void dummyTest() {
    Dummy a;
    *a.num = 4;
    Dummy b{a};
    Dummy c;
    c = a;
    cout << "a: " << *a.num << '\n';
    cout << "b: " << *b.num << '\n';
    cout << "c: " << *c.num << '\n';

    //Problemet oppstår under her. Vi har ikke definer operatoren "=", og da lager kompliatoren en automatisk operator. Den tar
    // en binær kopi av en peker, dette er fordi a-num er en peker. Det er altså ikke minnet som blir kopiert. 

    *b.num = 3;
    *c.num = 5;
    cout << "a: " << *a.num << '\n';
    cout << "b: " << *b.num << '\n';
    cout << "c: " << *c.num << '\n';
}

Dummy::Dummy(const Dummy &other) : num{nullptr} {
    this->num = new int{};
    *num = other.get();
}

Dummy &Dummy::operator=(Dummy d) {
    //Vi tar inn en d som call-by-value
    std::swap(num, d.num); // Vi swapper pekere
    return *this;

}