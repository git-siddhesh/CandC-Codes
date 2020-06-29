#include<iostream.h>
#include<conio.h>
struct student
{ int iss[2],sub[2];
}s;
void main()
{ int date,fine,x,y;
  clrscr();
  cout<<"This is program to calcule late fine "<<endl;
  cout<<"first enter date and then month"<<endl;
  cout<<"Enter the issue date"<<endl;
  for (int i=0;i<2;i++)
  cin>>s.iss[i];
  cout<<"Enter the submitting date"<<endl;
  for(i=0;i<2;i++)
  cin>>s.sub[i];
  cout<<"Time limit is 10 days and per day fine is Rs5"<<endl;
  x=s.sub[1]-s.iss[1];
  y=s.sub[0]-s.iss[0];
  if(x>0)
  date=(31*x)-s.iss[0]+s.sub[0];
  else if(x==0&&y>0)
  date=s.sub[0]-s.iss[0];
  else if(x<=0&&y<0)
  cout<<"Enter correct date"<<endl;
  else if(date>10)
  { fine=(date-10)*5;
    cout<<"You have a fine of Rs"<<fine;
  }
  else
    cout<<"Thank you, you have no fine";
  getch();
  }