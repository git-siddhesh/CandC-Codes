
#include<stdio.h>
int main()
	{
		int a,r,sum=0,cube,temp;
		printf("Enter no");
		scanf("%d",&a);
		temp=a;
		while(a>0)
		{
		 r=a%10;
		 cube=r*r*r;
		 sum=sum+cube;
		 a= a/10;
		 
		 }
		 a=temp;
if(a==sum)
printf("armstromg");
else
printf("not an armstrong");
		
  return(0);
  }
