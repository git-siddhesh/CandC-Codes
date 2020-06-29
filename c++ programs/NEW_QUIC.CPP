#include<stdio.h>
#include<conio.h>
int pi;
void swap(int *a,int *b)
{  int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int a[],int low,int high)
{
    int i = low -1;
    int pivot = a[high];
    for( int j = low;j<high;j++)
		if(a[j]<pivot)
		{	i++;
			swap(&a[j],&pivot);
		}
    swap(&a[i+1],&a[high]);
    return(i+1);
}
void Quick(int a[],int low,int high)
{
    if(low<high)
    {
	  pi = partition(a,low,high);
	  Quick(a,low,pi-1);
	  Quick(a,pi+1,high);
    }
}
void main()
{
	clrscr();
	int a[10],n,i;
	printf("Enter the no of elements to be entered\n");
	scanf("%d",&n);
	printf("Enter the nos\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	Quick(a,0,n);
	printf("Sorted array is\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	getch();
}