#include<stdio.h>
#include<conio.h>
void func(int x,int y, int *ps, int *pd , int *pp);
int main(void)
{
    int a,b,sum,diff,prod;
    a=6;
    b=4;
    func(a,b,&sum,&diff,&prod);
    printf("sum=%d,difference=%d,product=%d\n",sum,diff,prod);
    return 0;
}
void func(int x,int y, int *ps, int *pd, int*pp)
{
    *ps=x+y;
    *pd=x-y;
    *pp=x*y;
}