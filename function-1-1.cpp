#include <iostream>
#include "Person.h"
using namespace std;

Person* createPersonArray(int n)
{
	Person* res = new Person[n];    // how to put data on the heap to use later if left on the stack it'll get deleted
	for(int i=0; i<n; i++)
	{
		res[i].name = "John Doe";
		res[i].age = 0;
	//cout<<res[i].name<<"--"<<res[i].age<<endl;
	}


return res;
}