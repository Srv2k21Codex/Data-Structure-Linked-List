#include<stdio.h>
#define size 5

 int is_stack_empty(int top)
 {
 	if(top==-1)
 	return 1;
 	else 
 	return 0;
 }
 int is_stack_full(int top)
 {
 	if(top==size-1)
 	return 1;
 	else 
 	return 0;
 }
 
 void push(int stack[size],int *top, int key)
 {
 	if(is_stack_full(*top))
 	printf("\n stack is overflow");
 	else
 	{
	 *top=*top+1;
	 stack[*top]=key;
    }
 }
 
 int pop(int stack[size],int *top,int *key)
 {
 	if(is_stack_empty(*top))
 	printf("\n stack is underflow");
 	else
 	*key=stack[*top--];
 	return 0;
 }
 
 void display(int stack[size],int top)
 {
 	for(int i=top;i>=0;i--)
 	printf("%d\t",stack[i]);
 }
 
 int main()
 {
 	int stack[size];
    int top=-1;
 	push(stack,&top,45);
 	push(stack,&top,34);
 	push(stack,&top,46);
 	display(stack,top);
    return 0;
 	
 }
 