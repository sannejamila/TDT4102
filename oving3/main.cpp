#include "std_lib_facilities.h"
#include "cannonball.h"
#include "utilities.h"


void testDeviation(double compareOperand, double toOperand, double maxError, string name);

void testDeviation(double compareOperand, double toOperand, double maxError, string name){
	double diff = toOperand - compareOperand;
	if(diff < maxError){
		cout << name << " er tilnærmet lik " << toOperand << " med en differanse på " << diff << endl;
	}
	else{
		cout << name << " er ikke tilnærmet lik " << toOperand << endl;
	}


}



/* Vi har kun en returverdi for ett tilfelle, men vi må også ha for motsatt tilfelle
	Non void function returns no value. 
	
	bool checkIfDistanceToTargetIsCorrect();


bool checkIfDistanceToTargetIsCorrect(){
	double error = targetPractice(0,0,0);
	if(error == 0) return true;
}
	
	*/




int main()
{
	srand(time(0));

	playTargetPractice();


	int i = 0;

	while(i < 10){
		cout << randomWithLimits(10,1) << endl;
		i += 1;
	}


	cout << accly() << endl;

	cout << velY(25,5) << endl;

	cout << posX(0.0,50.0,5.0) << endl;

	cout << posY(0,25,5) << endl;

	printTime(4531);

	cout << flightTime(25) << endl;

	double maxError = 0.000000000000001;

	testDeviation(posX(0.0,50.0,5.0),250.0, maxError, "posX(0.0,50.0,5.0)");

	cout << degToRad(180.0) << endl;

	cout << targetPractice(300, 50, 25) << endl;

	keep_window_open();
	
}

