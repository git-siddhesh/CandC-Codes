#include<iostream.h>
#include<conio.h>
struct depo
{char name[15];
 float pr;
  int sr_no;}d[10];
void main()
{ int k,j,item,a=1,cost=0,c=2;
  clrscr();
  cout<<"enter items\n";
  for(int i=0;i<2;i++)
  {
  cin>>d[i].name>>d[i].pr;
  d[i].sr_no=i+1;
  }
  cout<<"Do you want to print or update\n";
  cout<<"press 1 for print 2 for update\n";
  cin>>a;
  while(a!=1)
  { cout<<"Enter no of item to be added\n";
    cin>>c;
    cout<<"Enter name of item and cost\n";
    for(j=2;j<c+2;j++)
    { cin>>d[j].name>>d[j].pr;
      d[j].sr_no=j+2;
    }
    cout<<"press 1 for print 2 for update\n";
    cin>>a;
  }
  cout<<"sr name price\n";
  for(k=0;k<c+2;k++)
  { cout<<d[k].sr_no<<d[k].name<<d[k].pr<<" \n";
    cost+=d[k].pr;
  }
  cout<<"total price = Rs"<<cost;
  getch();
}