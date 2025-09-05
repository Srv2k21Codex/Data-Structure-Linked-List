//write a cpp program for quick sort
#include<iostream>
using namespace std;

int Partitionindex(int arr[],int s,int e)
{
    int count =0,pivot=arr[s];
    for(int i =s+1;i<=e;i++)
    {
        if(arr[i]<pivot)
        count++;
    }
    int pivotindex= s+count;
    swap(arr[s],arr[pivotindex]);
    int j=s,k=e;
    while(j<pivotindex && k >pivotindex)
    {
       while(arr[j]<pivot)
       j++;
       while(arr[k]>pivot)
       k--;
      if(j<pivotindex && k>pivotindex)
       swap(arr[j++],arr[k--]);
    }
}
void Quicksort(int arr[],int s,int e)
{
   if(s>=e)
   return;
   int p =Partitionindex(arr,s,e);
   Quicksort(arr,s,p-1);
   Quicksort(arr,p+1,e);
}
int main()
{
    int arr[]={9,3,2,7,4,8,8,1};
    int s=0,e=8;

    Quicksort(arr,s,e-1);
    for(int i =0;i<e;i++)
    cout<< arr[i]<<" ";
}