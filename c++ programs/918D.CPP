//Make a class name fruit with a data member to calc the no of fruits in the basket
//creat two other class name apple and mango in the basket
//print the no of fruit of each type and the total no of fruit in the basket
#include<iostream.h>
#include<conio.h>
class apple
{ protected: int b;
  public :
	  void total_a()
	  { cout<<"enter total no of apple\n";
	    cin>>b;
	  }
};
class mango
{ protected: int c;
  public :
	  void total_m()
	  { cout<<"enter total no of mango\n";
	    cin>>c;
	  }
};
class fruits : public apple,public mango
{ public:
  void res()
  { cout<<"Total no of fruits are"<<b+c;
  }
};
void main()
{ fruits f;
  clrscr();
  f.total_a();
  f.total_m();
  f.res();
  getch();
}