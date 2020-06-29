// wap to show the use of multiple inheritence
#include<iostream.h>
#include<conio.h>
class circle
{ protected: int r;
  public:
  void read ()
  {cout<<"Enter the radius of circle\n ";
   cin>>r;
  }
};
class rect{
protected: int a;
public:
void length()
{ cout<<"Enter he lenght of square\n";
 cin>>a;
}
};
class area : public circle,public rect
{ private : float area;
  public:
  void are()
  { area=3.14*r*r;
    cout<<"Area of circle\n"<<area<<endl;
    area=a*a;
    cout<<"Area of square\n"<<area;
  }
};
void main()
{ area hii;
  clrscr();
  hii.read();
  hii.length();
  hii.are();
  getch();

}