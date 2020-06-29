#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*struct=NULL,*ptr,*temp;
void main()
{ int item;
  clrscr();
  do
  ptr=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data\n");
  scanf("%d",ptr->data);
  ptr->link =NULL;
  if(start==NULL)
	start=ptr;
  else
  { ptr->next=start;
    start=ptr;
  }

}