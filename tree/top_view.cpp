#include<stdio.h>
#include<stdlib.h>
struct Node 
{ 
	Node * left; 
	Node* right;
	int data; 
};  
Node* newNode(int key) 
{ 
	Node* node=new Node(); 
	node->left = node->right = NULL; 
	node->data=key; 
	return node; 
} 
int arr[100];
void func(struct Node* root,int* a ,int* b,int level ,int dist)
{
	if(root==NULL)
	return;
	if(level<a[50+dist])
	{
		a[50+dist]=level;
		b[50+dist]= root->data;
	}
	if(root->left)
	func(root->left,a,b,level+1,dist-1);
	if(root->right)
	func(root->right,a,b,level+1,dist+1);
}
void topview(struct Node* root)
	{
		int i,l=0;
		int *a=(int*)malloc(sizeof(int)*100);
		int *b=(int*)malloc(sizeof(int)*100);
		int *c=(int*)malloc(sizeof(int)*100);
		for(i=0;i<100;i++)
		{
			a[i]=100;
			b[i]=100;
		}
		func(root,a,b,0,0);
		for(i=0;i<100;i++)
		{
			if(b[i]!=100)
			{
				printf("%d ",b[i]);
				c[l++]=b[i];
			}
		}
	}
int main() 
{ 
	/* Create following Binary Tree 
			1 
		/ \ 
		2 3 
		\ 
			4 
			\ 
			5 
			\ 
				6*/
Node* root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->right = newNode(4); 
	root->left->right->right = newNode(5); 
	root->left->right->right->right = newNode(6); 
	printf("Following are nodes in top view of Binary Tree\n"); 
	topview(root); 
	return 0; 
} 


