//#include<iostream.h>
//#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
	int n1=(m-l+1);
	int i,j,k;			//find the length of first array
	int n2=(r-m);		//find the length of second array
	int a1[10],a2[10];
	for(i=0;i<n1;i++)
		a1[i]=arr[l+i];	//copying the left side element to array 1
	for(j=0;j<n2;j++)
		a2[j]=arr[m+1+j];
	i=0;j=0;k=l;	//copying the right side element to array 2
	while(i<n1&&j<n2)
	{
		if(a1[i]<=a2[j])
		{	arr[k]=a1[i];	//Inserting in the old parent array in sorted way
			i++;
		}
		else
		{	arr[k]=a2[j];
			j++;
		}
			k++;
	}
	while(i<n1)
	{
		arr[k]=a1[i];		//Inserting the remaining element of array1
		i++;k++;
	}
	while(j<n2)
	{
		arr[k]=a2[j];		//Inserting the remaining element of arrar2
		j++;k++;
	}
}

void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(r+l)/2;
		mergesort(arr,l,m);		//function call for recursion for the left side
		mergesort(arr,m+1,r);   //function call for recursion for the right sides
		merge(arr,l,m,r);
	}
}
void prnt(int arr[],int k)
{
	for (int i=0;i<k;i++)
		cout<<" "<<arr[i];
}
int main()
{
	int n,arr[20],l=0;
	clrscr();
	cout<<"Enter the size of array";
	cin>>n;
	cout<<"Enter the element of array\n";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	mergesort(arr,l,n-1);	//call merge sort function
	prnt(arr,n);		//call prnt function
	getch();
	return (0);
}
