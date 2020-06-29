#include<stdio.h>
#include<conio.h>
void main()
{int n,i,a=7;
 clrscr();
 printf("Enter the nth no\n");
 scanf("%d",&n);
 for(i=1;i<n;i++)
  a=(a*2)+i;
  printf("%d",a);
  getch();
}