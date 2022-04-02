#include <vector>
#include <iostream>
#include "task1.h"
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


}

