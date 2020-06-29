//    Algorithm implementation 1
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//using namespace std;
//structure defining for a node
 struct a
{
		int l,r,u,s;
		int node;
		a *next,*prev;
		char turn;
}*nd,*start,*cur,*ptr,*p;

void printNode()
{
	p=start;            //display
	 while(p!=NULL)
	 { cout<<p->node<<p->turn<<endl;
		p=p->next;
	 }
}
//function that will create node mannually
void createNode()
{
		int n;
		cout<<"Enter the no of nodes\n";
		cin>>n;
		cout<<"Enter the data of node 1 for true 0 for false\n";
		for(int i=0; i<n; i++)
		{
			 nd=(struct a*)malloc(sizeof(struct a));   //creat node
				if(nd==NULL)
					cout<<"The memory can't be created\n";
				else
					{  cout<<i;
					 //	cout<<"l ";
					 cin>>nd->l;
					// cout<<"r ";
					 cin>>nd->r;
					// cout<<"u ";
					 cin>>nd->u;
					 //	 cout<<"s ";
					 cin>>nd->s;
					 nd->node=i;
				  nd->next=nd->prev=NULL;
				  if(nd->l==1)
					 nd->turn='L';
				  else if(nd->s==1)
					 nd->turn='S';
				  else nd->turn='R';
				}
	  if(start==NULL)
	  { start=nd;
	  }
	  else
	  { p=start;
		 while(p->next!=NULL)
				p=p->next;
		 p->next=nd;
		 nd->next=NULL;
		 nd->prev=p;
	  }
	}
	 printNode();
}
//function to check the dead end node?
int deadNode(a *cur)
{   if(cur->u==1)
		 return 1;
	 return 0;
}
a* dlt(a *cur)
{  (cur->next)->prev = cur->prev;
	 (cur->prev)->next = cur->next;
	 cur=cur->next;
	 return cur;
}
//function that will delete the dead end node
a* deleteNode(a *cur)
{  // cout<<" :"<<cur->node;
  /*	 ((cur->next)->next)->prev = cur->prev;
	 (cur->prev)->next = (cur->next)->next;
	 cur=cur->prev;
  */
  cur=dlt(cur);
  cur=dlt(cur);
	 // cout<<" :x "<<cur->node;
 //	 printNode();
		  if(cur->turn=='L')
		  {	  cur->l=0;
				  if(cur->s==1) cur->turn='S';
				  else  cur->turn='R';
		  }
			if(cur->turn=='S')
		  {	  cur->s=0;
				  if(cur->r==1) cur->turn='R';
		  }
			if(cur->turn=='R')
		  {	  cur->r=0;
				 cur=deleteNode(cur);
		  }


	  /*	 if((cur->s==0)&&(cur->l==1)&&cur->r==0)
		cur=deleteNode(cur);
		 if((cur->s==0)&&(cur->l==0)&&cur->r==1)
			cur=deleteNode(cur);
	 if((cur->l==0)&&(cur->r==1)) cur->r=0;
	 else if(cur->l==1)   cur->l=0; */
	 return cur;
}
//function used to implement
void func1()
{
	createNode();
	cur = start;
		while(cur->next!=NULL)
		{ // cout<<"for node no "<<cur->node;
			while(deadNode(cur))
			{     cout<<"deadNodecalled"<<cur->node;
			  cur =	deleteNode(cur);
			}
			cur=cur->next;
	}
}

int main()
{  clrscr();
	func1();
	printNode();
	getch();
 return(0);
}


