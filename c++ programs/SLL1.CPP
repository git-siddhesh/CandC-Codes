
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{ int data;
  struct node *link;
}node;
struct node *root,*temp,*p,*del,*ptr;
void beg(node **root)
{ temp=(struct node*)malloc(sizeof(struct node));   //creat node
	if(temp==NULL)
	  cout<<"The memory can't be created\n";
	else
	{ cout<<"Enter the data to be inserted\n";
	  cin>>temp->data;
	  temp->link=NULL;
	  if(*root==NULL)
	  { *root=temp;
	    temp->link=NULL;
	  }
	  else
	  { temp->link=*root;
	    *root=temp;
	  }
	}
}
void end(node **root)
{ temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	  cout<<"Memory can't be allocated\n";
	else
	{ cout<<"Enter the data to be inserted\n";
	  cin>>temp->data;
	  temp->link=NULL;
	  if(*root==NULL)
	    *root=temp;
	  else
	  { p=*root;
	    while(p->link!=NULL)
	    p=p->link;
	    p->link=temp;
	    temp->link=NULL;
	  }
	}
}
void sloc(node **root)
{ int loc,i=1;
  temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	  cout<<"Memory can't be allocated\n";
	else
	{ cout<<"Enter the loction of node\n";
	  cin>>loc;
	  cout<<"Enter the data to be inserted\n";
	  cin>>temp->data;
	  temp->link=NULL;
	  if(*root==NULL)
	    *root=temp;
	  else
	  { p=*root;
	    while(i<loc-1)
	    { p=p->link;
	      i=i+1;
	    }
	    temp->link=p->link;
	    p->link=temp;
	  }
	}
}
void dlt(node **root)
{ int loc;
  cout<<"Enter the location at which you want to delete the node\n";
	cin>>loc;
	if(loc!=1)
	{ p=*root;
	  int i=0;
	  while(i<loc-1)
	  { del=p;
	    p=p->link;
	   i=i+1;
	  }
	  del->link=p->link;
	}
	else
	*root=(*root)->link;
}
void prnt(node **root)
{  p=*root;            //display
	 while(p!=NULL)
	 { cout<<p->data;
	   p=p->link;
	 }
}
void rvs(node **root)
{  ptr=*root;
	 temp=ptr->link;
	 while(temp!=NULL)
	 { ptr->link=temp->link;
	   temp->link=*root;
	   *root=temp;
	   temp=ptr->link;
	 }
}
void main()
{ int choice,repeat;
  clrscr();
  do
  { cout<<"Enter your choice\n";
    cout<<"1 for insertion at beg. 2 for at end 3 for at loc \n";
    cout<<"4 for delete 5 for print and 6 for reverse\n";
    cin>>choice;
    switch(choice)
    { case 1:      //to be inserted at begining
      { beg(&root);
	break;
      }
      case 2:      // Insertion at the end
      { end(&root);
	break;
      }
      case 3:    //Insertion at the location
      { sloc(&root);
	break;
      }
      case 4:            //delete
      {  dlt(&root);
	 break;
      }
      case 5:
      { prnt(&root);
	// cout<<p->data;
	break;
      }
	case 6:
      {  rvs(&root);
	 break;
      }
      default :
      { cout<<"\n";
	break;
      }
    }
    cout<<"Do you want to continue press 1\n";
    cin>>repeat;
    clrscr();
  }
  while(repeat==1);

  getch();
}
