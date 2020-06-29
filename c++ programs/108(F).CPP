//Wap for polynomial addition using linked list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{ int expo;
  int coff;
  struct node *link;
}*start=NULL,*p=NULL,*q=NULL,*r=NULL,*ptr,*temp,*list1=NULL,*list2=NULL,*list3=NULL;
void main()
{ int choice,repeat,no1,no2;
  clrscr();
  printf("Enter the no of nodes for list 1\n");
  scanf("%d",&no1);
  printf("Enter list one 1st coff, 2nd expo\n");
  for(int i=0;i<no1;i++)
  { ptr=(struct node*)malloc(sizeof(struct node));
    ptr->link=NULL;
    scanf("%d",&ptr->coff);
    scanf("%d",&ptr->expo);
    if(list1==NULL)
    list1=ptr;
    else
    { temp=list1;
      while(temp->link!=NULL)
      temp=temp->link;
      temp->link=ptr;
    }
  }
  printf("Enter the no of nodes for list 2\n");
  scanf("%d",&no2);
  printf("Enter list one 1st coff, 2nd expo\n");
  for(i=0;i<no2;i++)
  { ptr=(struct node*)malloc(sizeof(struct node));
    ptr->link=NULL;
    scanf("%d",ptr->coff);
    scanf("%d",ptr->expo);
    if(list2==NULL)
    list2=ptr;
    else
    { for(temp=list2;temp->link!=NULL;temp=temp->link)
      {}
      temp->link=ptr;
    }
  }
  p=list1;
  q=list2;
  while((p->link&&q->link)!=NULL)
  { r=(struct node *)malloc(sizeof(struct node));
    r->link=NULL;
    if((p->expo)>(q->expo))
    { r->expo=p->expo;
      r->coff=p->coff;
      p=p->link;
    }
    else if((p->expo)<(q->expo))
    { r->expo=q->expo;
      r->coff=q->coff;
      q=q->link;
    }
    else
    { r->expo=p->expo;
      r->coff=(p->coff + q->coff);
    }
    if(list3==NULL)
      list3=r;
    else
    { temp=list3;
      while(temp->link!=NULL)
	temp=temp->link;
      temp->link=r;
    }
  }
  while(p->link!=NULL)
  { r=(struct node*)malloc(sizeof(struct node));
    r->link=NULL;
    r->expo=p->expo;
    r->coff=p->coff;
    p=p->link;
  }
  while(q->link!=NULL)
  { r=(struct node*)malloc(sizeof(struct node));
    r->link=NULL;
    r->expo=q->expo;
    r->coff=q->coff;
    q=q->link;
  }
  temp=list3;
  while(temp!=NULL)
  {  printf(" %d x^%d +",temp->coff,temp->expo);
     temp=temp->link;
  }
 getch();
}
