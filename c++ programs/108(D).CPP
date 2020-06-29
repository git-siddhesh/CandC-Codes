#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
}*ptr,*temp,*rear=NULL,*front=NULL;
int main()
{
	int choice,repeat;
	do
	{    //   clrscr();
		printf("Enter 1.ENQUEUE,2.DEQUEUE,3.display\n");
		scanf("%d",&choice);
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
						ptr->next=NULL;
						if(rear==NULL)
						{	rear=ptr;
							if(front==NULL)
							front=ptr;
						}
						else
						{
							rear->next=ptr;
							rear=ptr;
							if(front==NULL)
								front=ptr;
						}
					}
					break;
				}
			case 2:
				{
					if(front==NULL)
						printf("underflow\n");
					else if(front==rear)
					     {	front=rear=NULL;
						printf(" element has been deleted\n");
					     }
					else
					{
						front=front->next;
						printf("Element has been deleted\n");
					}
					break;
				}
			case 3:
				{
					temp=front;
					while(temp!=NULL)
					{
						printf(" %d ",temp->data);
						temp=temp->next;
					}
					break;
				}
		}
		printf("\n1 for continue\n");
		scanf("%d",&repeat);
	}while(repeat==1);
	return (0);
}
