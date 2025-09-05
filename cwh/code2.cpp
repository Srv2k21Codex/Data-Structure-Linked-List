#include<iostream>

using namespace std;

int main()
{

     int n;
     cin>>n;
     int i=2;
     while(i<=n/2)
     {
        if(n%i==0)
        {
            cout<<"number is  prime"<<i<<endl;
        }
        else
        {
            cout<<"number is not prime"<<i<<endl;
        }
        i=i+1;
     }
      
      return 0;
}