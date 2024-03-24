#include <iostream>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int n);
extern PersonList createPersonList(int n);

int main(){


int n=2;
Person ptr[n];

ptr = createPersonList(n);

	for(int i=0; i<n; i++)
	{
		cout<<(ptr+i)->people<<" "<<(ptr)->numPeople<<endl;
	}


delete ptr;
return 0;

}
