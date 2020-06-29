    #include<iostream.h>
    #include<conio.h>
    class status
    { private: int a,b;
      public: void read()
	      { cout<<"Enter the value of a and b:\n";
		cin>>a,b;
	      }
	      void show()
	      { cout<<a,b;
	      }
	      void operator -()
	      { a=-a;
		b=-b;
	      }

    };
    void main()
    { status s;
      s.read();
      -s();
      s.show();
      getch();
    }