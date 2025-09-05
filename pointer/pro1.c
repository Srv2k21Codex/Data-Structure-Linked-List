#include<stdio.h>
#include<conio.h>
int *fun(int *p, int n);
int main()
{
    int n=5 ,arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr;
    ptr=fun(arr,n);
    printf("value of arr =%p,value of ptr=%pvalur of *ptr=%d\n",arr ,ptr,*ptr);
    return 0;
}
int *fun(int *p ,int n)
{
    p=p+n;
    return p;
}

