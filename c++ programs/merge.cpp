//write a program for mearge sort for practice 
#include<iostream>
using namespace std;
void divide(int,int,int);
void concore(int,int,int,int);
int main()
{
	int a[10],n,l,r,m ;
	cout<<"Enter the size of array\n";
	cin>>n;
	for(i=0;i<n;i++)
		cin a[i];
	l=0;r=n-1;
	m=(l+r)/2;
	divide(a,l,m,r);
 return(0);
}
void divide(int a[],int l,int r)
{
	if(l<r)
{
	m =(l+r)/2;
	divide(a,l,m );
	divide(a,m+1,r);
	concore(a,l,m,r);
}
}
void concore(int a[],int l,int m,int r)
{
	int n1=(m-l),n2=(m+1-r);
	int a1[n1],a2[n2];
	for(int i=0;i<n1&&i<n2)
	{
		if()
	}
}
