#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
     int i,*ptr;
     ptr=(int *)malloc(5 * sizeof(int));
     if(ptr=NULL)
     {
        printf("\n memory not available\n");
        exit(0);
     }
     for(i=0;i<5;i++)
      * (ptr+i)=i*2;
      ptr= (int *)realloc(ptr,9*sizeof(int));
      if(ptr==NULL)
      {
        printf("\n memory not available");
        exit(0);
      }
      for(i=5;i<9;i++)
       *(ptr+i)=i*10;
       for(i=0;i<9;i++)
       printf("%d",*(ptr+i));
       return 0;
}
