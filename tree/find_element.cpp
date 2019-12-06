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
int find(struct Node* root , int e)
{
	if(root==NULL)
	return 0;
	else if(root->data==e)
	return 1;
	else
	return(find(root->left,e)||find(root->right,e));
}
int main() 
{ 
	Node *root = newNode(20); 
	root->left = newNode(8); 
	root->right = newNode(22); 
	root->left->left = newNode(5); 
	root->left->right = newNode(3); 
	root->right->left = newNode(4); 
	root->right->right = newNode(25); 
	root->left->right->left = newNode(10); 
	root->left->right->right = newNode(14);
	int e;
	printf("enter element u want to find\n");
	scanf("%d",&e);
int r=find(root,e);
if(r==1)
printf("element found");
else
printf("element not found");
	return 0; 
} 

