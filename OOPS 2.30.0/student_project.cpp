#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class student
{
	protected:
	char name[20];
	char reg_no[12];
	char branch[20];
	char semester[8];
	public:
		void get_detail();
};

 class sub_info
 {
 	protected:
 		char sub_name[8][20];
 		int sub_marks[8];
 		int max_marks[8];
 		int total_obt;
 		int total;
 		int percentage;
 		public:
 			void process_info();
 };
 
 class result:public sub_info,public student
 {
 	public:
 		void display();
 };
 
 void student::get_detail()
 {
 	cout<<"enter name:"<<endl;
 	cin.sync();
 	cin.getline(name,20);
 	cout<<"enter registration number:"<<endl;
 	cin.sync();
 	cin.getline(reg_no,12);
 	cout<<"enter the branch:"<<endl;
 	cin.sync();
 	cin.getline(branch,20);
 	cout<<"enter semester:"<<endl;
 	cin.sync();
 	cin.getline(semester,8);
 }
 
 void sub_info::process_info()
 {
 	int total=0,total_obt=0;
    cout<<"enter the marks of student:";	
 	for(int i=0;i<3;i++)
 	{   cout<<"subject   ";
 		cin.sync();
 		cin.getline(sub_name[i],20);
 		cout<<"marks  ";
 		cin>>sub_marks[i];
 		cout<<"max_marks  "<<endl;
 		cin>>max_marks[i];
 		total+=max_marks[i];
 		total_obt+=sub_marks[i];
 	}
 }
 
 void result::display()
 {
 	int len;
 	cout<<"------------------------------------------------------------"<<endl;
 	cout<<"NAME: "<<name<<endl;
 	cout<<"REGISTRATION NO:"<<reg_no<<endl;
 	cout<<"BRANCH:"<<branch<<endl;
 	cout<<"SEMESTER: "<<semester<<endl;
 	cout<<"-------------------------------------------------------------"<<endl;
 	for(int i=0;i<3;i++)
 	{
 	  len=strlen(sub_name[i]);
	   cout.write(sub_name[i],len);
	   cout<<"   "<<sub_marks[i];
	   cout<<"   "<<max_marks[i];
	   cout<<endl;
	   
	}
	cout<<"    "<<total_obt<<"   "<<total;
 }
 
 int main()
 {
 	result r1;
 	r1.get_detail();
 	r1.process_info();
 	
 	r1.display();
 }
