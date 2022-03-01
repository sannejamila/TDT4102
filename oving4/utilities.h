#pragma once
#include "std_lib_facilities.h"

int incrementByValueNumTimes(int startValue, int increment, int numTimes);

int incrementByValueNumTimesRef(int& startValue, int increment, int numTimes);

void swapNumbers(int &a, int &b);

struct Student;

struct Student {
    string name;
    string studyProgram;
    int age;
};

void printStudent(Student student);

bool isInProgram(Student student, string studyprogram);

string randomizeString(int signs, char upper, char lower);

string readInputToString(int n, char upper, char lower);

int countChar(string streng, char letter);