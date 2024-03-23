#include <iostream>
using namespace std;


#ifndef Person_h
#define Person_h


struct Person {
    string name;
    int age;
};


struct PersonList {
    Person* people;
    int numPeople;
};


#endif