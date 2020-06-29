#include<iostream.h>
#include<conio.h>
template <class temp>
void large(temp t1,temp t2)
{ if(t1>t2)
  cout<<"first one is larger\n";
  else
  cout<<"Second one is larger\n";
}
void main()
{ int a,b;
  float f1,f2;
  char ch1,ch2;
  clrscr();
  cout<<"Enter the int data\n";
  cin >>a>>b;
  large(a,b);
  cout<<"Enter the two float data\n";
  cin>>f1>>f2;
  large(f1,f2);
  cout<<"Enter the two char data\n";
  cin>>ch1>>ch2;
  large(ch1,ch2);
  getch();
}