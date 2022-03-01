#include "cannonball.h"
#include "std_lib_facilities.h"
#include <cmath>
#include <vector>
#include "utilities.h"


double accly(){
    return -9.81;
}

double velY(double initVelocityY, double Time){
    return initVelocityY + accly()*Time;
}

double posX(double initPositionX, double initVelocity, double Time){
    return initPositionX + initVelocity*Time;
}

double posY(double initPositionY, double initVelocity, double Time){
    return initPositionY + (initVelocity*Time) + (accly()*pow(Time,2.0))/2.0;
}

void printTime(double Time){
    int timer = Time/3600;
    int minutter = (Time - timer*3600)/60;
    double sekunder = Time - timer*3600 - minutter*60;
    cout << "Timer: " << setw(7) << timer << endl;
    cout << "Minutter: "<< setw(7) << minutter  << endl;
    cout << "Sekunder: " << setw(7) << sekunder << endl;
}

double flightTime(double initVelocityY){
    return (-2.0*initVelocityY)/accly();
}


double getUserInputTheta(){
    double vinkel = 0;
    cout << "Skriv inn en vinkel: " << endl;
    cin >> vinkel;
    return vinkel;
}

double getUserInputAbsVelocity(){
    double AbsVelocity = 0;
    cout << "Skriv inn en absoluttfart: " << endl;
    cin >> AbsVelocity;
    return AbsVelocity;
}

double degToRad(double deg){
    double pi = 2*acos(0.0);
    double Rad = (pi/180.0)*deg;
    return Rad; 
}

double getVelocityX(double theta, double absVelocity){
    double VelocityX = absVelocity*cos(theta);
    return VelocityX;
}

double getVelocityY(double theta, double absVelocity){
    double VelocityY = absVelocity*sin(theta);
    return VelocityY;
}

vector<double> getVelocityVector(double theta, double absVelocity){
    vector<double> velocity;
    double VelocityX = getVelocityX(theta, absVelocity);
    double VelocityY = getVelocityY(theta, absVelocity);
    velocity.push_back(VelocityX);
    velocity.push_back(VelocityY);
    return velocity;
}

double getDistanceTraveled(double velocityX, double velocityY){
    double time = flightTime(velocityY);
    double distance = posX(0.0,velocityX, time);
    return distance;
}


double targetPractice(double distanceToTarget, double velocityX, double velocityY){
    double distance = getDistanceTraveled(velocityX, velocityY);
    return distanceToTarget - distance;
}

void playTargetPractice(){

    int min = 100;
    int max = 1000;

    double distance_to_target = randomWithLimits(max, min);

    int k = 0;

    while(k < 10){

        double angle = degToRad(getUserInputTheta());
       
        double velocity = getUserInputAbsVelocity();

        double velx = getVelocityX(angle, velocity);
        double vely = getVelocityY(angle, velocity);



        double distance_from_target = targetPractice(distance_to_target, velx,vely);

        double time = flightTime(vely);

        cout << "avstanden til målet var: " << distance_from_target << endl;
        cout << "flytiden ble: " << time << endl;

        if(abs(distance_from_target) <= 5){
            cout << "Gratulerer, du traff på " << k << " forsøk" << endl;
        }

        else{
        
        
            if(distance_from_target < -5){
                cout << "Skuddet var for langt" << endl;
            }

            else if(distance_from_target < distance_to_target){
                cout << "Skuddet var for kort" << endl;
            }

        }
        k +=1;
    }
}