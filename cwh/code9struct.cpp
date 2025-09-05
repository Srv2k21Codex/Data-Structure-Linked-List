#include<iostream>
using namespace std;

struct student 
{
    int registrationno;
    char name;
    char district;
};
  union money
  {
     int rice;
     char car;
     int pounds;
     
  };

int main(){

    struct student manav;
    union money m1;
    enum meal{breakfast,lunch,dinner,milk};
    meal m2=milk;
    cout<<m2<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    m1.rice=34;
    m1.car='a';
    cout<<m1.car<<endl;
    manav.registrationno=18;
    manav.name= 's';
    manav.district='g';
    cout<<"registration no is :"<<manav.registrationno<<endl;
    cout<<"name of student :"<<manav.name<<endl;
    cout<<"district of student:"<<manav.district<<endl;


    
    return 0;
}