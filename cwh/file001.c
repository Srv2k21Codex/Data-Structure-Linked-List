#include<stdio.h>

int main()
{
    FILE *fp;
    char ch[100];
    if((fp=fopen("myfile.txt","w"))==NULL)
    printf("\n file doesn't exist:");
    else
    {
       printf("\n enter text:");
        while((ch[]=getchar())!=EOF)
          fputc(ch,fp);
    }

 fclose(fp);
}