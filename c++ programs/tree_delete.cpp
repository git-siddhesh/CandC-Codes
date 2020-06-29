//Write a menu driven program for tree
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
void preorder(struct node *root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
/*
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		cout<<"\t\t("<<root->data<<")"<<endl;
		
	}
}*/
struct node * minValue(struct node *node)
{
	cur=node;
	while(cur->left!=NULL)
		cur=cur->left;
	return cur;
}
struct node * del_node(struct node * root,int item)
{
	if(root==NULL)
		return root;
	//deletion for zero degree
	if(item<root->data)
	{
		root->left=del_node(root->left,item);
	}
	else if(item>root->data)
	{
		root->right=del_node(root->right,item);
	}
	else
	{
		if(root->left==NULL)
		{
			temp=root->right;
			free(root);
			return temp;
		}
		else if (root->right==NULL)
		{
			temp=root->left;
			free(root);
			return temp;
		}
		temp=minValue(root->right);
		root->data=temp->data;
		root->right=del_node(root->right,temp->data);
	}
	return root;
}
int main()
{
	int choice, repeat,item;
	
	do
	{
		cout<<"Enter your choice : 1 for insert 2 for inorder 3 for ppreorder \n5 for delete else 0 exit";
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
			case 3:
				preorder(root);
				break;
			case 5:
				cout<<"Enter the data to be delete\n";
				cin>>item;
				root=del_node(root,item);
				break;
		}
	}while(choice!=0);
	
	
	return(0);
}
