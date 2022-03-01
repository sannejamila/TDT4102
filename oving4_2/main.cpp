#include "std_lib_facilities.h"
#include "utilities.h"
#include "test.h"
#include "mastermind.h"


int main()
{
	
	playMasterMind();
	
	cout << checkCharactersAndPosition("axcd","abcd") << endl;

	cout << checkCharacters("sanne", "ennas")<< endl;

	srand(time(0));

	testString();


	cout << countChar("hei jeg heter sanne", 'e') << endl;
	
	cout << readInputToString(5,'v','a') << endl;
	
	Student sanne;
	
	sanne.name = "Sanne Jamila Olsen";
	sanne.studyProgram = "Fysikk og matematikk";
	sanne.age = 20;

	printStudent(sanne);
	cout << isInProgram(sanne, "Fysikk og matematikk") << endl;

	cout << randomizeString(10,'s','a') << endl;

	

}

