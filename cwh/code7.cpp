#include<iostream>
using namespace std;

int main(){
    
    int i;
    cout<<"series of odd number will be :";
    for (i=1;i<40;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        cout<<"\t "<<i;
    }
    return 0;
}