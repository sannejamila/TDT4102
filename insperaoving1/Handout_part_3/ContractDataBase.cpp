#include "ContractDataBase.h"

InsuranceContract ContractDataBase::getContract(int id)
{
    // BEGIN: 1b

    // Write your answer to assignment 1b here, between the // BEGIN: 1b
    // and // END: 1b comments. Remove the code that is already there.

    for(InsuranceContract c : contracts){
        if(c.getId() == id){
            return c;
        }

    }


    // END: 1b
}

int ContractDataBase::numberOfInsuranceType(InsuranceType type)
{
    // BEGIN: 1c

    // Write your answer to assignment 1c here, between the // BEGIN: 1c
    // and // END: 1c comments. Remove the code that is already there.
    int instances = 0;

    for(InsuranceContract c : contracts){
        if(c.getInsuranceType() == type){
            instances += 1;
        }
    }
    return instances;
    // END: 1c
}

int ContractDataBase::addContract(string holderName, InsuranceType insType, int value)
{
    // BEGIN: 1d 

    // Write your answer to assignment 1d here, between the // BEGIN: 1d
    // and // END: 1d comments. Remove the code that is already there.
    int id;

    if(contracts.size() == 0){
        id = 1;
    }
    else{
        InsuranceContract last_c = contracts[-1];
        int last_id = last_c.getId();

        id = last_id + 1;

        InsuranceContract c {holderName, insType, value, id, "text missing"};
        contracts.emplace_back(c);
    }
   
    return id;

    // END: 1d
}

void ContractDataBase::saveContracts(string filename)
{
    // BEGIN: 1e

    // Write your answer to assignment 1e here, between the // BEGIN: 1e
    // and // END: 1e comments. Remove the code that is already there.

    ofstream file (filename);

    for(InsuranceContract c : contracts){
        InsuranceType t = c.getInsuranceType();
        file << c.getHolder() << ", " << insuranceTypeToString(t) << ", " << c.getValue() << ", " << c.getId() << ", " << c.getInsuranceText() << endl;
    }


    // END: 1e
}

void ContractDataBase::loadContracts(string filename)
{
    ifstream inFile{filename};
    if (!inFile)
    {
        error("Couldn't open file: ", filename);
    }

    string line;
    while (getline(inFile, line))
    {
        stringstream ss{line};
        char seperator;

        string holderName;
        getline(ss, holderName, ',');

        string insType;
        getline(ss, insType, ',');

        int value;
        ss >> value;
        ss >> seperator;

        int id;
        ss >> id;
        ss >> seperator;

        string insuranceText;
        getline(ss, insuranceText, ',');

        contracts.push_back({holderName, stringToInsuranceType.at(insType), value, id, insuranceText});
    }
}
