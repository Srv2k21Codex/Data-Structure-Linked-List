#include<stdio.h>

void thousand(int a,int b,int c,int d)

{
    char *ones[]={"","one","two","three","four","five","six","seven","eight","nine"};
    char *el[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
    char *tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
    printf("%s thousand\t",ones[a]);
    if(b!=0)
    printf("%s hundred\t",ones[b]);
    //all condition satisfied for two digit different case:
     if(c==0)
       printf("%s\t",ones[d]);
      if(c==1)
       printf("%s\t",el[d]);
      if(c&d!=0 &&c!=1)
       printf("%s %s\t",tens[c],ones[d]);
      if(c!=0&&d==0)
       printf("%s\t",tens[c]);
    
}

int main()
{
    int num,i,dig[4];
    printf("\n enter the four digit:");
    scanf("%d",&num);
    if(num==0)
    printf("\n zero");
    for(i=3;num>0;i--)
    {
        dig[i]=num%10;
        num=num/10;
    }
    
    thousand(dig[0],dig[1],dig[2],dig[3]);
    
}