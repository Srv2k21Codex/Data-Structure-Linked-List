#include<iostream>
using namespace std;

int main(){
    

int marks[4]={34,45,56,67},i=0;

int *p = marks;
cout<<marks[0]<<endl;
while(i<4)
{
    cout<<"the value of marks"<<i<<"is"<<marks[i]<<endl;
    i++;
    
}
cout<<*(p++)<<endl;
cout<<*(p++)<<endl;
cout<<*p<<endl;

return 0;
}