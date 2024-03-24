#include <iostream>
using namespace std;


#ifndef Person_h
#define Person_h


struct Person {
    string name = "John doe";
    int age =0;
};


struct PersonList {
    Person* people;
    int numPeople;
};


#endif




Person* createPersonArray(int n)
{
	Person* res = new Person[n];    // how to put data on the heap to use later if left on the stack it'll get deleted

return res;
}