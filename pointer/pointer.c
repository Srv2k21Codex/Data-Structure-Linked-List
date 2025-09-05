#include<stdio.h>

int main()
{
    char a='B',*p1=&a;
    int b= 78,*p2=&b;
    float c=90,*p3=&c;
    double d=6.78,*p4=&d;

    printf("\n %d,%d, %u",sizeof(p1),sizeof(*(&a)),p1);
    printf("\n %d, %d ,%u" ,sizeof(p2),sizeof(*(&b)),p2);
    printf("\n %d, %d %u",sizeof(p3),sizeof(*(&c)),p3);
    printf("\n %d, %d %u",sizeof(p4),sizeof(*(&d)),p4);
    return 0;
}



