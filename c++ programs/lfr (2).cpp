//    Algorithm implementation 1
#include<iostream>
using namespace std;
//structure defining for a node
 struct
{
		int l,r,u,s;
		struct next,prev;
}nd[20],start,cur,ptr,p;
//function that will create node mannually
void createNode()
{
		int n;
		cout<<"Enter the no of nodes\n";
		cin>>n
		cout<<"Enter the data of node 1 for true 0 for false\n";
		for(int i=0; i>n; i++)
		{
			 temp=(struct node*)malloc(sizeof(struct node));   //creat node
				if(temp==NULL)
	  				cout<<"The memory can't be created\n";
				else
					{ 
					   cout<<"l ";
			       cin>>nd[i]->l;
			       cout<<"r ";
			       cin>>nd[i]->r;
			       cout<<"u ";
			       cin>>nd[i]->u;
						 cout<<"s ";
			       cin>>nd[i]->s;
			       
				  nd[i]->next=nd[i]->prev=NULL;
				  
	  if(start==NULL)
	  { start=nd[i];
	  }
	  else
	  { p=start;
	    while(p->next!=NULL)
	    		p=p->next;
	    p->next=nd[i];
	    nd[i]->next=NULL;
	    nd[i]->prev
	  }
	}
			
} 
void printNode()
//function used to implement
func1()
{
	createNode();
	printNode();
}

int main()
{
 return(0);
}

