#include<iostream>
//template <class temp>
using namespace std;
void test(int x)
{
	try
	{
		if(x==1) throw(x);
		if(x==0) throw('x');
		if(x==-1) throw(1.0);
	}
	catch(int x) 
	{ cout<<"value is "<<x;}
	catch(char x) 
	{ cout<<"value is "<<'x';}
	catch(float x) 
	{ cout<<"value is "<<1.0;}
	cout<<"Try catch block\n";
}
int main()
{
	int a;
	cout<<"Enter the value\n";
	cin>>a;
	test(a);
}
