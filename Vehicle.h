#include<iostream>
#include <time.h>

#ifndef Vehicle_h
#define Vehicle_h

class Vehicle{
private:
    int ID;
protected:
    std::time_t timeOfEntry;
private:
    Vehicle(int id);
    int getID();
//int getParkingDuration()=0; //maybe?
};

class Car:public Vehicle{
public:
    int getParkingDuration();
};

class Bus:public Vehicle{
public:
    int getParkingDuration();
};

class Motorcycle:public Vehicle{
public:
    int getParkingDuration();
};


#endif