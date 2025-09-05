#include<stdio.h>
#include<string.h>

  int valid(char name[])
  {
  	int i;
  	for(i=0;name[i]!='\0';i++)
  	{
  	   if(!(name[i]>=48&&name[i]<=57))
		 return 0;	
	}
	return 1;
  }

 int main()
 {
 	char name[]="90455kli90";
 	if(valid(name))
 	{
 		printf("\n valid string");
	 }
	 else
	 printf("\n invalid string:");
 }
