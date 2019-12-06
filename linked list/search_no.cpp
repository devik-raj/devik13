#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insert(struct node** head , int dat)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=dat;
    new_node->next=*head;
	*head=new_node;
}
bool search(struct node *head , int se)
{
	if(head==NULL)
	return false;
	if(head->data==se)
	return true;
	return search(head->next , se);
}
void print(struct node* n)
{
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n=n->next;
	}
}
int main()
{
	node *head = NULL;
	int i,j,k,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{ 
    scanf("%d",&k);
	insert(&head ,k);
}
print(head);
int se;
printf("enter a no u want to search\n");
scanf("%d" ,&se);
search(head,se)?printf("true"):printf("false");

return 0;
}

