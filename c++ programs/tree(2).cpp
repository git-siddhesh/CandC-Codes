
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *left,*right;
}*root=NULL,*par=NULL,*cur,*temp,*ptr;

/*struct node* insert (struct node *root, int dt)
{
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=dt;
	ptr->left=ptr->right=NULL;
	if(root==NULL)
		return ptr;
	else
	{
	cur=root;
	while(cur!=NULL)
	{
		par=cur;
		if(cur->data<=dt)
			cur=cur->right;
		else
			cur=cur->left;
	}
	if(par->data<=dt)
		par->right=ptr;
	else
		par->left=ptr;
	return root;
	}
}*/
struct node* create(int key)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=key;
	temp->left=temp->right=NULL;
	return temp;
}
struct node* insert(struct node *root, int key)
{
	if(root==NULL)
		return create(key);
	if(key<root->data)
		root->left=insert(root->left,key);
	else if(key>=root->data)
		root->right=insert(root->right,key);
	return root;
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
/*void inorder(struct node *root,int top)
{
	int a[10];
	top++;
	a[top]=NULL;
	temp=root;
	while(top!=-1)
	{
		if(temp->left!=NULL)
		{
			top++;                                    
			temp=temp->left;
			a[top]=temp->data;
		}
		else
		{
			cout <<a[top];
			if(temp->right!=NULL)
			{
				temp=temp->right;
				inorder(temp,top);
			}
			top--;
		}
	}
}*/
int main()
{
	int choice, repeat,item;
	do
	{
		cout<<"Enter your choice : 1 for insert 2 for print else 0 exit";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the data\n";
				cin>>item;
				root=insert(root,item);
				break;
			case 2:
				inorder(root);
				break;
		}
	}while(choice!=0);
	
	return(0);
}
