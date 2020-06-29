//Wap to convert user define to user to user define
#include<iostream>
using namespace std;
class test_2;
class test_1
{
	int a,b;
	public:
		test_1()
		{
		}
		test_1(int x)		//Basic to user define
		{
			a=b=x;
			cout<<"test_1(int x) Value of a and b"<<endl<<a<<endl<<b<<endl;
		}
		operator test_2();	//User difene to user define (test_1 to test_2)
		test_1(test_2 obj);	//User define(test_2) to user define(test_1)
};
class test_2
{
	public:
		int c;
		test_2()
		{
		}
		void display()
		{
			cout<<"The value of c "<<c;
		}
};
	test_1::test_1(test_2 obj)	//User define(test_2) to user define(test_1)
		{
			a=3*obj.c;
			b=4*obj.c;
			cout<<"  test_1(test_2 obj) "<<endl<<"Value of a "<<a<<endl<<"value of b"<<b<<endl;
		}
	test_1::operator test_2()	//User difene to user define (test_1 to test_2)
		{
			test_2 obj;
			obj.c=a*b;
			return (obj);
		}
int main()  
{
	test_1 t1(5);	//Basic to user define
	test_2 t2;		//call the default constructor
	t2=t1;			//operator conversion
	test_1 obj;		//call default constructor
	obj=t2;			//constructor conversion
	t2.display();
	return(0);
	
}
