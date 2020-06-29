#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b)
{
   int t = *a;
   *a = *b;
   *b = t;
}
int part(int a[],int l,int r)
{
    int p=a[l],temp, i=l+1,j=r;
    while(i<j)
    {
		while(a[i++]<p){}
		while(a[j--]>=p){}
		if(i<j)
		{    //Swap a[i-1] and a[j+1]
			a[i-1]+=a[j+1];
			a[j+1]=a[i-1]-a[j+1];
			a[i-1]-=a[j+1];
		}
    }
    temp = a[p];
    a[p] = a[j+1];
    a[j+1] = temp;


    //a[i] = a[j];
    //a[j] = p;
    return j;
}
void Quick(int a[],int l,int r)
{
	int p,k,i;

	if(l<r)
	{
		p = part(a,l,r);
	 /*	for( i = p+1;i<r;i++)
		{ 	k = i;
			if(a[p]==a[i])
			{
				swap(&a[p],&a[i]);
				k++;
			}
		}
	    */	Quick(a,l,p-1);
		Quick(a,k+1,r);
	}
}
int main()
{
	int n,a[10],i;
	clrscr();
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	printf("Enter the nos:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	Quick(a,0,n);
	printf("Sorted array\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	getch();
	return 0;
}