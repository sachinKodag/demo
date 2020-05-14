#include <iostream>
#include <cstdlib>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *root=NULL;

struct Node *push()
{
	struct Node *newnode=new Node();
	cout<<"Enter a data: ";
	int input;
	cin>>input;
	newnode->data=input;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL)
	{
		root=newnode;
	}
	else
	{
		struct Node *temp;
		temp=root;
		while(temp->right!=NULL)
		{
			temp=temp->right;
		}
		temp->right=newnode;
		newnode->left=temp;
	}
}
//DAE=Delete at the End
struct Node *DAE()
{
	struct Node *temp, *prev;
	temp=root;
	while(temp->right!=NULL)
	{
		temp=temp->right;
	//	prev=temp->left;
	}
	temp->left->right=NULL;
	//prev->right=NULL;
	free(temp);
	cout<<"DELETED"<<endl;
}

struct Node *pop()
{
	struct Node *temp;
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->right;
	}
	
}
int main()
{
	push();
	push();
	push();
	push();
	push();
	DAE();
	pop();
	return 0;
}
