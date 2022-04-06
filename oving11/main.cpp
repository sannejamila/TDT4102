#include <vector>
#include <iostream>
#include "task1.h"
#include "task2.h"
#include <set>
using namespace std;

int main()
{
	vector<string> vec;

	vector<string>::iterator it;
	vector<string>::reverse_iterator i;

	vec.emplace_back("abc");
	vec.emplace_back("def");
	vec.emplace_back("ghi");

	//Iterating
	for(it = vec.begin(); it < vec.end(); it++){
		cout << *it << endl;
	}

	//Reverse iterating
	for (i = vec.rbegin(); i != vec.rend(); ++i ) { 
			cout << *i << endl;
	} 

	replace(vec, "abc", "hallo");

	std::set<string> sett;

	sett = {"hei", "katt", "hest"};

	std::set<string>::iterator it2;

	for(it2 = sett.begin(); it2 != sett.end(); it2++){
		cout << *it2 << endl;
	}

	replace_set(sett, "hei", "hallo");

	for(it2 = sett.begin(); it2 != sett.end(); it2++){
		cout << *it2 << endl;
	}


	list<Person> l;

	l = {Person("Sanne", "Olsen"), Person("Eric", "Karlsen")};
	Person p = Person("Ylva", "Schuch");

	insertOrdered(l, p);

	list<Person>::iterator l_it;

	for(l_it = l.begin(); l_it != l.end(); l_it++){
		cout << *l_it;
	}
}

