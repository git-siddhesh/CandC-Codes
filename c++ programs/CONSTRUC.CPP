#include<iostream.h>
#include<conio.h>
class complex
{ private : int a,b;
  public :
   complex(){
    a=0;b=0;
    cout<<"constructor envoked"<<a<<endl<<b;
   }
   complex(int x,int y) {
   a=x;b=y;
   cout<<"overlodding"<<a<<endl<<b;
   }
};
void main()
{ clrscr();
  complex c1();
  complex c2(5,4);
  getch();
}


