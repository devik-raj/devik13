#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
//stock span problem
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
void calspan(int arr[], int n , int res[])
{
	res[0]=1;
	Stack *head=(Stack*)malloc(sizeof(Stack));
	push(&head,0);
	for(int i=1;i<n;i++)
	{
		while(!empty(head) && arr[top(&head)]<=arr[i])
		{
			pop(&head);
		}
		res[i]=empty(head)?i+1:i-top(&head);
		push(&head,i);
	}

}
int main()
{
	int i,j,n;
	scanf("%d",&n);
	int arr[n] , res[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
		for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
calspan(arr,n,res);
	for(i=0;i<n;i++)
	printf("%d ",res[i]);
   return 0;
}
