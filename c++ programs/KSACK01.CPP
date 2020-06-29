//
#include<iostream.h>
#include<conio.h>
//using namespace std;
int ksack(int cap, int wt[],int val[],int n)
{
	int i,w,m;
	int k[11][10];
	for(i=0;i<=n;i++)
	{
		for(w=0;w<=cap;w++)
		{
			if(i==0||w==0)
				k[i][w]=0;
			else if(wt[i=1]>w)
				k[i][w]=k[i=1][w];
			else
			{
				m=(val[i-1]+k[i-1][w-wt[i-1]]);
				if(m>k[i-1][w]) k[i][w]=m;
				else k[i][w]=k[i-1][w];
			}
			cout<<k[i][w]<<" ";
		}
		cout<<endl;
	}
	return k[n][cap];
}
int main()
{
	clrscr();
	int val[10],wt[10],w,n,i;
	cout<<"Enter value and wt of 5 items\n";
	for(i=0;i<5;i++)
		cin>>val[i]>>wt[i];
	cout<<"ENter the bag capacity\n";
	cin>>w;
	cout<<ksack(w,wt,val,5);
	getch();
 return(0);
}


