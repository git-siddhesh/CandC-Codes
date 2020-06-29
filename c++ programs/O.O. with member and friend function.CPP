//Wap to implement overloading of - operator with member and friend function\
#include<iostream.h>
#include<conio.h>
class sub
{ int a,c;
  public:
  void read (int x,int y)
  { a=x;b=y;
  }
  void show()
  { cout<<a;
    cout<<endl<<b;
  }
  void operator -();
};
 void  sub:: operator -()
 { a=-a;b=-b;
 }
 void main()
 { sub s;
   s.read(5,1);
   -s;
   s.show();
   getch();
 }