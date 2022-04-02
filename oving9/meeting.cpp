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