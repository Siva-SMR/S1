//binary tree
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left,*right;
};

struct node *createtree()
{
	int val;
	struct node *root;
	root=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data ");
	scanf("%d",&val);
	if(val==0)
	{
		return NULL;
	}
	root->data=val;
	printf("Enter data for left child of the node: %d\n",root->data);
	root->left=createtree();
	printf("Enter data for right child of the node: %d\n",root->data);
	root->right=createtree();
	return root;
};

void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d \t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
		
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d \t",root->data);
		inorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d \t",root->data);
	}
}

void main()
{
	struct node *root;
	root=createtree();
	printf("preorder\n");
	preorder(root);
	printf("inorder\n");
	inorder(root);
	printf("postorder\n");
	postorder(root);
}
	
	
