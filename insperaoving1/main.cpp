#include "std_lib_facilities.h"

enum class Byer {K, B, T = 42, C};


int main()
{
	int a = static_cast<int>(Byer::K);
	cout << a << endl;
	int b = static_cast<int>(Byer::B);
	cout << b<< endl;
	int c = a +b;
	cout << c << endl;
	c += static_cast<int>(Byer::T);
	cout << c << endl;
	int d = c + static_cast<int>(Byer::C);

	cout << d;
}

