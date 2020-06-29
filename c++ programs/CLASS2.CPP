#include<iostream.h>
#include<conio.h>
class A
{ private: int roll;
  public:
  int get_a(int a)
  {roll=a;
  return roll;
  }
};
class test  : virtual public A
{ protected: int marks;
  public:
  void test_m()
  { cout<<"Enter the test marks\n";
    cin>>marks;
  }
};
class sports : virtual public A
{ protected: int score;
  public:
  void sports_m()
  {cout<<"Enter the sports marks\n";
  cin>>score;}
};
class result :public sports,public test
{ private: int total;
 public:
 void total_m()
 {sports_m();
  test_m();
  total=marks+score;
  cout<<"Roll no is"<<get_a();
  cout<<endl<<"total:"<<total;}
};
void main()
{ clrscr();
  A x;
  x.get_a(20);
  result r;
  r.total_m();
  getch();
}