//wap for virtual destructor
#include<iostream>
using namespace std;
class A
{	protected:
	  int x,y;
	public:
		A()
		{
			x=1;
			cout<<"Value of x "<<x;	
		}	
		virtual ~A(){
			cout<<"Value has been deleted\n";
		}
};
class B:public A
{
	public:
	B()
	{
		y=2;
		cout<<"Value of y is "<<y;
	}
	~B()
	{ 
	  cout<<"Y has been deleted\n";
	}
};
int main()
{
	A *bptr;
	bptr= new B;
	delete bptr;
	return(0);
}
