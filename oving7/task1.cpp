#include "task1.h"


/* 1a) forskjellen på public, private og protected*/


Animal::Animal(string name, int age): name{name}, age{age} {}

string Animal::toString(){
    string age1 = to_string(age);
    string streng = "Animal: " + name + ", " + age1;
    return streng;
}

string Cat::toString(){
    string age1 = to_string(age);
    string streng = "Cat: " + name + ", " + age1; 
    return streng;
}

string Dog::toString(){
    string age1 = to_string(age);
    string streng = "Dog: " + name + ", " + age1;
    return streng;
}


void testAnimal(){
    

    std::vector<std::unique_ptr<Animal>> animals;
    

    animals.emplace_back(new Cat("Pus", 2));
    animals.emplace_back(new Dog("Max", 5));

    

    for(auto&& animal : animals){
        cout << animal->toString() << endl;
    }
    
} 