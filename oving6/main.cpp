#include "std_lib_facilities.h"
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"

const map<string, string> capitalsMap{
	{"Norway", "Oslo"},
	{"Sweden", "Stockholm"},
	{"Denmark", "Copenhagen"}
};

string getCapital(const string& country){
	return capitalsMap.at(country);  /* Ettersom at vi har et const map, må vi bruke .at()
										i stedet for [] for å finne value til tilhørende key */
}



int main()
{
	print_number_of_chars("grunnlov.txt");

	cout << "Capitals: " << endl;
	for (auto& el : capitalsMap){
		cout << getCapital(el.first) << endl;
	}
	test();
	CourseCatalog CourseCatalog;

	CourseCatalog.addCourse("TDT4110","informasjonsteknolgi grunnkurs");
	CourseCatalog.addCourse("TMA4100", "Matematikk 1");

	CourseCatalog.create_catalog();

	vector<double> temps = readTemps("temperatures.txt");
	tempStats(temps); 


	Temps t;
	ifstream tem{"temperatures.txt"};
	tem >> t;
	
}

