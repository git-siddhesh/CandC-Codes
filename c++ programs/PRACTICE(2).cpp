//Wap for evaluating polynomial expression
#include<iostream>
using namespace std;

int main()
{
	int a[10][10],n,i,j,x;
	float g=0,k;
  cout<<"Enter the length of th first expression\n";
  cin>>n;
  cout<<"Enter the first expression \n";
  for( i=0;i<n;i++)
  	cin>>a[i][0]>>a[i][1];
  cout<<"Enter the value of x";
  cin>>x;
	for(i=0;i<n;i++)
	{
		k=1;
		for(j=0;j<a[i][1];j++)
			k=k*x;
		g=g+(a[i][0]*k);
	}
	cout<<"The result of the expression when x="<<x<<" is:"<<g;  
  return(0);
}

