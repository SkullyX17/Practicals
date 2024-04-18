#include <iostream>
#include <time.h>
#include "Vehicle.h"


Vehicle::Vehicle(int id)
// constructor that takes ID of Vehicle and sets time of entry
{
    ID = id;
    timeOfEntry = time(NULL);
}


int Vehicle::getID()
// returns the Vehicles ID
{
    return ID;
}

int Car::getParkingDuration()
// Applys a 10% time reduction for any car
{
    int seconds = difftime(timeOfEntry,time(NULL));
    seconds=seconds-(seconds*.10);
}

int Bus::getParkingDuration()
// Applys a 25% time reduction for any Bus
{
    int seconds = difftime(timeOfEntry,time(NULL));
    seconds=seconds-(seconds*.25);
}

int Motorcycle::getParkingDuration()
// Applys a 15% time reduction for any Motorcycle
{
    int seconds = difftime(timeOfEntry,time(NULL));
    seconds=seconds-(seconds*.15);
}

