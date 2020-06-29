#include<iostream.h>
#include<conio.h>
class A
{ protected: int x;
  public:
  void read()
  { cout<<"Enter the value of x"<<endl;
    cin>>x;
  }
  void show()
  { cout <<"Value of x is:"<<x<<endl;
  }
};
class B : public A
{ protected: int y;
  public:
  void input()
  { cout<<"Enter the value of y:"<<endl;
    cin>>y;
  }
  void output()
  { cout<<"Value of y and x are:"<<y<<" "<<x<<endl;
  }
};
class c :public B
{ private : int z;
  public:
  void mul()
  { z=x*y;
   cout<<"Value of z is:"<<z;
  }
};
 void main()
 { c mult;
    clrscr();
   mult.read();
   mult.input();
   mult.show();
   mult.output();
   mult.mul();
   getch();
 }