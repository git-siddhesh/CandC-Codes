// Wap to to perform all the operation of stack using linked list 
// Here we take a prev pointer in place of next pointer
// Since all the operations are performed from the TOP of the stack
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
}*ptr,*temp,*top=NULL;
int main()
{
	int choice,repeat;
	printf("Enter 1.push,2.pop,3.display\n");
	scanf("%d",&choice);
	top->prev=NULL;
	do
	{    
	
		switch(choice)
		{
			case 1:
				{
					ptr=(struct node*)malloc(sizeof(struct node));	//It allocate the memory in run time
					if(ptr==NULL)
						printf("Overflow\n");
					else
					{
						printf("Enter the data\n");
						scanf("%d",&ptr->data);
						ptr->prev=NULL;
						if(top==NULL)
					 		top=ptr;
					 	else
					 	{
					 		ptr->prev=top;
					 		top=ptr;
						}
					}
					break;
				}
			case 2:
				{
					if(top==NULL)
						printf("underflow\n");
					else 
						top=top->prev;
						printf("TOP element has been deleted\n");
				}
			case 3:
				{
					temp=top;
					while(temp!=NULL)
					{
						temp=temp->prev;
						printf(" %d ",temp->data);
					}
				}
		}
		printf("1 for continue\n");
		scanf("%d",&repeat);
	}while(repeat==1);
	return (0);
}

