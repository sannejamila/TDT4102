
#include "std_lib_facilities.h"
#include <cmath>
#include "oving.h"
#include <iostream>
#include <iomanip>
#include "Graph.h"
#include "AnimationWindow.h"

/* Oppgave 1*/


/* a)*/

void inputAndPrintInteger(){
	int n = 0;

	cout << "Skriv inn et heltall: ";
	cin >> n;

	cout << "Du skrev: " << n;
}

/* b)*/

int inputInteger(){
	int x = 0;

	cout << "Skriv inn et heltall";
	cin >> x;

	return x;
}

/* c)*/

void inputIntegersAndPrintSum(){
	
	int a = inputInteger();
	int b = inputInteger();

	int summen = a + b;

	cout << "Summen av tallene blir: " << summen;

}

/* d) 

	Jeg valgte å bruke inputInteger ettersom at den 
	funksjonen returnerer verdien, mens den andre kun printer verdien 
	uten å returnere og huske den. Dersom jeg hadde brukt den andre 
    hadde ikke variablene mine fått noe verdi ettersom at det som 
    ble skrevet inn ikke er lagret.

*/


/* e)*/

bool isOdd(int n){
	if(n % 2 == 0){
		return false;
	}
	else{
		return true;
	}
}



/* f)*/

void printHumanReadableTime(int sek){

	double timer = sek/3600;
	double minutter = (sek - int(timer)*3600)/60;
	int sekunder = sek - timer*3600 - minutter*60;


	cout << int(timer) << "timer, " << int(minutter) << "minutter, " << sekunder << "sekunder";
}

/* Oppgave 2 */

/*a)*/

void SumAvHeltall(){
	int antall = 0;

	cout << "Hvor mange heltall ønsker du å summere? \n";
	cin >> antall;

	int sumHeltall = 0;

	for(int x = 0; x < antall; x++){
		int heltall = 0;
		cout << "Skriv inn heltall: \n";
		cin >> heltall;
		sumHeltall += heltall;
	}

	cout << "Summen av heltallene: " << sumHeltall;
}


/*b)*/

void sum_av_heltall(){
	int sum_heltall = 0;

	while(true){
		int tall = 1;
		cout << "Skriv inn et heltall: ";
		cin >> tall;
		sum_heltall += tall;
		if(tall == 0){
			break;
		}
	
	}
	cout << "Summen er: " << sum_heltall;
}

/*c)
	I oppgave a brukte jeg en for-løkke ettersom at jeg
	hadde et intervall hvor jeg skulle hente n antall heltall,
	i oppgave b brukte jeg en while-løkke ettersom at en for-løkke 
	ikke vil være egnet for oppgaven ettersom at verdien 0 er spesiell.
	Slik at løkka summerer helt fram til bruker skriver inn 0, som er
	enkelt og effektivt å implementere i en while-løkke.
*/

/*d)*/

double inputDouble(){
	double x = 0;

	cout << "Skriv inn et desimaltall: ";
	cin >> x;

	return x;
}


/*e)*/

double NOKtoEuro(){
	double nok = inputDouble();
	if(nok < 0){
		return NOKtoEuro();
	}
	else{
		double euro = nok / 9.75;
		return euro;
	}
}

/*f)

Jeg valgte inputDouble fremfor inputInteger ettersom at integer 
er en datatype uten desimal, kun heltall. Derimot er double
alle flyttall. Jeg valgte returtype double ettersom at variabelen som
returneres har datatype double.


*/

/*Oppgave 3b*/

void multiplication_table(){

    int width = 0;
    int length = 0;

    cout << "Angi bredde: " << endl;
    cin >> width;
    cout << "Angi lengde: " << endl;
    cin >> length; 

    for (int x = 1; x<=length; ++x)
    {
        for (int y =1; y<=width; ++y) cout << setw(5) << y*x;
        cout << endl;
    }
    
}

/*Oppgave 4*/

/*a)*/

double discriminant(double a, double b, double c){
	double product = b*b - 4*a*c;
	return product;
}

/*b) */

void printRealRoots(double a, double b, double c){
	double product = discriminant(a,b,c);
	if(product < 0){
		cout << "Andregradslikningen har ingen reelle løsninger";
	}
	else if(product == 0){
		cout << "Andregradslikningen har løsningen: x = "<< -b/(2*a);
	}
	else{
		cout << "Andregradslikningen har to løsninger: x = " << (-b+sqrt(product))/(2*a) << " og x = " << (-b-sqrt(product))/(2*a);
	}
}


/*c)*/

void solveQuadrativEquation(){
	double a = 0;
	double b = 0;
	double c = 0;

	cout << "Skriv inn tre desimaltall: \n";
	cin >> a;
	cin >> b;
	cin >> c;

	printRealRoots(a,b,c);
}


/*Oppgave 5*/



void pythagoras(){
    using namespace Graph_lib;
    using namespace TDT4102;
    
    AnimationWindow win{100,100, 600,600,"Pythagoras"};

    Point point1{200,200};
    Point point2{300,200};
    Point point3{300,300};

    win.draw_triangle(point1, point2, point3, Color::red);

    win.draw_quad(Point{300, 200}, Point{300, 300}, Point{400, 300}, Point{400, 200}, Color::yellow);

	win.draw_quad(Point{200, 200}, Point{300,200}, Point{300,100}, Point{200,100}, Color::green);

	

    win.wait_for_close();
}

/*Oppgave 6*/

/* a) */

void calculateBalance(double now_saldo, double rente, int years){
	vector<int> t(years);
	for(int i = 0; i < years; i++){
		t[i] = now_saldo * pow((1 + rente/100), i);
		cout << t[i] << "\n";
	}
}

/* b) */


void printBlance(vector<int> saldoer){
    for(int i = 0; i < saldoer.size(); i++){
        cout << i << setw(5) << saldoer[i] << endl;
    }
}



/* c) */

/* Setningen no operator << matcges these operands indikerer at det 
    kanskje kan ha oppstått et problem ved å prøve å printe ut en vektor,
    eventuelt at det ikke går ann.   */

/* d) */

/* 
    Samme som ovenfor, du kan ikke console out v[i]
*/
