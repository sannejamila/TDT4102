#include "meeting.h"


std::ostream& operator<< ( std::ostream& os, const Campus &campus){
    switch(campus) {
    case Campus::Trondheim:
        os << "Trondheim" << endl;
        break;
    case Campus::Ålesund:
        os << "Ålesund" << endl;
        break;
    case Campus::Gjøvik:
        os << "Gjøvik" << endl;
        break;
    }
    return os;
}

int Meeting::getDay(){
    return day;
}

int Meeting::getstartTime(){
    return startTime;
}

int Meeting::getendTime(){
    return endTime;
}

Campus Meeting::getLocation(){
    return location;
}

string Meeting::getSubject(){
    return subject;
}

const shared_ptr<Person> Meeting::getLeader(){
    return leader;
}

void Meeting::addParticipant(shared_ptr<Person> Person){
    participants.emplace_back(Person);
}

 Meeting::Meeting(int day, int startTime, int endTime, Campus location, string subject, const shared_ptr<Person> leader) :
    day{day}, startTime{startTime}, endTime{endTime}, location{location}, subject{subject}, leader{leader} {
        Meeting::addParticipant(leader); 
        }
 

 //e) Ved å kalle destruktøren.

 vector<string> Meeting::getParticipantList(){
     vector <string> participants_name;
     for(shared_ptr<Person> p : participants){
         string name = p->getname();
         participants_name.push_back(name);
     }
     return participants_name;
 }

 ostream& operator<<(ostream& os, Meeting& m){
    os << "Subject: " << m.getSubject() << " Location: " << m.getLocation() << 
    " Start: " << m.getstartTime() << "end: " << m.getendTime() << " Name: " << m.getLeader() -> getname() << endl;
    return os;
 }

//Mangler siste funksjon