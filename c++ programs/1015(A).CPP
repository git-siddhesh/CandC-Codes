#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{ int data;
  struct node *left,*right;
}*root=NULL,*head,*ptr,*temp,*cur,*par;
void insert(struct node *root)
{ int item;
  ptr=(struct node *)malloc(sizeof(struct node));
  
  cout<<"Enter the data\n";
  cin>>item;
  
  ptr->data=item;  
  ptr->left=ptr->right=NULL;
  cur=root;
  while(cur)
  { par=cur;
    if(item>=(cur->data))
	cur=cur->right;
    else
	cur=cur->left;
  }
  if(root==NULL)
	{
		root=ptr;
	}
  else if(item<(par->data))
	par->left=ptr;
  else
	par->right=ptr;
}
void display(struct node * root)
{ if(root!=NULL)
  { display(root->left);
    cout<<root->data;
    display(root->right);
  }
  else
    cout<<"Tree does not exist\n";
}
int main()
{ int repeat,choice;
  do
  { cout<<"Enter the choice\n1 for insert  2 for display \n";
    cin>>choice;
    switch(choice)
    { case 1:
	{ 
	  insert(root);
	  break;
	}
      case 2:
	{ 
	  display(root);
	  break;
	}
	}
      cout<<"press 1 for continue\n";
      cin>>repeat;
  }while(repeat==1);
  return(0);
}








