#include "fibonacci.h"
#include <iostream>
using namespace std;

int fibonacci(int n){
    if(n < 1 || n == 1){
        return n;
    }
    
    int f = fibonacci(n-1) + fibonacci(n-2);

    return f;
}


void fillInFibonacciNumbers(int* result, int length){
    for(int n = 0; n < length; n++){
        int f = fibonacci(n);
        result[n] = f;
    }
}

void printArray(int* arr, int length){
    for(int n = 0; n < length; n++){
        cout << arr[n] << endl;
    }
}


void createFibonacci(){
    int length = 0;
    cout << "Skriv inn en lengde: ";
    cin >> length;

    int *array;
    array=new int[length];


	fillInFibonacciNumbers(array, length);
	printArray(array,length);
     
    delete [] array;

}