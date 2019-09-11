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
void del(struct node* head)
{
 struct node* sl=NULL;
 struct node* cur=head;
 struct node* temp;
 if(cur==NULL)
 return;
 while(cur->next!=NULL)
 {
 sl=cur;
 cur=cur->next;
 }
 sl->next=NULL;
 temp=cur->next;
// printf("aaa%d\n",cur->data);
 free(temp);
 temp=NULL;
/* struct node* cur=head;
 struct node* h1 =head;
 //printf("asdfg%d" , h1->data);
 while(cur && cur->next && cur->next->next)
 {
 	cur=cur->next;
 }
 struct node* temp = cur->next;
 cur->next=NULL;
 free(temp);
 temp=NULL;*/
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
del(head);
printf("after del last element from linked list\n");
print(head);
}

