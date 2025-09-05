#include<iostream>
#include<string.h>
using namespace std;
 
 class student_info
 {
 	char name[20];
 	char reg_no[20];
 	char sub_name[5][20];
 	char sub_marks[6];
 	public:
 		void detail();
 		void display_detail();
 		void subject();
 		void display();
 		int total_marks();
 		
 };
 
 int student_info::total_marks()
 {
 	int total=0;
 	for(int i=1;i<=5;i++)
 	total=total+sub_marks[i];
 	return total;
 	
 }
 
 void student_info::detail()
 {
 	cout<<"enter name:"<<endl;
 	cin.getline(name,20);
 	cout<<"enter registration no:"<<endl;
 	cin.getline(reg_no,20);
 }
 void student_info::display_detail()
 {
 	int len1,len2;
 	len1=strlen(name);
 	cout<<"name:";
 	cout.write(name,len1);
 	cout<<endl;
 	len2=strlen(reg_no);
 	cout<<"Registration no:"<<endl;
 	cout.write(reg_no,len2);
 	cout<<endl;
 }
 void student_info::subject()
 {
 	cout<<"enter subject name: and ,marks of 3 subject"<<endl;
 	for(int i=1;i<=5;i++)
 	{
 		cin>>sub_name[i];
 		cin>>sub_marks[i];
	 }
 	
 }
 
 void student_info::display()
 {
 	int len;
 	cout<<"subject name and marks"<<endl;
 	for(int i=1;i<=5;i++)
 	{
 		
 		len=strlen(sub_name[i]);
 		cout.write(sub_name[i],len);
 		cout<<sub_marks[i];
 		
	 }
 }
 
 int main()
 {
 	student_info s1;
 	s1.detail();
 	s1.subject();
 	s1.display_detail();
 	s1.display();
 	cout<<"total"<<s1.total_marks()<<endl;
 }
