#include <stdio.h> 
#include <stdlib.h> 
struct node 
{ 
	int data; 
	struct node* left, *right; 
}; 
struct node* newNode(int data) 
{ 
	struct node* node = (struct node*)malloc(sizeof(struct node)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 

	return(node); 
} 
int max(int a , int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
int height(struct node* root)
{
	if(root==NULL)
	return 0;
	return(1+max(height(root->left),height(root->right)));
}
int diameter(struct node* root)
{
	if(root==NULL)
	return 0;
	else
	return (1+height(root->left)+height(root->right));
}
int main() 
{ 
	struct node *root = newNode(1); 
	root->left	 = newNode(2); 
	root->right	 = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5);  
	root->right->left = newNode(6); 
	root->right->right = newNode(7);
	root->right->right->left = newNode(8);
	int h=height(root);
	printf("height of binary tree is %d\n",h); 
	int dd = diameter(root);
	printf("daimeter of binary tree is %d\n",dd); 
	return 0; 
}
