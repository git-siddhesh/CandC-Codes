#include<stdio.h>
//#include<conio.h>
int par[9];
int uni(int i ,int j){
	 if(i!=j)
	 {   par[j]=i;
		  return 1;
	 }
	 return 0;
}
int find(int i){
	 while(par[i])
	 {    printf("find ");
		  i=par[i];
	 }
	 return i;
}
int main(){
	  int i,j,k,a,b,min,u,v,minc=0,n,ne=1,cost[9][9];
	  printf("ENter the no of vertices\n");
	  scanf("%d",&n);
	  printf("Enter the adjecancy matrix\n");
	  for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
			{	scanf("%d",&cost[i][j]);
				if(cost[i][j]==0)  cost[i][j]=99;
			}
	  printf("The edge of min spanning tree\n");
	  while(ne<n)
	  {  // printf("while ");
			for(i=1,min=99;i<=n;i++)
			{   //  printf("for1 ");
					for(j=1;j<=n;j++)
					{ // printf("for2 ");
						if(cost[i][j]<min)
						{   min=cost[i][j];
							 a=u=i;
							 b=v=j;
						}
					}
			}
			u=find(u);
			v=find(v);
			if(uni(u,v))
			{    printf("\n %d edge(%d,%d)=%d",ne++,a,b,min);
				  minc+=min;
				  
			}
			cost[a][b] = cost[b][a] = 99;
	  }
			printf("\n Min cost = %d",minc);
		//	getch();
		return(0);
}
