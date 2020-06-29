#include<iostream.h>
#include<conio.h>
class sample
{ int num;
  public :  void read(int x)
	    { num=x;
	    }
	    void show()
	    { cout<<num<<endl;
	    }
  sample operator++(int) //post increament
  { sample temp;
    temp.num=num;
    num++;
    return (temp);
  }
  sample operator++()  //pre increament
  { sample temp;
    ++num;
    temp.num=num;
    return temp;
  }
};
void main()
{ clrscr();
  sample s1,s2,s3;
  s1.read(10);
  s2=s1++;
  s2.show();
  s3=++s2;
  s3.show();
  getch();
}