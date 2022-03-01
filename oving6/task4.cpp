#include "task4.h"
#include "std_lib_facilities.h"

istream& operator>>(istream& is, Temps& t){
    vector<double> temperatures;
    double d;
        while(is >> d){
            temperatures.push_back(d);
        }
    t.max = temperatures[0];
    t.min = temperatures[1];
    cout << "Max er: " << t.max << "Min er: "<< t.min << endl;
}

vector<double> readTemps(string filename){
    ifstream ist{filename};
    vector<double> temperatures;
    if(!ist){
        error("Could not find or open the file ", filename);
    }
    else{
        double d;
        while(ist >> d){
            temperatures.push_back(d);
        }
    }
    ist.close();
    return temperatures;
}


void tempStats(vector<double> Temps){
    double max = 0;
    double min = 100;

    for(double i : Temps){
        if(i > max){
            max = i;
        }
        else if(i < min){
            min = i;
        }
    }

    for(int j = 0; j < Temps.size(); j++){
        if(Temps[j] == max){
            cout << "Max temperatur: " << max << "På dag: " << j/2 << endl;
        }
        if(Temps[j] == min){
            cout << "Min temperatur: " << min << "På dag: " << (j-1)/2 << endl;
        }
    }    
}