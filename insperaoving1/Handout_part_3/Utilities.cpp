#include "Utilities.h"

string toGreek(string sentence)
{
    // BEGIN: 2a

    // Write your answer to assignment 2a here, between the // BEGIN: 2a
    // and // END: 2a comments. Remove the code that is already there.
    string greek;

    for(int i = 0; i < sentence.size(); i++){
        char letter = sentence[i];

        if( letter != 32){
            letter += 1;
        }

        greek += letter;
    }

    return greek;

    
    // END: 2a
}

vector<vector<string>> loadSvada()
{
    // BEGIN: 2b

    // Write your answer to assignment 2b here, between the // BEGIN: 2b
    // and // END: 2b comments. Remove the code that is already there.

    vector<vector<string>> all_groups;

    ifstream ist{"SvadaWords.txt"};
    string line;

    vector<string> s;

    while(getline(ist, line) ){
        s.push_back(line);
    }

    // ikke ferdig her...

    return all_groups;

    // END: 2b
}

string svadaGenerator(vector<vector<string>> svadaVec)
{
    // BEGIN: 2c1

    // Write your answer to assignment 2c1 here, between the // BEGIN: 2c1
    // and // END: 2c1 comments. Remove the code that is already there.
    string random_string;

    for(vector<string> v : svadaVec){
        int max = v.size();
        int random_int = rand() % max;

        string random_word = v[random_int];

        random_string += random_word;
    }
    
    return random_string;
    
    // END: 2c1
}