//
#include<iostream>
using namespace std;

int main()
{
	int i,j,temp,a[20],n;
	cout<<"Enter the lenght of the array\n";
	cin>>n;
	for(i=0;i<n;i++)
	  cin>>a[i];
	
	for(i=1;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{  if(a[j]>temp)
			   a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	cout<<"Sorted array is ";
	for(i=0;i<n;i++)
	  cout<<a[i];
 return(0);
}

