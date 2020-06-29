#include<iostream.h>
#include<conio.h>
class complex
{ private: int a;
  public :
  complex(int x)
  {a=x;
  }
  void display();
};
void complex:: display()
{ cout<<a;
}
void main()
{ clrscr();
 complex c(5);
  c.display();
  getch();
}