#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
	int data;
	struct node* link;
}*START=NULL,*ptr,*temp,*root,*q;
int main()
{
	int no,choose,repeat;
	cout<<"Enter the no of nodes you want to create\n";
	cin>>no;
	while(1)
	{
		switch(no)
		{
			case 1:
				{
					cout<<"Enter the data\n";
					for(int i=0;i<no;i++)
						{
							ptr=(struct node *)malloc(sizeof(struct node));
							cin>>ptr->data;
							ptr->link=NULL;
							if(START==NULL)
								START=ptr;
							else
							{
								temp=START;
								while(temp->link!=NULL)
									temp=temp->link;
								temp->link=ptr;							
							}
						}
				}
		}
	}
	return (0);
}
