#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <stdbool.h>
typedef struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
}tree;


/*tree * check(tree *root)
{
	if(root==NULL)
		return;
	if(root->left->data < root->data)
	{
		check(root->left);
	}
	else
	{
		printf("no");
		//break;
	}
	if(root->right->data > root->data)
	{
		check(root->right);
	}
	else
	{
		printf("no");
		//break;
	}
	return root;
}*/
bool isBST( tree* root)
{
    static tree *prev = NULL;
     
    // traverse the tree in inorder fashion and keep track of prev node
    if (root)
    {
        if (!isBST(root->left))
          return false;
 
        // Allows only distinct valued nodes
        if (prev != NULL && root->data <= prev->data)
          return false;
 
        prev = root;
 
        return isBST(root->right);
    }
 
    return true;
}

void inorder(tree *root)
{
		if(root==NULL)
			return;
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
}	
		
tree* newnode(int x)
{
	tree *node;
	node=(tree*)malloc(sizeof(tree));
	node->data=x;
	node->left=node->right=NULL;
	return node;
}

int main()
{
	tree *root;
	int i,j,n,ele;
	root=newnode(4);
	root->left=newnode(2);
	root->left->left=newnode(1);
	root->left->right=newnode(3);
	root->right=newnode(5);
	inorder(root);
	printf("%d",isBST(root));	
}	

