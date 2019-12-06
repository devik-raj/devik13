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
void mid(struct node *head)
{
	struct node *f=head;
	struct node *s=head;
	if(head!=NULL)
	{
	
	while(f!=NULL && f->next!=NULL)
	{
		f=f->next->next;
		s=s->next;
	}
	printf("middle element is %d", s->data);
}
}
int main()
{
node* head=NULL;
for(int i=5;i>0;i--)
{
	insert(&head,i);
}	
print(head);
mid(head);
}
