#include<iostream>
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
 	cout<<"\t\t\t NET SALARY:"<<net_salary<<endl;
 	cout<<"----------------------------------------------------"<<endl;
 }
 
 int main()
 {
 	EMPLOYEE e1;
 	e1.get_info();
 	e1.display_info();
 }