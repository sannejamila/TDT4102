#pragma once
#include "std_lib_facilities.h"

class Temps;

class Temps{
    public:
        double max;
        double min;
    
        friend istream& operator>>(istream& is, Temps& t);
};

vector<double> readTemps(string filename);

void tempStats(vector<double> Temps);