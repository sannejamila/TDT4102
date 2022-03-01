#pragma once
#include "std_lib_facilities.h"

class CourseCatalog{
    private:
        map<string, string> emne;
        map<string,string>::iterator it;
    public:
        void addCourse(string kode, string navn);
        void removeCourse(string navn);
        string getCourse(string kode);
        friend ostream& operator<<(ostream& os, const CourseCatalog& c);
        void create_catalog();
        
};

void test();