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
void insert_at_begin(struct node** head , int dat)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=dat;
    new_node->next=*head;
	*head=new_node;
}
void insert_at_end(struct node** headr , int dat)
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
void insert_at_pos(struct node** headr , int dat , int pos)
{
	if(pos==1)
	insert_at_begin(headr,dat);
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=dat;
	struct node *cur=*headr;
	int i=0;
	while(cur && i<pos-1)
	{
		cur=cur->next;
		i++;
	}
	if(cur==NULL)
	printf("position doesnot exist\n");
	new_node->next=cur->next;
	cur->next=new_node;
}
void del(struct node** headr , int key)
{
	struct node *temp=* headr ; 
struct node	*pre;
	if(temp!=NULL && temp->data==key)
	{
		*headr=temp->next;
		free(temp);
		return;
	}
	 while (temp != NULL && temp->data != key) 
    { 
        pre = temp; 
        temp = temp->next; 
    } 
    if (temp == NULL) return; 
  
    pre->next = temp->next; 
  
    free(temp);
}
void deleteNode(struct node **head_ref, int position) 
{ 
   // If linked list is empty 
   if (*head_ref == NULL) 
      return; 
  
   // Store head node 
   struct node* temp = *head_ref; 
  
    // If head needs to be removed 
    if (position == 0) 
    { 
        *head_ref = temp->next;   // Change head 
        free(temp);               // free old head 
        return; 
    } 
  
    // Find previous node of the node to be deleted 
    for (int i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next; 
  
    // If position is more than number of ndoes 
    if (temp == NULL || temp->next == NULL) 
         return; 
  
    // Node temp->next is the node to be deleted 
    // Store pointer to the next of node to be deleted 
    struct node *next = temp->next->next; 
  
    // Unlink the node from linked list 
    free(temp->next);  // Free memory 
  
    temp->next = next;  // Unlink the deleted node from list 
} 
int main()
{
	node* head=NULL;
	node* sec=NULL;
	node* thr=NULL;
	 head = (struct node*)malloc(sizeof(struct node)); 
	 sec = (struct node*)malloc(sizeof(struct node)); 
	 thr = (struct node*)malloc(sizeof(struct node)); 
	head->data=1;
	head->next=sec;
	sec->data=2;
	sec->next=thr;
	thr->data=3;
	thr->next=NULL;
print(head);
int a=7;
printf("after adding an element at front\n");
insert_at_begin(&head ,a);
print(head);
printf("after adding an element at end\n");
int b = 8;
insert_at_end(&head , b);
print(head);
printf("after adding an element at given position\n");
int b1,pos;
b1=11;
pos=3;
insert_at_pos(&head , b1,pos);
print(head);
printf("deletion of element\n");
int n=7;
del(&head , n);
print(head);
printf("deletion of element at given pos\n");
int n1=2;
del(&head , n1);
print(head);

return 0;
}

