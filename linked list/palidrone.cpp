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
struct node* reverse(struct node* head)
{
 struct node *f=head , *s=f->next;
 if(f==NULL || s==NULL)
 return head;
struct node* h = reverse(s);
 s->next=f;
 f->next=NULL;
 return h;
}
struct node* mid(struct node* head)
{
	struct node* f=head , *s=head;
	while(f!=NULL && f->next!=NULL)
	{
		f=f->next->next;
		s=s->next;
	 } 
	 return s->next;
}
int pali(struct node* head)
{
	struct node* midi=mid(head);
struct node* sec=midi;
midi=reverse(midi);
struct node* f ;
f=head;
int k=1;
struct node* f1=midi;

while(f && f1)
{
	if(f->data!=f1->data)
	{
		k=0;
		break;
	}
	f=f->next;
	f1=f1->next;
}
return k;
}
int main()
{
node* head=NULL;
insert(&head,1);
insert(&head,2);
insert(&head,2);
insert(&head,2);
insert(&head,1);	
print(head);
int k=pali(head);
if(k==1)
printf("palidrome");
else
printf("not palidrome");

}

