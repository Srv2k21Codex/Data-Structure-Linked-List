#include<stdio.h>
int main()
{
    int a=5;
    int *ptr;
    ptr=&a;
    printf("\n value of address=%p ",*ptr++);
    printf("\n value of a=%p",ptr+1);
    printf ("\n value of a = %p",*++ptr);
    return 0;
}