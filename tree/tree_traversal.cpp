// Recursive C program for level order traversal of Binary Tree 
#include <stdio.h> 
#include <stdlib.h> 

/* A binary tree node has data, pointer to left child 
and a pointer to right child */
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
void printInorder(struct node* root)
{
	if(!root)
	return;
	printInorder(root->left);
	printf("%d ",root->data);
	printInorder(root->right);
}
void printPostorder(struct node* root)
{
	if(!root)
	return;
	printPostorder(root->left);
	printPostorder(root->right);
	printf("%d ",root->data);
}
void printPreorder(struct node* root)
{
	if(!root)
	return;
	printf("%d ",root->data);
	printPreorder(root->left);
	printPreorder(root->right);
}
int main() 
{ 
	struct node *root = newNode(1); 
	root->left	 = newNode(2); 
	root->right	 = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	printf("Inorder Order traversal of binary tree is \n"); 
	printInorder(root);
	printf("\nPreorder Order traversal of binary tree is \n");
	printPreorder(root);
	printf("\nPostorder Order traversal of binary tree is \n");
	printPostorder(root);

	return 0; 
} 

