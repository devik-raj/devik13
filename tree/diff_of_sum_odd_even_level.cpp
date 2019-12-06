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
int diff_of_sum_of_odd_even_level(struct node* root)
{
	if(root==NULL)
	return 0;
	push(root);
	int i=1,even=0,odd=0;
	int s=size();
	while(!isEmpty())
	{
		struct node* temp = top();
		pop();
		if(i%2==0)
			even+=temp->data;
		else
			odd+=temp->data;
		if(temp->left)
			push(temp->left);
		if(temp->right)
		push(temp->right);
		    s--;
		    if(s==0)
		    {
		    	s=size();
		    	i++;
			}
		}
	printf("odd = %d\n",odd);
	printf("even = %d\n",even);
	return(odd-even);
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
int s=diff_of_sum_of_odd_even_level(root);
printf("%d",s);
	return 0; 
} 

