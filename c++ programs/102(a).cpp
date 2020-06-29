//Wap to implement type conversion
#include<iostream>
using namespace std;
class test 
{
	private:
		int x,y,z;
	public:
		test ()
		{
		}
		test(int a)		//Conversion constructor from basic to u.d.
		{
			x=y=a;
			z=x+y;
			cout<<"basic to user define\n"<<z<<endl;
		}
		operator int ()	//Conversion operator from u.d. to basic
		{
			z=x*y;
            return z;
		}
		void show()
		{
			cout<<x<<endl<<y<<endl<<z;
		}
};
int main()
{
	test t1;
	int a=4;
	int b;
	t1=a;	//Basic to user define
	t1.show();
	b=t1;   //User define to basic
	cout<<endl<<b;
	return(0);
}
