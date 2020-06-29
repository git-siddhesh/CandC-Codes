//Sorting- (Selection sort)
#include<stdio.h>
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
     { temp=a[p];
       a[p]=a[i];
       a[i]=temp;
     }
  }
}
int main()
{ int a[20];
  int i,j,p,temp,n;
  printf("Enter the no of nodes");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  select(a,n);
  for(i=0;i<n;i++)
  printf("%d",a[i]);
  return 0;
}
