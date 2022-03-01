#pragma once
#include <vector>
#include "std_lib_facilities.h"


double accly();

double velY(double initVelocityY, double time);

double posX(double initPosition, double initVelocity, double Time);

double posY(double initPosition, double initVelocity, double Time);

void printTime(double Time);

double flightTime(double initVelocityY);

double getUserInputTheta();

double getUserInputAbsVelocity();

double degToRad(double deg);

double getVelocityX(double theta, double absVelocity);

double getVelocityY(double theta, double absVelocity);

vector<double> getVelocityVector(double theta, double absVelocity);

double getDistanceTraveled(double velocityX, double velocityY);

double targetPractice(double distanceToTarget, double velocityX, double velocityY);

void playTargetPractice();