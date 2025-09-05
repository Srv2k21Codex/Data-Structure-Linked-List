#include<iostream>
using namespace std;

 class student
 {
 	string student_name;
 	char sub_name[3][20];
 	int sub_marks[3];
 	float avg;
 	public:
 		void get_info();
 		float calculate_avg();
 		void display_info();
 };
 
 void student::get_info()
 {
   cout<<"enter the name of student:"<<endl;
   cin.ignore();
   getline(cin,student_name);
   for(int i=0;i<3;i++)
   {
   	 cin.sync();
   	 cin.getline(sub_name[i],20);
   	 cin>>sub_marks[i];
   }	
   
 }
 
 float student::calculate_avg()
 {
   int min=sub_marks[0],total=0;
   for(int i=0;i<3;i++)
   {
   	total+=sub_marks[i];
   	if(sub_marks[i]<min)
   	min=sub_marks[i];
   }
 	avg=total/2;
 	return avg;
 }
 void student::display_info()
 {
 	cout<<"\t\t\t--------[student name:"<<student_name<<endl;
 	cout<<"\t\t\t subject name \t marks"<<endl;
    for(int i=0;i<3;i++)
    {
      cout<<"\t\t\t "<<sub_name[i]<<"\t"<<sub_marks[i]<<endl;
	}
	cout<<"\t\t\t AVERAGE:"<<avg<<endl;
 }
 int main()
 {
 	student s1;
 	s1.get_info();
 	s1.display_info();
 }
