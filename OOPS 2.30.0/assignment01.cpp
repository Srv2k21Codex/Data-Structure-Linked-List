#include<iostream>
#include<stdlib.h>
using namespace std;

 class EMPLOYEE
 {
 	int employee_number;
 	string employee_name;
 	int basic;
 	int DA;
 	int IT;
 	int net_salary;
 	public:
 		void get_info();
 		void display_info();
 };
 
 void EMPLOYEE:: get_info()
 {
 	cout<<"enter the employee number:"<<endl;
 	cin>>employee_number;
 	cout<<"enter the employee name:"<<endl;
 	cin.ignore();
 	getline(cin,employee_name);
 	cout<<"enter the basic salary of employee:"<<endl;
 	cin>>basic;
 	DA=0.52*basic;
 	IT=0.30*basic;
 	net_salary=DA+basic-IT;
 }
 
 void EMPLOYEE::display_info()
 {
 	cout<<"\t\t\t---------------[EMPLOYEE ID:"<<employee_number<<"]---------"<<endl;
 	cout<<"\t\t\t EMPLOYEE NAME:"<<employee_name<<endl;
 	cout<<"\t\t\t BASIC:"<<basic<<endl;
 	cout<<"\t\t\t DA(dearance allowance):"<<DA<<endl;
 	cout<<"\t\t\t IT(inclome tax):"<<IT<<endl;
 	cout<<"\t\t\t NET SALARY:"<<net_salary<<endl;
 	cout<<"----------------------------------------------------"<<endl;
 }
 
 int main()
 {
 	int choice;
 	EMPLOYEE E1[50];
 	int i=0,j=0;
 	cout<<"\t\t\t------------------------"<<endl;
 	cout<<"\t\t\t 1 READ DATA:"<<endl;
 	cout<<"\t\t\t 2 DISPLAY DATA:"<<endl;
 	cout<<"\t\t\t 3 exit"<<endl;
 	cout<<"-----------------------------"<<endl;
 	do
 	{
 	cout<<"enter your choice"<<endl;
 	cin>>choice;
 	 switch(choice)
 	 {
 	     case 1:E1[i].get_info();
 	            i++;
 	           break;
 	     case 2:for(int j=0;j<i;j++)
 	            E1[j].display_info();
 	            break;
 	     case 3:exit(0);
 	           break;
 	     default:
 	     cout<<"no such choice is available"<<endl;
 	 }
 	}while(choice!=3);
 }
