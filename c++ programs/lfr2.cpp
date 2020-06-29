//
#include<stdio.h>
static int a[50]; 
int x=0;
int main()
{
	int i,j;
	for(i=0;i<12;i++)
	   scanf("%d",&a[i]);
	   
  for(i=0;i<12;i++)
  {
  	if(a[i]==4)
  	{ //    L L B R L ->S
  		if((a[i-2]==1)&&(a[i-1]==1)&&(a[i+1]==2)&&(a[i+2]==1))
  		{   printf(" llbrl found");
  		   	a[i-2]=3;
  		   for(j=i+3;j<15;j++)
  		      a[j-4]=a[j];
 				i-=2; 	
  		}
  		//   L L B R L->S
  		if((a[i-2]==1)&&(a[i-1]==2)&&(a[i+1]==1)&&(a[i+2]==1))
  		{    printf("lrbll found");
  		   x+=3;
				 a[i-2]=3;
  		   for(j=i+3;j<15;j++)
  		      a[j-4]=a[j];
  		  i-=2;
  		}
  		//   L B L -> S
  		if((a[i-1]==1)&&(a[i+1]==1))
  		{      printf("lbl found");
  			a[i-1]=3;
  			x+=2;
  			for(j=i+2;j<15-x;j++)
  			    a[j-2]=a[j];
  			i-=1;
			}  //  L B S->R
			if((a[i-1]==1)&&(a[i+1]==3))
  		{     printf("lbs found");
  			a[i-1]=2;
  			x+=2;
  			for(j=i+2;j<15;j++)
  			    a[j-2]=a[j];
  			i-=1;
			}
			//     S B L -> R
			if((a[i-1]==3)&&(a[i+1]==1))
  		{     printf("sbl found");
  			a[i-1]=2;
  			for(j=i+2;j<15;j++)
  			    a[j-2]=a[j];
				i--;
			}
			
		}
	}
	for(i=0;i<15;i++)
	   printf("%d ",a[i]);
 return(0);
}

