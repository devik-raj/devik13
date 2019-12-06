#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//work properly
/*
testcase1:5
5 1 2 4 3
o/p:yes
testcase2: 5
3 2 5 1 4
o/p: no
*/
typedef struct stack
{
    int data;
    struct stack *next;
}Stack;
void push(Stack **s,char data)
{
    Stack *new1=(Stack *)malloc(sizeof(Stack));
    new1->data=data;
    new1->next=*s;
    *s=new1;    
}
void pop(Stack **s)
{
    *s=(*s)->next;
}
int top(Stack **s)
{
   int data=(*s)->data;
   return data; 
}
int poll(Stack **s)
{
    int data=(*s)->data;
    (*s)=(*s)->next;
    return data;
}
int empty(Stack *s)
{
    if(s==NULL)
        return 1;
     return 0;
}
int street(int arr[],int n)
{
	Stack *head=(Stack*)malloc(sizeof(Stack));
	int i=0,k=0;
	while(i<n)
	{
		while(!empty(head) && top(&head)==k+1)
		{
			k++;
			pop(&head);
		}
		if(arr[i]!=k+1)
		{
			push(&head,arr[i]);
		}
		else
		k++;
		i++;
	}
	while(!empty(head) &&top(&head)==k+1)
	{
		k++;
		pop(&head);
	}
	return k;
}
int main()
{
	int i,n,k;
	scanf("%d",&n);
	int arr[n] ;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	k=street(arr,n);
	printf("%d\n",k);
	if(k==n)
	printf("yes");
	else
	printf("no");
   return 0;
}
