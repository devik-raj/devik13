#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
/*void print(struct node* n)
{
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n=n->next;
	}
}*/
void insert(struct node** head , int dat)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=dat;
    new_node->next=*head;
	*head=new_node;
}
int loop(struct node *head)
{
	struct node *f=head;
	struct node *s=head;
	struct node* temp;
	if(head!=NULL)
	{
	
	while(f!=NULL && f->next!=NULL && s!=NULL)
	{
		f=f->next->next;
		s=s->next;
		if(s==f)
		{
			temp=s;
			break;
		}
	}
	struct node* cur=head;
	struct node* ans;
	int aa;
	while(cur!=NULL)
	{
		if(cur->data==temp->data)
		{
			ans=cur;
			aa=cur->data;
			break;
		}
		cur=cur->next;
		temp=temp->next;
	}
	printf("%d", aa);
return 0;
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
head->next->next->next->next->next=head;
//print(head);
int j = loop(head);
if(j==1)
printf("loop found");
else
printf("loop not found");
}
