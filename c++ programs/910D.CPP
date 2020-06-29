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
int a,x;
  do
  {
  p=(struct node*)malloc(sizeof(struct node));
  printf("Enter the no to inserted\n");
  scanf("%d",&p->data);
  cout<<"Enter your choice\n 1 for begining 2 for middle\n";
  cin>>
  if(start==NULL)
  { start=p;
    p->next=NULL;
  }
   cout<<"Enter the data after which insert a node\n";
  cin>>x;
  else
  { q=start;
    while(q->data!=x)
    q=q->next;

  p->next=q->next;
  q->next=p;}
  printf("Do you want to continue press 1 or else 0\n");
  scanf("%d",&a);
  if(a==1)
  { printf("where do you want to insert\n");
    scanf("%d",&x);
  }
  }
  while(a==1);
  for(q=start;q!=NULL;q=q->next)
  printf("%d",q->data);
  getch();

}