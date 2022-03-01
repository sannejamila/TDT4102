#include "test.h"
#include "utilities.h"
#include "std_lib_facilities.h"


void testCallByValue(){
    int v0 = 0;
    int increment = 2;
    int iterations = 10;
    int result = incrementByValueNumTimes(v0, increment, iterations);

    cout << "v0: " << v0
         << " increment: " << increment
         << " iterations: " << iterations
         << " result: " << result << endl;
}

void testCallByReference(){
    int v0 = 0;
    int increment = 2;
    int iterations = 10;
    int result = incrementByValueNumTimesRef(v0, increment, iterations);

    cout << "v0: " << v0
         << " increment: " << increment
         << " iterations: " << iterations
         << " result: " << result << endl;

}

void testString(){
    string grades;
    double sum = 0;
    grades = randomizeString(8,'f','a');
    double length = grades.length();
    cout << grades << endl;
    vector <int> gradeCount;
    for(int i = 0; i < length; i++ ){
        gradeCount.push_back(countChar(grades, 'a'+ i));
    }
    for(int i = 0; i < length; i++ ){
       sum += gradeCount.at(i)*(5-i);
    }
    double average = sum/length;

    cout << "Gjennomsnittskarakter: " << average << endl;
    
}