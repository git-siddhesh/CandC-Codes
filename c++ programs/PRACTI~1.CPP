#include<iostream.h>
#include<conio.h>
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
		void x()
		{
		cout<<"after show funct in b\n";
		}
};
int main()
{
	clrscr();
	B a;
	cout<<"main\n";
	a.read();
	a.show();
	a.mul();
	a.x();
	getch();
	return(0);

}
