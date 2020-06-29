//Circular doubly linked list all operations
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
struct node		//declaration of node having three parts (prev,data,next)
{	int data;
	struct node *next,*prev;
}*root=NULL,*ptr,*temp,*del;
void creat()		//create a linked list
{       ptr=(struct node*)malloc(sizeof(struct node));
				cout<<"Enter the data\n";
				cin>>ptr->data;
				ptr->next=NULL;
				ptr->prev=NULL;
	ptr->next=ptr;
	ptr->prev=ptr;
	root=ptr;
}
void begg()		//Inserrt a node in the begining of current linked list
{       ptr=(struct node*)malloc(sizeof(struct node));
				cout<<"Enter the data\n";
				cin>>ptr->data;
				ptr->next=NULL;
				ptr->prev=NULL;
       /*	temp=root;
	while(temp->next!=root)
		temp=temp->next;
	ptr->next=root;
	ptr->prev=root->prev;
	root->prev=ptr;
	root=ptr;
	temp->next=root;     */

				//THE OTHER METHOD FOR THE FUNCTION
				ptr->next=root;
				ptr->prev=root->prev;
				(root->prev)->next=ptr;
				root->prev=ptr;
				root=ptr;

}
void end()		//Insert at the end of the current linked list
{       ptr=(struct node*)malloc(sizeof(struct node));
				cout<<"Enter the data\n";
				cin>>ptr->data;
				ptr->next=NULL;
				ptr->prev=NULL;
	ptr->next=root;
	ptr->prev=root->prev;
	(root->prev)->next=ptr;
	root->prev=ptr;
}
void sloc()
{       ptr=(struct node*)malloc(sizeof(struct node));
				cout<<"Enter the data\n";
				cin>>ptr->data;
				ptr->next=NULL;
				ptr->prev=NULL;
	int loc,i=1;
	cout<<"Enter the specific location\n";
	cin>>loc;
	for(temp=root;i<loc-1;i++)
		temp=temp->next;
	ptr->next=temp->next;
	ptr->prev=temp;
	(temp->next)->prev=ptr;
	temp->next=ptr;
}
void dlt()
{	if(root==NULL)
		cout<<"Node currently not exist\n";
	else if(root->next==root)
		root=NULL;
	else
	{	int loc,i=1;
		cout<<"Enter the loc\n";
		cin>>loc;
		for(temp=root;i<loc;i++)
		{	del=temp;
			temp=temp->next;
		}
		(temp->next)->prev=temp->prev;
		del->next=temp->next;
	}
}
void prnt()
{       if(root==NULL)
		cout<<"The node does not exist\n";
	else
	{	for(temp=root;temp->next!=root;temp=temp->next)
		cout<<temp->data;
		cout<<temp->data<<" ";
	}
}
int main()
{	int item,repeat,choice;
	do{     cout<<"\n1.create,2.Beg,3.End,4.SLOC,5.Del,6.print\n";
		cout<<"Enter your choice\n";
		cin>>choice;
		switch(choice)
		{      //	if(choice==1||2||3||4)
			/*{*	ptr=(struct node*)malloc(sizeof(struct node));
				cout<<"Enter the data\n";
				cin>>ptr->data;
				ptr->next=NULL;
				ptr->prev=NULL; */
					case 1: creat();break;
					case 2: begg();break;
					case 3: end();break;
					case 4: sloc();break;
		       //	}
		       //	else
			/*{ */	case 5: dlt();break;
				case 6: prnt();break;
		       //	}
			default: "You enter the invalid input\n";
		}
		cout<<"Do you want to continue press 1 or else press 0\n";
		cin>>repeat;
		clrscr();
	}while(repeat==1);
	return(0);
}
