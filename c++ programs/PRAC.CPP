#include<iostream.h>
#include<conio.h>
int m=10;
void main()
{ int m=20;
  { int m=30;
    cout<<"Value of inner block "<<m<<endl;
  }
  cout<<"The value of outer block"<<m<<endl;
  cout<<"The value of global variable"<<::m;
  getch();
}