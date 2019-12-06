#include<stdio.h>
#include<stdlib.h> 
// in this code i assume element is present
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
int find(struct Node* root , int x)
{
	if(root==NULL)
	return 0;
	else if(root->data==x)
	return 1;
	else
	return(find(root->left,x)||find(root->right,x));
}
Node* findlca1(struct Node* root , int x , int y)
{
	if(root==NULL)
	return NULL;
	if(root->data==x || root->data==y)
	return root;
	Node* a = findlca1(root->left,x,y);
	Node* b = findlca1(root->right,x,y);
	if(a&&b)
	return root;
	else if(a)
	return a;
	else if(b)
	return b;
	else
	return NULL;
/*	
//another way of find lca in bst
if(root==NULL)
	return NULL;
	if(x<root->data && y<root->data)
	return(root->left,x,y);
	if(x>root->data && y>root->data)
	return(root->right,x,y);
	return root->data;
	*/
}
Node* findlca(struct Node* root , int x ,int y)
{
	if(find(root,x)&&find(root,y))
	return(findlca1(root,x,y));
	else
	return NULL;
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
	int x,y;
	printf("enter element x , y whose lca u want\n");
	scanf("%d %d",&x,&y);
	Node* temp=findlca(root,x,y);
	if(temp)
	printf("%d\n",temp->data);
	else
	printf("element not present in tree\n");
}

