#include<stdio.h>
#include<conio.h>
#define MAX 50
void Swap(int *a,int *b)
{ 
  *a+=*b;
  *b=*a-*b;
  *a-=*b;
}
void select(int a[], int n)
{	int temp,p,i,j;
	for(i=0;i<n;i++ )
  { 
	  p=i;
    for(j=i+1;j<n;j++)
    { if(a[p]<a[j] )
      	p=j;
    }
    if(p!=i)
    	Swap(&a[p],&a[i]);
  printf("n%d = %d",i,p);
	}
}
int main()
{
	int p[MAX],wt[MAX],rt[MAX],temp;
	int i,j,n;
	printf("Enter the 4 element \n");
	for(i=0;i<4;i++)
	   scanf("%d",&p[i]);
  select(p,4);
		for(i=0;i<4;i++)
			printf("\t%d",p[i]);
	
		for(i=0;i<4;i++)
			//printf("%d ",wt[i]);


	return 0;
}
