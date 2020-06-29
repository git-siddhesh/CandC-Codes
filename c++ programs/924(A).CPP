//Wap for singly circular linked list
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{ int data;
  struct node *link;
}*root=NULL,*temp,*ptr,*del;
void main()
{ int repeat,choice,a,loc,i=1;
  clrscr();
  printf("1 for insertion at beg, 2 for end, 3 for loc, 4 for deletion, 5 for print\n");
  do
  { printf("Enter your choice in digits\n");
     scanf("%d",&choice);
     switch(choice)
	{ case 1:
	  { ptr=(struct node*)malloc(sizeof(struct node));
	    printf("Enter the data\n");
	    scanf("%d",&a);
	    ptr->data=a;
	    ptr->link=NULL;
	    if(root==NULL)
	    { ptr->link=ptr;
	      root=ptr;
	    }
	    else
	    { temp=root;
	      while(temp->link!=root)
	      temp=temp->link;
	      temp->link=ptr;
	      ptr->link=root;
	      root=ptr;
	    }
	    break;
	  }
	  case 2:
	  { ptr=(struct node*)malloc(sizeof(struct node));
	    printf("Enter the data\n");
	    scanf("%d",&a);
	    ptr->data=a;
	    ptr->link=NULL;
	    if(root==NULL)
	    { ptr->link=ptr;
	      root=ptr;
	    }
	    else
	     { temp=root;
	       while(temp->link!=root)
	       temp=temp->link;
	       ptr->link=root;
	       temp->link=ptr;
	     }
	     break;
	  }
	  case 3:
	  {  printf("Enter the location\n");
	     scanf("%d",&loc);
	     ptr=(struct node*)malloc(sizeof(struct node));
	     printf("Enter the data\n");
	     scanf("%d",&a);
	     ptr->data=a;
	     ptr->link=NULL;
	     if(root==NULL)
	     { ptr->link=ptr;
	       root=ptr;
	     }
	     else
	     {
	       temp=root;
	       while(i<loc-1)
	       { temp=temp->link;
		 i=i+1;
	       }
	       ptr->link=temp->link;
	       temp->link=ptr;
	     }
	     break;
	  }
	  case 4:
	  { if(root==NULL)
	    printf("Node does not exist\n");
	    else
	    { printf("Enter the location\n");
	      scanf("%d",&loc);
	      if(loc!=1)
	      { temp=root;
		while(i<loc-1)
		{ del=temp;
		  temp=temp->link;
		}
		del->link=temp->link;
	      }
	      else
	      root=NULL;
	      break;
	    }
	  }
	  case 5:
	  { temp=root;
	    do
	    { temp=temp->link;
	      printf("%d",temp->data);
	    } while(temp!=root);
	    break;
	  }
	}
    printf("Do you want to continue press 1\n");
    scanf("%d",&repeat);
  } while(repeat==1);
  getch();
}