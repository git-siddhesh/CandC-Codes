//
#include<iostream>
using namespace std; 

struct person
{
	int age;
	char name[10];
}      
/*
class test
{
	private : int x,y;
	public :
	
		
};*/
void display(struct person p)
{
	cout<<p.name<<p.age;
}
int main()
{ 
	struct person per;
	cout<<"Enter the name and age\n";
	cin>>per.name>>per.age;
	display(per);
 return(0);
}

