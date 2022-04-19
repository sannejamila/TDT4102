#include <iostream>
#include "car.h"
#include "Person.h"
#include "meeting.h"
#include "MeetingWindow.h"
using namespace std;

int main()
{
	/*
	int a = 3;
	Car car{a};
	Person p = Person("Sanne", "sannejamila@gmail.com", car);

	cout << p;
	*/

	Campus campus = Campus::Trondheim;

	cout << campus;

	MeetingWindow MeetingWindow(500,200, 800, 600, "GUI");

	gui_main();
}
