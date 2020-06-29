//wap to implement stream operatop
#include<iostream.h>
#include<conio.h>
class complex
{ int real,img;
  public:
  friend istream &operator>>(istream &in, complex &c);
  friend ostream &operator<<(ostream &out, complex &c);
  friend complex operator+(complex &c1, complex &c2);
};
  istream &operator>>(istream &in, complex &c)
  { in>>c.real;
    in>>c.img;
    return in;
  }
  ostream &operator<<(ostream &out, complex &c)
  { out<<c.real;
    cout<<endl;
    out<<c.img;
    return out;
  }
  complex operator+(complex &c1, complex &c2)
  { complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
  }
  void main()
  { clrscr();
    complex c1,c2,c3;
    cout<<"Enter the real and img value\n";
    cin>>c1;
    cout<<"Enter 2nd data\n";
    cin>>c2;
    c3=c1+c2;
    cout<<c3;
    getch();
  }