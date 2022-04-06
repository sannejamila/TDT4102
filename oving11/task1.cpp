#include "task1.h"
#include <iostream>
#include <set>
using namespace std;

void replace(vector<string> &vec, string old, string replacement){
    vector<string>::iterator it;
    for(it = vec.begin(); it < vec.end(); it++){
        if(*it == old){
            vec.erase(it);
            vec.insert(it, replacement);
        }
    }
}

void replace_set(set<string> &vec, string old, string replacement){
    set<string>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++){
        if(*it == old){
            it = vec.erase(it);
            it = vec.insert(it, replacement);
        }
    }
}