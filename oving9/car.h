#pragma once

class Car{
    private:
        int freeSeats;
    public:
        bool hasFreeSeats() const;
        void reserveFreeSeat();
};