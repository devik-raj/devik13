#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
int count(struct node *n)
{
	struct node *t=n;
	int c=1;
	while(t->next!=n)
	{
		c++;
		t=t->next;
	}
	return c;
}
int loop(struct node *head)
{
	struct node *f=head;
	struct node *s=head;
		struct node *x=head;
	struct node *y=NULL;
	while(f!=NULL && f->next!=NULL && s!=NULL)
	{
		f=f->next->next;
		s=s->next;
		if(s==f)
		{
	return count(s);
		}
	}
return 0;
}

struct node *newNode(int key) 
{ 
    struct node *temp = 
        (struct node*)malloc(sizeof(struct node)); 
    temp->data = key; 
    temp->next = NULL; 
    return temp; 
} 
int main()
{
struct node *head = newNode(1); 
    head->next = newNode(2); 
    head->next->next = newNode(3); 
    head->next->next->next = newNode(4); 
    head->next->next->next->next = newNode(5); 
  
    /* Create a loop for testing */
    head->next->next->next->next->next = head->next; 
//print(head);
int j = loop(head);
printf("no of nodes in loop are %d",j) ;

}

