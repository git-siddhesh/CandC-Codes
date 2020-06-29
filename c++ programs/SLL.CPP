//Wap for singly linked list to insert an element in begining and print all
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
struct node
{ int data;
  struct node *link;
}*root,*temp,*p;
void main()
{ int a,o;
  clrscr();
  cout<<"Do you want to insert at begining or end\n";
  cout<<"Enter 0 for begining and 9 for end\n";
  cin>>o;
  if(o==0)
{
  do
  {
   temp=(struct node*)malloc(sizeof(struct node));
   if(temp==NULL)
   cout<<"The memory can't be created\n";
   else
   { cout<<"Enter the data to be inserted\n";
     cin>>temp->data;
     if(root==NULL)
     { root=temp;
       temp->link=NULL;
     }
     else
     { temp->link=root;
       root=temp;
     }
   }
   cout<<"Do you want to continue\n";
   cout<<"Press 1 for continue & 0 for exit\n";
   cin>>a;
   }
   while(a==1);
 }
   else
 {  do
  { temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    cout<<"Memory can't be allocated\n";
    else
    { cout<<"Enter the data to be inserted\n";
      cin>>temp->data;
      if(root==NULL)
      root=temp;
      else
      { p=root;
	while(p->link!=NULL)
	p=p->link;
	p->link=temp;
	temp->link=NULL;
      }
    }
    cout<<"Do you want to continue\n";
    cout<<"Press 1 for continue & 0 for exit\n";
    cin>>a;
  }
  while(a==1);
 }
   p=root;
   while(p->link!=NULL)
   { cout<<p->data;
     p=p->link;
   }
     cout<<p->data;
  getch();
}