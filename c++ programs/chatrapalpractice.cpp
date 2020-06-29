//
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node *link ;
};
int main()
{
	struct node *ptr,*start=NULL,*temp,*rvrs;
	int value ,i;
	do{
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->link=NULL;
		cout<<"Enter the number\n";
		cin>>value;
		ptr->data=value;
		if(start==NULL)
		{
			start=ptr;
		}
		else
		{
		   for(temp=start;temp->link!=NULL;temp=temp->link){
			 }
			 temp->link=ptr;
		}
		cout<<"Enter 1 to contine\n";
		cin>>i;
	}while(i==1);
	temp=start;
	rvrs=start;
	while(temp==start && rvrs==start)
	{
		if(temp->link==NULL)
		{
			cout<<temp->data;
			exit(0);
		}
		temp=temp->link;
		while(temp->link!=NULL)
		{
			temp=temp->link;
			rvrs=rvrs->link;
		}
		cout<<temp->data;
		rvrs->link=NULL;
		temp=start;
		rvrs=start;
	}
 return(0);
}

