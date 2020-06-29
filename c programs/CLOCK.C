//
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<ctype.h>

int main()
{ int c;
int i,j;
clrscr();
printf("press \"1\" to initiate ");
scanf("%d",&c);
//c=tolower(c);
if(c==1)
{
for(j=0;j<60;j++)
{
	for( i=1;i<=60;i++)
{
	printf("%d : %d",j,i);
	delay(1000);
	clrscr();
}
}
}
getch();
 return(0);
}

