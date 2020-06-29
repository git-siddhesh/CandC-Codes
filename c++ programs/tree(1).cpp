//wap for tree implementation
/*NotWOrking*/

#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
	int data;
	struct node *left,*right;
}*root=NULL,*temp=NULL,*ptr,*prr,*child;
void create(int item)
{
	ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=item;
	ptr->left=ptr->right=NULL;
}
void search(struct node *root)
{
	if((ptr->data > root->data)&&(root->right!=NULL))
		root->right=ptr;
	else if((ptr->data > root->data)&&(root->right==NULL))
		search(root->right);
}
struct node* insert(struct node *root)
{
	int item;
	cout<<"Enter the data\n";
	cin>>item;
	if(root==NULL)
		root->data=item;
	else
	{
		create(item);
		search(root);
	}
}
int main()
{
	cout<<"Not working work in progress";
	int no;
	cout<<"Enter 1 for insert";
	cin>>no;
	do
	{
		if(no==1)
		{
			insert(root);
		}
	}while(no==1);
	cout<<root->data;
	cout<<(root->right)->data;
	return (0);
} 
