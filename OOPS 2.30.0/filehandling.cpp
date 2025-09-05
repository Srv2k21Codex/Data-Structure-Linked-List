#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
 
 int main()
 {
  string name,course,emailid;
 	fstream file;
// 	cout<<"enter the name of student:"<<endl;
// 	cin.getline(name,20);
// 	cout<<"enter the course of student:"<<endl;
// 	cin.getline(course,20);
// 	cout<<"enter the emailid of student:"<<endl;
// 	cin.getline(emailid,20);
// 	file.open("newsample.txt",ios::app|ios::out);
// 	if(!file)
// 	{
// 		cout<<"file is not created"<<endl;
//	 }
//	 else
//	 {
//	 	file<<name<<"\n"<<course<<"\n"<<emailid<<"\n";
//	 	file.close();
//	 }
	 file.open("newsample.txt",ios::in);
	 cout<<"------------STUDENT DETAIL-------------------"<<endl;
	 getline(file,name);
	 cout<<name;
	 getline(file,course);
	 cout<<course;
	 getline(file,emailid);
	 cout<<emailid;
	 file.close();
	 return 0;
	 
	 
 }
