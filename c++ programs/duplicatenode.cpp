#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data,srno;
	struct node *next;//,*prev;
}*start=NULL,*ptr,*temp,*q,*del;
delnode(struct node *)
{
	
}
int main()
{
	int repeat,choice,i,j,k,num,count=0;
	cout<<"Enter the no of nodes\n";
	cin>>num;
	cout<<"Enter the data\n";
	for(i=0;i<num;i++)
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		cin>>ptr->data;
		ptr->srno=i+1;
		ptr->next=NULL;
		if(start==NULL)
			start=ptr;
		else
		{
			for(temp=start;temp->next!=NULL;temp=temp->next)
			{}
			temp->next=ptr;
		}
	}
	//Display the current stored list.
	cout<<"Your entered linked list is\n";
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		cout<<"\n"<<temp->srno<<" -> "<<temp->data;
	}
	//code for deleting the duplicate data.
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		del=temp;
		for(q=temp->next;q!=NULL;q=q->next)
		{
			if(temp->data==q->data)
			{
				//delnode();
				del->next=q->next;
				count++;
			}
		    else
				del=q;
		}
	}
	//display the deleted list
	cout<<"\nDeleted no of nodes are  :"<<count;
	cout<<"\nupdated linked list is\n";
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		cout<<"\n"<<temp->srno<<" -> "<<temp->data;
	}
	return(0);
}
