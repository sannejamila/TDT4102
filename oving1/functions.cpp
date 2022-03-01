#include "std_lib_facilities.h"

/*Oppgave 2 */

double maxoftwo(double a, double b){
	if(a > b){
		cout << "A is greater than B\n";
		return a;
	}
	else{
		cout << "B is greater than or equal to A\n";
		return b;
	}
}

int fibonacci(int n){
	int a = 0;
	int b = 1;
	cout << "Fibonacci numbers: \n";
	for(int x = 1; x < n + 1; x++){
		cout << x << ' ' << b << '\n';
		int temp = b;
		b += a;
		a = temp;
	}
	cout << "----";
	return b;
}	


int squareNumberSum(int n){
	int totalsum = 0;
	for(int i=0; i < n + 1; i++) {
		totalsum += i*i;
		cout << i*i << "\n";
	}
    cout << totalsum << '\n';
	return totalsum;
}

void trianglenumbersbelow(int n){
	int acc = 1;
	int num = 2;
	cout << "Triangle numbers below " << n << ": ";
	while (acc < n) {
		cout << acc;
		cout << "\n";
		acc += num;
		num += 1;
	}
	cout << "\n";
}


bool isPrime(int n){
	for(int j=2; j < n; j++){
		if(n%j == 0){
			return false;
		}
	}
	return true;
}


void naivePrimeNumberSearch(int n){
	for(int number =2; number < n; number++){
		if(isPrime(number)){
			cout << number << " is a prime \n";
		}
	}
}

/* void funksjoner skal ikke ha noe returverdi, derfor kan man ikke 
    skrive noe returverdi, men en void funksjon kan skrive ut ting.

 */


int findGreatestDivisor(int n){
	for(int divisor = n-1; divisor > 0; divisor--){
		if(n%divisor ==0){
			return divisor;
		}
	}
}