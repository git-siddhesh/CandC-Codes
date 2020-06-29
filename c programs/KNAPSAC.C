#include<stdio.h>
#include<conio.h>
#define MAX 50
#define FOR(i,n) for(i=0;i<n;i++)
#define FOR(j,n) for(j=0;j<n;j++)
void Swap(float *a,float *b)
{ 
  *a+=*b;
  *b=*a-*b;
  *a-=*b;
}
int main()
{
	float p[MAX],wt[MAX],rt[MAX],temp;
	int n,pf=0,W,w,i,j;

	printf("Enter the no of products\n");
	scanf("%d",&n);
	printf("Enter the profit and weight\n");
	FOR(i,n)
	{  scanf("%f",&p[i]);
		scanf("%f",&wt[i]);
	}
	FOR(i,n)
	{	rt[i] = p[i]/wt[i];
	//	printf("%.2f ",rt[i]);
	}
	FOR(i,n)
	{	for(j=0;j<n;j++)
		{ if(rt[j]<rt[j+1])
		  { //("Bf %.2f %.2f",rt[j],rt[j+1]);
			 temp= rt[j] ;rt[j]=rt[j+1];rt[j+1]=temp;
			// printf("%.2f %.2f  ",rt[j],rt[j+1]);
		  }
		}
	}
	//FOR(i,n)  printf(" \n%.2f",rt[i]);
	
	for(i=0;i<4;i++)
		{
			n =i;
			for(j=i+1;j<4;j++)
			{
				if(p[j]>p[n])
					n=j;
			}
			if(n!=i)
				Swap(&p[i],&p[n]);
				wt[i]=n;
		}
		for(i=0;i<4;i++)
			printf("%.2f ",wt[i]);
	
	printf("Enter the max weight of knapsacck\n");
	scanf("%d",&W);
	//while()

	return 0;
}
