#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

 class student
 {
 	char student_name[30];
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
   cin.getline(student_name,30);
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
   	min=sub_marks[i];
   }
 	avg=(total-min)/2;
 	return avg;
 }
 void student::display_info()
 {
	
 	cout<<"\t\t\t--------[student name:"<<student_name<<"]---------"<<endl;
 	cout<<"\t\t\t subject name \t marks"<<endl;
    for(int i=0;i<3;i++)
    {
      cout<<"\t\t\t "<<sub_name[i]<<"\t"<<sub_marks[i]<<endl;
	}
	cout<<"\t\t\t AVERAGE:"<<calculate_avg()<<endl;
	cout<<"\t\t\t---------------------------------------------------------"<<endl;
 }
 int main()
 {
 	int choice,i=0;
	student s1[10];
	menubar:
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1:ENTER STUDENT INFO"<<endl;
	cout<<"\t\t\t 2:DISPLAY INFO"<<endl;
	cout<<"\t\t\t 3:EXIT"<<endl;
	cout<<"\t\t\t---------------------------------------"<<endl;
	do
	{
         cout<<"\t\t\t enter your choice:-->";
		 cin>> choice;
		 switch( choice )
		 {
			case 1:
			 s1[i].get_info();
			 i++;
			 break;
			case 2:
			    system("cls");
			    for(int j=0;j<i;j++)
				s1[j].display_info();
				break;
			case 3:exit(0);
			      break;
			default:
			cout<<"no such choice is available:"<<endl;
		 }
		 goto menubar;
	}while(choice!=3);
	
 }
