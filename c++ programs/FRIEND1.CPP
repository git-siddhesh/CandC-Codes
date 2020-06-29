#include<iostream.h>
#include<conio.h>
class code2;
class code1{
public:
int a,b;
code1()
{a=0;b=0;}
friend class code2;
};
class code2{
public:
void display(int x)
{ cout<<a<<endl<<b;
}
};
void main()
{clrscr();
 code1 c;
 code2 c2;
 c2.display();
 getch();
}
