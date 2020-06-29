#include<iostream.h>
#include<conio.h>
template<class temp>
void swap(temp t1,temp t2)
{ temp t3;
  t3=t1;
  t1=t2;
  t2=t3;
  cout<<"No after swaping\n"<<t1<<" "<<t2<<endl;
}
void main()
{ int a,b;
  char ch,ch1;
  float f1,f2;
  clrscr();
  cout<<"Enter the int data\n";
  cin>>a>>b;
  cout<<"Enter the char data\n";
  cin>>ch>>ch1;
  cout<<"Enter the float data\n";
  cin>>f1>>f2;
  swap(a,b);
  swap(ch,ch1);
  swap(f1,f2);
  getch();
}