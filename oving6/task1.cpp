#include "std_lib_facilities.h"
#include "task1.h"
#include <fstream>
#include <istream>


void read_to_file(){
    ofstream file ("fil.txt");
    while(true){
        string word;
        cin >> word;
        if(word == "quit"){
            break;
        }
        else{
            file << word << endl;
        }
    }
    file.close();
}

void new_file(string filename){
    ifstream ist{filename};
    if(!ist){
        error("Could not find or open the file ", filename);
    }
    else{
        ofstream file ("new_file.txt");
        string line;
        int line_number = 0;

        while(getline(ist, line)){
            file << line_number << line << endl;
            line_number ++;

        }
    }
    ist.close();
}