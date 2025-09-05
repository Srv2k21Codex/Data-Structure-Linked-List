#include<stdio.h>
#include<stdlib.h>

  struct stack
  {
    int size;
    int top;
    int *s;
  };

 void create(struct stack *st)
 {
    printf("\n enter the size:");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));
 }

 void display(struct stack st)
 {
    int i;
    for (i=st.top;i>=0;i--)
    {
        printf("%d\t",st.s[i]);
    }
 }

 void push(struct stack *st,int x)

 {
    if(st->top==st->size-1)
    printf("\n stack is overflow");
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
 }

 int pop(struct stack *st)
 {
    int x=-1;
    if(st->top==-1)
    printf("\n stack is underflow");
    else
    {
       x=st->s[st->top--];
    }
    return x;
 }
 int main()
 {
    struct stack st;
    create(&st);
    push(&st,20);
    push(&st,30);
    pop(&st);
    pop(&st);
    pop(&st);


    display(st);
    return 0;
 }