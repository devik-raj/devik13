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
void insert(struct node** headr , int dat)
{
struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=dat;
	new_node->next=NULL;
	struct node *last = *headr;
	if(*headr==NULL)
	{
	*headr=new_node;	
	return;
	}	
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=new_node;
	return;
}
void sp(int* a , int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void swap(struct node* head)
{
	struct node* cur=head;
	struct node* s;
	while(cur!=NULL && cur->next!=NULL)
	{
	sp(&cur->data , &cur->next->data);
	cur=cur->next->next;
    }
}
int main()
{
node* head=NULL;
insert(&head,1);
insert(&head,2);
insert(&head,3);
insert(&head,4);
insert(&head,5);
insert(&head,6);
insert(&head,7);
insert(&head,8);
insert(&head,9);
insert(&head,10);
printf("original linked list\n");	
print(head);
printf("after swapping adjacant element \n");
swap(head);
print(head);
}

