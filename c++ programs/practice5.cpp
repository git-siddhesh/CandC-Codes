//
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
 int a[10],i,j,temp;
 cout<<"Enter the array";
 for(i=0;i<5;i++)
   cin>>a[i];
 for(i=0;i<5;i++)
  {
  	for(j=0;j<5;j++)
  	{
  		if(a[i]>a[j])
  		   {
  		   	temp=a[i];
  		   	a[i]=a[j];
  		   	a[j]=temp;
				 }
		}
	}
	for(i=0;i<5;i++)
	   cout<<a[i];
	  return 0;
}

