#include <iostream>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int n);

int main(){
Person *ptr;
int n=10;
ptr = createPersonArray(n);

	for(int i=0; i<n; i++)
	{
		cout<<(ptr+i)->name<<" "<<(ptr+i)->age<<endl;
	}

delete ptr;
return 0;

}
