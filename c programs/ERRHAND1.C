#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char s[1000];
  int i,j,flag,x;
  gets(s);
  for(j=48;j<=57;j++)
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
