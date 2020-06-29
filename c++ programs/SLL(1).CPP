#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *link;
}*root,*temp,*p,*del,*ptr;
void main()
{ int choice,repeat,i,loc;
  clrscr();
  do
  { cout<<"Enter your choice\n";
    cout<<"1 for insertion at beg. 2 for at end 3 for at loc \n";
    cout<<"4 for delete 5 for print and 6 for reverse\n";
    cin>>choice;
    switch(choice)
    { case 1:      //to be inserted at begining
      { temp=(struct node*)malloc(sizeof(struct node));   //creat node
	if(temp==NULL)
	  cout<<"The memory can't be created\n";
	else
	{ cout<<"Enter the data to be inserted\n";
	  cin>>temp->data;
	  temp->link=NULL;
	  if(root==NULL)
	  { root=temp;
	    temp->link=NULL;
	  }
	  else
	  { temp->link=root;
	    root=temp;
	  }
	}
	break;
      }
      case 2:      // Insertion at the end
      { temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	  cout<<"Memory can't be allocated\n";
	else
	{ cout<<"Enter the data to be inserted\n";
	  cin>>temp->data;
	  temp->link=NULL;
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
	break;
      }
      case 3:    //Insertion at the location
      { temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	  cout<<"Memory can't be allocated\n";
	else
	{ cout<<"Enter the loction of node\n";
	  cin>>loc;
	  cout<<"Enter the data to be inserted\n";
	  cin>>temp->data;
	  temp->link=NULL;
	  if(root==NULL)
	    root=temp;
	  else
	  { p=root;
	    i=1;
	    while(i<loc-1)
	    { p=p->link;
	      i=i+1;
	    }
	    temp->link=p->link;
	    p->link=temp;
	  }
	}
	break;
      }
      case 4:            //delete
      { cout<<"Enter the location at which you want to delete the node\n";
	cin>>loc;
	if(loc!=1)
	{ p=root;
	  i=0;
	  while(i<loc-1)
	  { del=p;
	    p=p->link;
	   i=i+1;
	  }
	  del->link=p->link;
	}
	else
	root=root->link;
	 break;
      }
      case 5:
      {  p=root;            //display
	 while(p!=NULL)
	 { cout<<p->data;
	   p=p->link;
	 }
	// cout<<p->data;
      }
      default :
      { cout<<"\n";
	break;
      }
      case 6:
      {  ptr=root;
	 temp=ptr->link;
	 while(temp!=NULL)
	 { ptr->link=temp->link;
	   temp->link=root;
	   root=temp;
	   temp=ptr->link;
	 }
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
