#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,l;
for(i=0;i<4;i++)
{ int a=9;
			a=a-(i+ 2);
	for(j=0;j<i+1;j++)  //for printing spaces in increasing order
	{
		printf(" ");
	}
	for(k=0;k<(4-i);k++)
	{
		printf("%d",a);
		a-=2;
	}
	printf("\n");
}

return 0;
}
