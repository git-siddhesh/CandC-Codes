//A pure virtual function
#include<iostream>
using namespace std;
class Person
{
	public : void fun()=0;
				
}
class Student : public Person
{
	public : void fun()
					{ cout<<"fine";
					}
	
}
int main()
{
	//Person obj;
	Student obj2;
}
