#include<stdio.h>
#include<stdlib.h> 
struct Node 
{ 
	int data;  
	Node *left, *right; 
	}; 
Node* newNode(int key) 
{ 
	Node* node=new Node(); 
	node->left = node->right = NULL; 
	node->data=key; 
	return node; 
} 
void func(struct Node* root,int* a ,int* b,int level ,int dist)
{
	if(root==NULL)
	return;
	if(level>=a[50+dist])
	{
		a[50+dist]=level;
		b[50+dist]= root->data;
	}
	if(root->left)
	func(root->left,a,b,level+1,dist-1);
	if(root->right)
	func(root->right,a,b,level+1,dist+1);
}
void bottomView(struct Node* root)
	{
		int i,l=0;
		int *a=(int*)malloc(sizeof(int)*100);
		int *b=(int*)malloc(sizeof(int)*100);
		int *c=(int*)malloc(sizeof(int)*100);
		for(i=0;i<100;i++)
		{
			a[i]=-99;
			b[i]=-99;
		}
		func(root,a,b,0,0);
		for(i=0;i<100;i++)
		{
			if(b[i]!=-99)
			{
				printf("%d ",b[i]);
				c[l++]=b[i];
			}
		}
	}

int main() 
{ 
/*	Node *root = new Node(20); 
	root->left = new Node(8); 
	root->right = new Node(22); 
	root->left->left = new Node(5); 
	root->left->right = new Node(3); 
	root->right->left = new Node(4); 
	root->right->right = new Node(25); 
	root->left->right->left = new Node(10); 
	root->left->right->right = new Node(14);
	*/
	Node* root = newNode(12); 
	root->left = newNode(10); 
	root->right = newNode(30);
	root->right->left = newNode(25);
	root->right->right = newNode(40);  
	printf( "Bottom view of the given binary tree :\n");
	bottomView(root); 
	return 0; 
} 

