#include <stdio.h> 
#include <stdlib.h> 
struct node 
{ 
	int data; 
	struct node* left, *right; 
}; 
struct node* newNode(int data) 
{ 
	struct node* node = (struct node*) 
						malloc(sizeof(struct node)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 

	return(node); 
} 
struct node* q[100];
int front=0,rear=-1;
void push(struct node* temp)
{
	q[++rear]=temp;
}
void pop()
{
	front++;
}
int size()
{
	return (rear-front+1);
}
int isEmpty()
{
	if(front>rear)
	return 1;
	else
	return 0;
}
struct node* top()
{
return q[front];	
}
void printLevelOrder(struct node* root)
{
	if(root==NULL)
	return;
	push(root);
	int s=size();
	while(!isEmpty())
	{
		struct node* temp = top();
		pop();
		if(s==1)
		printf("%d ",temp->data);
		else
		printf("%d ",temp->data);
		if(temp->left)
			push(temp->left);
		if(temp->right)
		    push(temp->right);
		    s--;
			if(s==0)
			{
				s=size();
			}
	}
}
int main() 
{ 
	struct node *root = newNode(1); 
	root->left	 = newNode(2); 
	root->right	 = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	root->right->right = newNode(7); 
	root->right->left = newNode(6); 
	printf("Level Order traversal of binary tree is \n"); 
	printLevelOrder(root); 
	return 0; 
} 

