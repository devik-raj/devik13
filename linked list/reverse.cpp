#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
void print(struct node* n)
{
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n=n->next;
	}
}
void insert(struct node** head , int dat)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=dat;
    new_node->next=*head;
	*head=new_node;
}
struct node* reverse(struct node *head)
{
	struct node *cur=head;
	struct node *nex=NULL, *pre=NULL;
	while(cur!=NULL)
{
	nex=cur->next;
	cur->next=pre;
	pre=cur;
	cur=nex;
}
return pre;
}
int main()
{
node* head=NULL;
for(int i=5;i>0;i--)
{
	insert(&head,i);
}	
printf("before reverse\n");
print(head);
head=reverse(head);
printf("after reverse\n");
print(head);
}
