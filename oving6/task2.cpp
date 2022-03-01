#include "task2.h"
#include "std_lib_facilities.h"




void print_number_of_chars(string file){
    ifstream ist{file};
    map<char,int> letters;

    string line;

    if(!ist){
        error("Could not find or open the file ", file);
    }
    else{
        while(getline(ist, line)){
            for(int i = 0; i < line.length(); i++){
                 letters.insert({tolower(line[i]),0});     
            }
            for(int j = 0; j < line.length(); j++){
                letters[tolower(line[j])] +=1; 
            }
        }
        for(const auto& el : letters){
            cout << "Tegn: " << el.first  << "  Antall forekomster: "<<  el.second << endl;
        }
    }
}