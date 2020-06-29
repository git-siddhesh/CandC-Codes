#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{ char ch[]={'*','-','a','/','b','c','-','/','a','k','l'};
  int i;
  for (i=10;i>=0;i++)
  { if(ch[i]>=97&&ch[i]<=122)
    { int j=0;
      stack[j]=ch[i];
      j++;
    }
    else if(ch[i]>=42&&ch[i]<=47)
    { char temp1,temp2;
      temp1=stack[j];
      temp2=stack[j-1];
      stack[j-1]=(temp1,ch[i],temp2);

    }
  }
   clrscr();

  getch(); }