#pragma once
#include "std_lib_facilities.h"

class Animal;

class Animal{
    public:
        Animal(string name, int age);
        virtual ~Animal() {}
        virtual string toString() = 0;
    protected:
        string name;
        int age; 
    
};

class Cat : public Animal{
    public:
        Cat(string name, int age): Animal(name, age){};
        virtual string toString();
        
};

class Dog : public Animal{
    public:
        Dog(string name, int age): Animal(name, age){};
        virtual string toString();
   

     
};

void testAnimal();