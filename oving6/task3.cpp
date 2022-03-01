#include "task3.h"
#include "std_lib_facilities.h"


void CourseCatalog::addCourse(string kode, string navn){
    emne.insert({kode, navn});
    /* Her bruker vi insert() for å få unike par, slik at hver nøkkel kun har en verdi.
        ved å bruke insert() så skjer ingenting dersom nøkkelen allerede har en verdi,
        derimot vil [] overskrive tidligere verdi. */
}

void CourseCatalog::removeCourse(string navn){
    it = emne.find(navn);
    emne.erase(it);
}

string CourseCatalog::getCourse(string kode){
    string course = kode + " " + emne.at(kode);
    return course;
}

ostream& operator<<(ostream& os, const CourseCatalog& c){
    for(const auto& el : c.emne){
        os << "Emnekode: " << el.first << "Emnenavn: " << el.second;
    } 
}

void CourseCatalog::create_catalog(){
    

    ofstream file ("coursecatalog.txt");

    for(auto const& course : CourseCatalog::emne){
        file <<  course.first << " " << course.second<< endl;
    }

    file.close();

}

void test(){
    CourseCatalog CourseCatalog;

	CourseCatalog.addCourse("TDT4110","informasjonsteknolgi grunnkurs");
	CourseCatalog.addCourse("TMA4100", "Matematikk 1");

    CourseCatalog.addCourse("TDT4110","C++");

	cout << "Første emne i katalog er: " << CourseCatalog.getCourse("TDT4110") << endl;
	cout << "Andre emne i katalog er: " << CourseCatalog.getCourse("TMA4100") <<endl;
    

}