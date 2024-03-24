#include <iostream>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int n);
extern PersonList createPersonList(int n);

int main(){


int n=2;
PersonList ptr;
Person *temp;

ptr = createPersonList(n);
temp=ptr.people;
	for(int i=0; i<n; i++)
	{
		cout<<temp[i].name<<endl;
	}
 cout<<(ptr).numPeople<<endl;

//delete ptr;
return 0;

}
