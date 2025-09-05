#include<stdio.h>

int main()
{
    int i,num,dig[4],n;
    char *ones[]={"","one","two","three","four","five","six","seven","eight","nine","ten"};
    char *el[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
    char *tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
    printf("\n enter the four digit:");
    scanf("%d",&n);
    num=n;
    for(i=0;num>0;i++)
    {
        dig[i]=num%10;
        num=num/10;
    }
    if(i==4)
    printf("%s thousand",ones[dig[3]]);
    if(i>=3 &&dig[2]!=0)
    printf("%s hundred",ones[dig[2]]);
    if(i>=2)
    {
        if(dig[1]==0)
        printf("%s ",ones[dig[0]]);
        else if(dig[1]==1)
        printf("%s",el[dig[0]]);
        else 
        printf("%s %s",tens[dig[1]],ones[dig[0]]);

    }
    if(i==1&&n!=0)
    printf("%s",ones[dig[0]]);
    if(n==0)
    printf("zero");
    return 0;


    }

