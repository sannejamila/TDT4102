#include "std_lib_facilities.h"
#include "functions.h"



/* Oppgave 1  -  Oversatt til python fra C++ */

/*def isFibonacciNumber(n):
    a = 0
    b = 1
    while b <n:
        temp = b
        b += a
        a = temp
    return b == n*/


int main()
{
	cout << "Oppgave a) \n";
	cout << maxoftwo(2, 3) << '\n';

	cout << "Oppgave c) \n";
	cout << fibonacci(34) << '\n';

	cout << "Oppgave d) \n";
	cout << squareNumberSum(5) << '\n';

	cout << "Oppgave e) \n";
	trianglenumbersbelow(5);

	cout << "Oppgave f) \n";
	cout << isPrime(19);

	cout << "Oppgave g) \n";
	naivePrimeNumberSearch(20);

	cout << "Oppgave h) \n";
	cout << findGreatestDivisor(25) << '\n';


	keep_window_open();
}

