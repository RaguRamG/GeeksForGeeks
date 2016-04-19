
/*important tree problems*/
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int r;
typedef struct tree
{
	int data;
	struct tree *left,*right;
}tree;



int max(int x,int y)
{
	if(x>y) 
		return x;
	else
		return y;
}

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
tree *insert1(tree *root1,int x)
{
	if(root1==NULL)
	{
		root1=(tree*)malloc(sizeof(tree));
		root1->data=x;
		root1->left=NULL;
		root1->right=NULL;
	}
	else
	{
		if(x<root1->data)
		{
			root1->left=insert(root1->left,x);
		}
		else if(x>root1->data)
		{
			root1->right=insert(root1->right,x);
		}
	}
	return root1;
}

int height(tree *root)
{
	if(root==NULL)
		return -1;
	else
	{
		int m=height(root->left);
		int n=height(root->right);
		
		return max(m,n)+1;
	}
}
int size(tree *root)
{
	if(root==NULL)
		return;
	else
		return (size(root->left)+1+size(root->right));
}	

			 
void range(tree *root,int x,int y)
{
	static int z=0;		
		if(root==NULL)
			return;
		range(root->left,x,y);
		if(root->data>=x && root->data<=y)
			r=++z;	
		range(root->right,x,y);
}
			 
void inorder(tree *root)
{
		if(root==NULL)
			return;
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
}
int same(tree *root,tree *root1)
{
	if(root==NULL && root1==NULL)
		return 1;
	else if(root!=NULL && root1!=NULL)
	{
		if(root->data==root1->data)
			return(same(root->left,root1->left) && same(root->right,root1->right));
		else
			return 0;
	}
	else
		return 0;
}

int pathsum(tree *root,int sum)
{
	if(root==NULL)
	{
		return (sum==0);
	}
	else
	{
		int subsum=sum-root->data;
		return (pathsum(root->left,subsum)||pathsum(root->right,subsum));
	}
}	
int balance(tree *root)
{
	if(root==NULL)
		return;
	else
	{
		balance(root->left);
		if(root->left!=NULL)
		{
			if(root->data < root->left->data)
				return 1;
			else
				return 0;
		}
	
		balance(root->right);
		if(root->right!=NULL)
		{
			if(root->data > root->right->data)
				return 1;
			else
				return 0;
		}	 
		
	}
}							
int main()
{
	int n,x,y,i,ch,ans;
	tree *root=NULL,*root1=NULL;
	
	while(1)
	{
		printf("\n1.creating a tree\n2.insert\n3.inorder\n4.height\n5.size\n6.same\n7.pathsum\n8.printpath\n9.mirror\n10.doubletree\n11.create another tree\n");	
		printf("\nEnter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\ncreating a binary search tree");
				printf("\nEnter the no.of elements you want to insert:");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					scanf("%d",&x);
					root=insert(root,x);
				}
				break;
			case 2:
				printf("\nEnter the nos you want to insert");
				scanf("%d",&n);
				root=insert(root,n);
				break;
			case 3:
				printf("\nthe inorder traversal");
				inorder(root);
				break;
			case 4:
				ans=height(root);
				printf("The height is:%d\n",ans);
				break;
			case 5:
				ans=size(root);
				printf("The size is:%d\n",ans);
				break;
			case 11:
				printf("\ncreating a binary search tree");
				printf("\nEnter the no.of elements you want to insert:");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					scanf("%d",&x);
					root1=insert1(root1,x);
				}
				break;
			case 6:
				ans=same(root,root1);
				if(ans==1)
					printf("same");
				else
					printf("no");
				break;
			case 7:
				printf("\nENter the sum:");
				scanf("%d",&n);
				ans=pathsum(root,n);
				if(ans==1)
					printf("YES");
				else
					printf("NO");
				break;
			case 8:
				ans=balance(root);
				if(ans==1)
					printf("YES");
				else
					printf("NO");
				break;
			case 9:
				printf("\nEnter the range");
				scanf("%d %d",&x,&y);
				range(root,x,y);
				printf("%d",r);
				break;		

		}
		if(ch==0)
			break;
	}

}
		
