#include<stdio.h>
#include<conio.h>
int vn =5;
void prims(int g[10][10]){
	  int p[9],a[9],b[922],i,count,u,v,min,m=99;
	  for(i=0;i<vn;i++)
	  {   a[i] =99;
			b[i] = 0;
	  }
	  a[0]=0;
	  p[0]=-1;
	  for(count=0;count<vn-1;count++)
	  {   for(i=0;i<vn;i++)
				if(b[i]==0&&a[i]==m)
				{ m=a[i];
				  min = i;
				}
		  b[min]=1;
		  for(v=0;v<vn;v++)
				if(g[min][v]&&b[v]==0&&g[min][v]<a[v])
				{    p[v]=min;
					  a[min] = g[min][v];
				}
	  }
	  for(i=1;i<vn;i++)
			 printf("%d %d %d\n",p[i],i,g[i][p[i]]);
}
void main()
{
	int g[9][9],j,i;
	printf("ENter the adj matrix\n");
	for(i=0;i<vn;i++)
		 for(j=0;j<vn;j++)
			 scanf("%d",&g[i][j]);
	prims(g);
	getch();

}
