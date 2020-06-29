#include<iostream.h>
#include<conio.h>
class A
{ protected: int a1;
  public:
	 void read_A()
	 { cout<<"Enter the value of a\n";
	   cin>>a1;
	 }
};
class B :virtual public A
{ protected: int a2;
  public: void read_B()
	  { cout<<"Enter the value of b\n";
	    cin>>a2;
	  }
};
class C : virtual public A
{ protected: int a3;
  public: void read_C()
	  { cout<<"Enter the value of c\n";
	    cin>>a3;
	  }
};
class D : public B,public C
{ private: int z;
  public : void mul()
	   { z=a1*a2*a3;
	     cout<<"value of z is"<<z;
	   }
};
void main()
{ D
}