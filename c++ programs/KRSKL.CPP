#include<iostream.h>
#include<conio.h>
#define MAX 99
/*int CheckCycle(char p[],int n)
{ int i,j;
  for(i=0;i<n;i++)
  {
		for(j=0;j<n;j++)
		{   if(p[j]==p[i])
				 return 0;
		}
  }
  return 1;
}*/
int p[11];

int find(int i )
{   while(p[i]!=i)
		  i=p[i];
	 return 1;

}

void union1(int a,int b)
{
int i = find(a),j=find(b);
p[i]=j;
}
void krskls(int c[10][10],int n)
{  int minc=0,min=MAX;
	for(int i=0;i<n;i++)
			p[i]=i;
	int count = 0;
	int a,b;
	while(count<n-1)
	{   for(i=0;i<n;i++)
		{		for(int j=0;j<n;j++)
				{  if(find(i)!=find(j) && c[i][j]<min)
					{ min=c[i][j];
						a=i; b=j;
					}
				}
		}
		 union1(a,b);
		 cout<<"Edge "<<count++<<a<<"to"<<b<<" :"<<min;
		 minc+=min;
	}

}
void main()
{
clrscr();
char v[20];
int p[20],c[20][20],n,i,j,min=MAX;
cout<<"Enter the no of nodes"<<endl;
cin>>n;
cout<<"Enter the names of the nodes"<<endl;
for(i=0;i<n;i++)
	cin>>v[i];
//readCost(c,n,v);
cout<<"ENter the cost"<<endl;
	for(i=0;i<n;i++)
	{  for(j=0;j<=i;j++)
		{   if(i==j)
				  c[i][i]=MAX;
			 else
			  {   cout<<v[i]<<" to "<<v[j];
					cin>>c[i][j];
					 if(c[i][j]==0)  c[i][j]=MAX;
			  }
			 c[j][i]=c[i][j];
		}
	}
 for(i=0;i<n;i++)
  {
		for(j=0;j<n;j++)
			  cout<<" "<<c[i][j];
		cout<<endl;
  }
  krskls(c,n);
getch();
}