#include<stdio.h>
#define maxsize 10
  int b_sort(int arr[maxsize],int length)
  {
  	int i,j,flag=1,temp;
  	for(i=0;i<length-1&&flag;i++)
  	{
  		
  	  for(j=0;j<length-i-1;j++)
		{  
		   
		  if(arr[j]<=arr[j+1])
		   {
		   	flag=0;
		   }
		   	else 
		  	{
		  	  temp=arr[j];
			  arr[j]=arr[j+1];
			  arr[j+1]=temp;
			  flag=1;
			}
		    
		}	
	}
	return flag;
  }
int main()
{
   int arr[]={40,30,20,10,60};
    b_sort(arr,5);
    for(int i=0;i<5;i++)
	printf("%5d",arr[i]);	
}
