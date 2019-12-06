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
struct node* rem(struct node* head)
{
	 if(head==NULL || head->next==NULL) return head;
    node* root = head;
    while(head->next!=NULL){
       if(head->data!=head->next->data){
           head = head->next;
       }else{
           head->next = head->next->next;
       }
    }
    return root;
}
int main()
{
node* head=NULL;
insert(&head,1);
insert(&head,1);
insert(&head,2);
insert(&head,2);
insert(&head,3);
insert(&head,3);
insert(&head,4);
insert(&head,5);
insert(&head,5);
insert(&head,6);
printf("original linked list\n");	
print(head);
printf("after removing duplicate element from linked list\n");
head=rem(head);
print(head);
}


