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
void func(struct Node* root ,int level ,int* ml)
{
	if(root==NULL)
	return;
	if(*ml<level)
	{
	printf("%d ",root->data);
	*ml=level;
    }
	if(root->right)
	func(root->right,level+1,ml);
	if(root->left)
	func(root->left,level+1,ml);	
}
void rightview(struct Node* root)
	{
	int ml=0;//max level
	func(root,1,&ml);	
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
/*Node* root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->right = newNode(4); 
	root->left->right->right = newNode(5); 
	root->left->right->right->right = newNode(6);*/ 
	Node* root = newNode(12); 
	root->left = newNode(10); 
	root->right = newNode(30);
	root->right->left = newNode(25);
	root->right->right = newNode(40); 
	printf("Following are nodes in right view of Binary Tree\n"); 
	rightview(root); 
	return 0; 
} 


