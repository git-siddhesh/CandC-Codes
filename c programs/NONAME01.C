#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char s[1000];
  int i,flag,j,x;
  gets(s);
  for(j=0;j<=9;i++)
  {
	 i=0;flag=0;
	 while(s[i]!='\0')
	 { x= s[i];
		 if(x==j)
			  flag++;
		 i++;
	 }
	 printf("%d ",flag);
  }

  getch();
}
