#include<iostream>
#include<cstring>
using namespace std;

 class student
 {
 	char student_name[40];
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
   cin.sync();
   cin.getline(student_name,40);
   for(int i=0;i<3;i++)
   {
   	cout<<"enter the name of subject:"<<i+1<<endl;
   	 cin.sync();
   	 cin.getline(sub_name[i],20);
   	 cout<<"enter the marks of subject:"<<i+1<<endl;
   	 cin>>sub_marks[i];
   }	
   
 }
 
 float student::calculate_avg()
 {
   float min=sub_marks[0],total=0;
   for(int i=0;i<3;i++)
   {
   	total+=sub_marks[i];
   	if(sub_marks[i]<min)
   	{
	   min=sub_marks[i];
    }
   }
 	avg=((total-min)/2);
 	return avg;
 }
 void student::display_info()
 {
 	cout<<"\t\t\t--------[student name:"<<student_name<<"]--------"<<endl;
 	cout<<"\t\t\t subject name \t marks"<<endl;
    for(int i=0;i<3;i++)
    {
      cout<<"\t\t\t "<<sub_name[i]<<"<---->"<<sub_marks[i]<<endl;
	}
	cout<<"\t\t\t AVERAGE:"<<calculate_avg()<<endl;
	cout<<"\t\t\t -------------------------------------------------"<<endl;
 }
 int main()
 {
 	student s1;
 	s1.get_info();
 	s1.display_info();
 }
