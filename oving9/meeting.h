#pragma once
#include <iostream>
#include "Person.h"
#include <vector>

using namespace std;

enum class Campus {Trondheim, Ålesund, Gjøvik};

ostream& operator<< (std::ostream& os, const Campus &campus);

class Meeting{
    private:
        int day;
        int startTime;
        int endTime;
        Campus location;
        string subject;
        const shared_ptr<Person> leader;
        vector<shared_ptr<Person>> participants;
    public:
        Meeting(int day, int startTime, int endTime, Campus location, string subject, const shared_ptr<Person> leader);
        int getDay();
        int getstartTime();
        int getendTime();
        Campus getLocation();
        string getSubject();
        const shared_ptr<Person> getLeader();
        void addParticipant(shared_ptr<Person> Person);
        vector<string> getParticipantList();
};



ostream& operator<<(ostream& os, Meeting& m);
