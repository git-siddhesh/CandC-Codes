//Wap to use the template class
#include<iostream.h>
#include<conio.h>
template<class t>

class B
{ private : t a,b;
  public :
      void swap(t x,t y)
      { t c;
	 c=x;x=y;y=c;
	 cout<<"No after swapping are \n";
	 cout<<x<<" "<<y;
      }
};

void main()
{ B<int> x;
  clrscr();
  x.swap(2,4);
  B<char> y;
  y.swap('a','b');
  getch();
}