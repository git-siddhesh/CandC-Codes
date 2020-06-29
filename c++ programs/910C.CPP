#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
struct node
{ int data;
  struct node *next;
}*start=NULL,*p,*q;
void main()
{ clrscr();
int a;
  do
  {
  p=(struct node*)malloc(sizeof(struct node));
  printf("Enter the no to inserted\n");
  scanf("%d",&p->data);
  if(start==NULL)
  { start=p;
    p->next=NULL;
  }
  else
  { q=start;
    while(q->next!=NULL)
    q=q->next;

  q->next=p;
  p->next=NULL;}
  printf("Do you want to continue press 1 or else 0\n");
  scanf("%d",&a);
  }
  while(a==1);
  for(q=start;q->next!=NULL;q=q->next)
  printf("%d",q->data);
  getch();

}