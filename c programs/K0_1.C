#include<stdio.h>
#include<conio.h>
int kSack(int cap, int wt[], int val[], int n){
	int i,w,m,j,k[6][10];
	for(i=0;i<=n;i++)
	{	for(w=0;w<=cap;w++)
		{	if(i==0||w==0)  k[i][w]=0;
			else if(wt[i-1]>w) k[i][w] = k[i-1][w];
			else{
				m = ( val[i-1]+k[i-1][w-wt[i-1]]);
				k[i][w] = (m>k[i-1][w])?m:k[i-1][w];
			}
			printf("%d ",k[i][w]);
		}
		printf("\n");
	}
/*	for(j=0;j<=cap;j++)
	  printf("%d ",k[i+1][w+1]);   */
	return k[n][cap];
}
int main(){
	int val[10],wt[10],W,n,i;
	clrscr();
	printf("Enter val and wt of 5 item\n");
	for(i=0;i<3;i++)
		 scanf("%d%d",&val[i],&wt[i]);
	printf("Enter cap\n");
	scanf("%d",&W);
	printf("%d",kSack(W,wt,val,3));
	getch();
	return 0;
}