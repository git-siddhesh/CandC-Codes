#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<4;i++)
	{
		for(j=3-i;j>0;j--)
		{
			printf(" ");
		}
		for(k=4-i;k<i+3;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return(0);
}
