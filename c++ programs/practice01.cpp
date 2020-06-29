#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
	public:
	 	void read()
		 {
		 	cout<<"Enter the value of x and y\n";
		 	cin>>x>>y;
			 }
		void show()
		{
			cout<<x<<y;
		}	
	/*protected :
		void sum()
		{
			cout<<"Sum is here my friend"<<(a+b);
		}*/
};
class B :public A
{
	private:
		int c;
	public:
		void mul()
		{
			void read();
		//	void sum();
			//cout<<"Multiplication is "<<(a*b);
		}
		void show ();
};
int main()
{
	B a;
	a.mul();
	return(0);
	
}
