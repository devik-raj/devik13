#include<stdio.h> 
#include<stdlib.h> 
int arr[100];
int len=0;
struct node 
{ 
	int key; 
	struct node *left, *right; 
}; 
struct node *newNode(int item) 
{ 
	struct node *temp = (struct node *)malloc(sizeof(struct node)); 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 
void inorder(struct node *root) 
{ 
	if (root != NULL) 
	{ 
		inorder(root->left);  
		arr[len++]=root->key;
		inorder(root->right); 
	} 
} 
struct node* insert(struct node* node, int key) 
{
	if (node == NULL) return newNode(key); 
	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 
	return node; 
} 
int findrank(int a)
{
	for(int i=0;i<len;i++)
	{
		if(arr[i]==a)
		return i;
	}
	return -1;
}
void print_in_range(int s , int e)
{
	for(int i=0;i<len;i++)
	{
		if(arr[i]>=s && arr[i]<=e)
		{
			printf("%d ",arr[i]);
		}
	}
}
int main() 
{ 
	struct node *root = NULL; 
	root = insert(root, 5); 
	insert(root, 2); 
	insert(root, 1); 
	insert(root, 3); 
	insert(root, 6); 
	insert(root, 7); 
	insert(root, 9);
	insert(root,8); 
	insert(root,13);
	inorder(root); 
	for(int i=0;i<len;i++)
	printf("%d ",arr[i]);
	printf("\n%d\n",findrank(5));
	printf("%d\n",findrank(1));
	printf("%d\n",findrank(9));	
print_in_range(6,13);

	return 0; 
} 

