#include<iosgtream>
#include<string.h>
#include<stdlib.h>


struct tree 
{
	int data;
	struct tree *left,*right;
}*root;

typedef struct tree tree;

/*void node(int n)
{
	tree newnode=new tree;
	newnode->data=n;
	newnode->left=NULL;
	newnode->right=NULL;
}*/

tree *insert(tree *root,int n1)
{
	if(root==NULL)
	{
		tree newnode=new tree;
		newnode->data=n;
		newnode->left=NULL;
		newnode->right=NULL;
	}
	else if(ele < root->data)
	{
		root->left=insert(root,ele);
	}
	else
	{
		root->right=insert(root,ele);
	}

return root;
}
		
void inorder(tree *root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);
	}
	
}



int main()
{
	int i,j,n,ele;
	tree *root=NULL;
	cout<<"\nEnter the no of elements want to print:";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>ele;
		root=insert(root,ele);
	}
inorder(root);

}	








