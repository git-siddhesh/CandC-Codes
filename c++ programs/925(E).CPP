#include<iostream.h>
#include<conio.h>
class base
{ protected: int x,y;
  public: virtual void show(int a)
	  { x=a;
	    cout<<x;
	  }
	  void display(int b)
	  { y=b;
	    cout<<y;
	  }
};
class derived:public base
{ public:
	 void show(int a)
	 { x=a;cout<<x;
	 }
	 void display(int b)
	 { y=b;cout<<y;
	 }
};
void main()
{ base *bptr;
clrscr();
  base b;
  bptr=&b;
  bptr->show(5);
  bptr->display(6);
  derived d;
  bptr=&d;
  bptr->show(7);
  bptr->display(8);
  getch();
}