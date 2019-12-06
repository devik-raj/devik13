#include<stdio.h>
#include<stdlib.h>
struct Node
{
   char data;
   struct Node *next;
};
void push(struct Node** head, char a)
{
  struct Node * temp=(struct Node*)malloc(sizeof(struct Node));
   temp->data=a;
   temp->next=*head;
   *head=temp;
}
void pop(struct Node** head)
{
  *head=(*head)->next;
}
char top(struct Node** head)
{
  return (*head)->data;
}
int empty(struct Node** head)
{
  if((*head)==NULL)
  return 1;
  else
  return 0;
}
int areParenthesisBalanced(char str[])
{
   struct Node *stack = NULL;
   int f=0;
 printf("%s\n",str);
int i=0;
while(str[i]!='\0')
{
if(str[i]=='('||str[i]=='{'||str[i]=='[')
{
	push(&stack,str[i]);
}
/*else if(empty(&stack))
{
	f=1;
	break;
}*/
else if((str[i]==')'&&top(&stack)=='(') || (str[i]==']'&&top(&stack)=='[') ||(str[i]=='}'&&top(&stack)=='{'))
{
	pop(&stack);
}
else
{
	f=1;
	break;
}
i++;	
}
if(f==1 && !empty(&stack))
return 0;
else
return 1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	char exp[n];
 	scanf("%s",&exp);
 if (areParenthesisBalanced(exp))
   printf("Balanced \n");
 else
   printf("Not Balanced \n");
 return 0;
}

