#include<iostr eam.h>
#include<conio.h>
#include<stdlib.h>
//template<class t>
class stack
{ private: int top,data,stk[5];
  public:
  stack()
  { top=-1;
  }
  void push()
  { cout<<"Enter the data\n";
    cin>>data;
    if(top==4)
      cout<<"The stack is overflow\n";
    else
    { top=top+1;
      stk[top]=data;
    }
  }
  void pop()
  { if(top==-1)
       cout<<"stack is underflow";
    else
       top--;
  }
  void show()
  { for(int i=0;i<=top;i++)
	cout<<stk[i];
  }
};
void main()
{ int choice;
  stack s;
  clrscr();
  while(1)
  {
  cout<<"Enter your choice\n 1-push, 2-pop, 3-view, 4-view\n";
   cin>>choice;
   switch(choice)
   { case 1:
     {  s.push();
	break;
     }
     case 2:
     {  s.pop();
	break;
     }
     case 3:
     {  s.show();
	break;
     }
     case 4:
     {  exit(0);
	break;
     }
   }
  }
  getch();
}
