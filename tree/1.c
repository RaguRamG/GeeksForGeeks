
/*binary search tree creatrion*/
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct tree
{
	int data;
	struct tree *left,*right;
}tree;

tree *insert(tree *root,int x)
{
	if(root==NULL)
	{
		root=(tree*)malloc(sizeof(tree));
		root->data=x;
		root->left=NULL;
		root->right=NULL;
	}
	else
	{
		if(x<root->data)
		{
			root->left=insert(root->left,x);
		}
		else if(x>root->data)
		{
			root->right=insert(root->right,x);
		}
	}
	return root;
}
		 
void inorder(tree *root)
{
		if(root==NULL)
			return;
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
}			
int main()
{
	int n,x,i;
	tree *root=NULL;
	printf("\nEnter the no of element you want to insert:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		root=insert(root,x);
	}
	inorder(root);
}
		
