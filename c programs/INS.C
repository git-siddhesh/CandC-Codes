#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
	int a[] = {0,5,4,2,7,1,9};
	int i,j,num;
	clrscr();
	for(i=1;i<7;i++)
	{  num = a[i];
		for(j=i-1;j>=0;j--)
		{
		 //	printf(" num = %d for j = %d  ",num,j);
			if(a[j]>num)
				a[j+1]=a[j];
		}
				a[j+1] = num;
	  //	printf("%d %d for i=%d&%d \n ",a[i-1],a[i],i-1,i);
	}
	for(i=0;i<7;i++)
		printf ("%d ",a[i]);
	getch();
}