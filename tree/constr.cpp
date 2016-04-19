#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

struct tree 
{
	int data;
	struct tree *left,*right;
}*root;

typedef struct tree tree;
static int m=0;
/*void node(int n)
{
	tree newnode=new tree;
	newnode->data=n;
	newnode->left=NULL;
	newnode->right=NULL;
}*/

tree *insert(tree *root,int ele)
{
	if(root==NULL)
	{
		root=new tree;
		root->data=ele;
		root->left=NULL;
		root->right=NULL;
	}
	else if(ele < root->data)
	{
		root->left=insert(root->left,ele);
	}
	else
	{
		root->right=insert(root->right,ele);
	}

return root;
}
		
void inorder(tree *root)
{
	//cout<<root->data;
	if(root==NULL)
	{
		return;
	}
		inorder(root->left);
		cout<< root->data<<" ";
		inorder(root->right);
	
	
}

tree* mirror(tree *mir)
{
	tree *temp;
	//if(root==NULL)
	//	return 0;

	if(mir!=NULL)
	{
		mirror(mir->right);		
		mirror(mir->left);
		temp=mir->left;
		mir->left=mir->right;
		mir->right=temp;
	}
	return mir;
}
	
void size(tree *root)
{
	if(root==NULL)
		return;
	size(root->left);
	m++;
	size(root->right);

}
int depth(tree *root)
{
	if(root==NULL)
		return 0;
	
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
	cout<<"\nprint inorder: ";
	tree *mir;

	inorder(root);
	//	mir=root;
	//mirror(mir);
	//cout<<"\nprint inorder: ";
	//inorder(mir);
	//inorder(root);
	size(root);
	cout<<"\n"<<m;
	int d=depth(root);
	cout<<"\n"<<d<<"\n";
}	








