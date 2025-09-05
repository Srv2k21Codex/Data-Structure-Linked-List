#include<iostream>
#include<string.h>


 using namespace std;
 
 class hero
 {
 	private:
    int health;
    int age;
    
    public:
    	char name [5];
    	char level;
    
	 int gethealth()
	 {
	 	return health;
     }
	 int getage()
	 {
	 	return age;
	 }
	 
	  void setter(int h1,int a1)
	  {
	  	health=h1;
	  	age=a1;
	  }	
    
 };
 
 int main()
 {
 	char name[10];
 	hero saur;
 	strcpy(name,"monu");
 	saur.level='A';
 	saur.setter(80,34);
 	cout<<"name:"<<saur.name<<endl;
 	cout<<"level:"<<saur.level<<endl;
 	cout<<"health:"<<saur.gethealth()<<endl;
 	cout<<"age:"<<saur.getage()<<endl;
 	return 0;
 	
 }
