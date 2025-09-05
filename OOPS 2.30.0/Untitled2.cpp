#include<iostream>
using namespace std;

 class student
 {
 	public:
 	string address;
 	string district;
 	string state;
 	 	student(string address,string district,string state)
 	 	{
 	 		this->address=address;
 	 		this->district=district;
 	 		this->state=state;
		  }
 };
 
 class s_info
 {
 	string name;
 	string id;
 	student *add1;
 	public:
 		s_info(string name,string id,student *add1)
 		{
 			this->name=name;
 			this->id=id;
 			this->add1=add1;
		 }
		 void display()
		 {
		 	cout<<"-------------------------------"<<endl;
		 	cout<<"1.NAME:"<<name<<endl;
		 	cout<<"ID:"<<id<<endl;
		 	cout<<"address:"<<add1->address<<endl;
		 	cout<<"district:"<<add1->district<<endl;
		 	cout<<"state:"<<add1->state<<endl;
		 }
 };
 int main()
 {
 	student address("wazirganj","gaya","bihar");
 	s_info s1("manoj","21-un43",&address);
 	
 	s1.display();
 	
 }
