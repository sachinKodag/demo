#include <iostream>

using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

struct Node *root;
struct Node *base=NULL;

struct Node *insert(struct Node *root, int input)
{
	struct Node *node=new Node();
	node->data=input;
	node->next=NULL;
	
	if(root==NULL)
	{
		root=node;
		base=root;
		return root;
	
	}
	else
	{
		root->next=node;
		root=node;
		return root;
    }
	
}

struct Node *traverse()
{
	struct Node *n;
	n=base;
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}

int main()
{
	insert(root, 10);
	insert(root, 20);
	insert(root, 30);
	traverse();
	return 0;
}
