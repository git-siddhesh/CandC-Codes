// Function in c
#include<stdio.h>
int addition(int x,int y)			//function declaration and defination
{   //x=a, y=b
int c;
c=x+y;
return c;
}
int main()
{
	int a,b,c;
	printf("Enter two no \n");
	scanf("%d%d",&a,&b);
	printf("Addition of two no are\n ");
  c=addition(a,b);							//function calling
	printf("add of %d+%d=%d\n",a,b,c);
	a=5;b=10;
	c=addition(a,b);
		printf("add of %d+%d=%d\n",a,b,c);
	a=10;b=20;
  c=addition(a,b);
  	printf("\nadd of %d+%d=%d",a,b,c);
 return(0);
}



