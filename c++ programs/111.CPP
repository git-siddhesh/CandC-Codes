#include<iostream.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *next;
}*ptr;
void push(struct node **root,int new_data)
{ ptr=(struct node*)malloc(sizeof(struct node));
  ptr->data=new_data;
  ptr->next=(*root);
  *root=ptr;
}
void append(struct node **root,int new_data)
{
}
void insert_aftr(struct node *prev_node, int new_data)
{ if(prev_node==NULL)
  { cout<<"The given prev node can't be null\n";
    return;
  }
  else
  {

  }

}
void printlist(struct node *node)    //how?
{
}
int main()
{ struct node *head=NULL;
  push(&head,7); push(&head,1); push(&head,7);
  append(&head,4);
  insert_aftr(head->next,8);
  cout<<"The ceated linked list is\n";
  printlist(head);
  retturn(0);
}
    struct node *ptr;
    *ptr= ()