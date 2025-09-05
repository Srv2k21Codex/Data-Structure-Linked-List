#include<iostream>
using namespace std;

 int kthelement(int arr[],int l,int r,int k)
 {
 	  
        //code here
        int newarr[100000],count=0;
        for(int begin=l;begin<=r;begin++)
        {
            newarr[arr[begin]]=arr[begin];
        }
        cout<<newarr[8];
    }
 
 
 int main()
 {
 	int arr[8]={8,23,12,32,11,20,34,45};
    kthelement(arr,0,8,5);
 }
