#include<stdio.h>
#include<stdlib.h>
//this code is also use for swap adjacant node when k=2 
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
struct node* reverse(struct node* head,int k)
{
 struct node* pre=NULL;
 struct node* next=NULL;
 struct node* cur=head;
 int c=0;
 while(cur!=NULL && c<k)
 {
 	next=cur->next;
 	cur->next=pre;
 	pre=cur;
 	cur=next;
 	c++;
 }
 if(next!=NULL)
 head->next=reverse(next,k);
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
int k;
printf("enter a no u want to Reverse a Linked List in groups of given size\n");
scanf("%d",&k);
head=reverse(head,k);
printf("after reverse in pair of %d \n",k);
print(head);
}

