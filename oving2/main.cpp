

#include "std_lib_facilities.h"
#include <cmath>
#include "oving.h"



int main(){

	
	pythagoras();

	
	vector<int> saldoer;

	for(int i=0; i < 10; i++){
		saldoer.push_back(i);
	}

	
	printBlance(saldoer);

	
	
	multiplication_table();

	for(int i = 0; i < 16; ++i){
		cout << isOdd(i) << endl;
	}
	
	/*Oppgave 3a*/

	printRealRoots(1,-4,-3);

	calculateBalance(10000, 5, 5);

	while(true){
		int valg = -1;

		cout << "Velg funksjon: \n 0) Avlslutt \n 1) Summer to tall \n 2) Summere flere tall \n 3) Konvertere NOK til EURO \n Angi valg (0-3): \n 4) Løse andregradslikning \n";
		
		cin >> valg;

		if(valg == 0){
			break;
		}

		else if(valg == 1){
			inputIntegersAndPrintSum();
		}

		else if(valg == 2){
			SumAvHeltall(); 
		}

		else if(valg == 3){
			cout << fixed << setprecision(2) << NOKtoEuro();
		}
		else if(valg == 4){
			solveQuadrativEquation();
		}
	}


	cout << fixed << setprecision(2) << NOKtoEuro();

	sum_av_heltall();

	inputAndPrintInteger();

	int number = inputInteger();
	cout << "Du skrev: " << number; 

	cout << "Oppgave c) \n";
	inputIntegersAndPrintSum();

	cout << "Oppgave e) \n";
	cout << isOdd(5);

	printHumanReadableTime(4554);

	cout << fixed << setprecision(2) << NOKtoEuro();

	


	keep_window_open();
}