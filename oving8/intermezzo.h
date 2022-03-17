#pragma once

class Dummy {
    public:
        int *num;
        Dummy() {
        num = new int{0};
        }
        ~Dummy() {
            delete num;
        }
        int get() const { return *num; }
        Dummy &operator=(Dummy d);
        Dummy(const Dummy &other);

};

void dummyTest();