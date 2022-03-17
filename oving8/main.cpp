#include "fibonacci.h"
#include "matrix.h"
#include "intermezzo.h"

int main()
{
	using namespace std;
	//dummyTest();

	Matrix matrix_of_zeros = Matrix(5,5);
	Matrix identity_matrix = Matrix(5);
	matrix_of_zeros.set(1,1,1);

	Matrix A = Matrix(2,2);
	A.set(0,0,1.0);
	A.set(0,1,2.0);
	A.set(1,0,3.0);
	A.set(1,1,4.0);

	Matrix B = Matrix(2,2);
	B.set(0,0,4.0);
	B.set(0,1,3.0);
	B.set(1,0,2.0);
	B.set(1,1,1.0);

	
	Matrix C = Matrix(2,2);
	C.set(0,0,1.0);
	C.set(0,1,3.0);
	C.set(1,0,1.5);
	C.set(1,1,2.0);

	cout << A << endl;
	cout << B << endl;
	cout << C << endl;


	A = B + C;

	cout << A << endl; 
	
	cout << B << endl; 
	cout << C << endl;
	

	
}

