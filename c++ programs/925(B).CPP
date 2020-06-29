//wap to implement binary + operator overloading for 2 complex no
#include<iostream.h>
#include<conio.h>
class complex
{ int real,img;
  public:
	void read()
	{ cout<<"Enter real and img no\n";
	  cin>>real>>img;
	}
	void show()
	{ cout<<"real"<<real<<"img"<<img;
	}
	complex operator+(complex c);
};
 complex complex:: operator +(complex c)
 { complex c3;
   c3.real=real+c.real;
   c3.img=img+c.img;
   return c3;
 }
 void main()
 { complex c1,c2,c3;
 clrscr();
  c1.read();
  c2.read();
  c3=c1+c2;
  c3.show();
  getch();

 }