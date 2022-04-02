#pragma once

class Car{
    private:
        int freeSeats;
    public:
        Car(int seats);
        bool hasFreeSeats() const;
        void reserveFreeSeat();
};