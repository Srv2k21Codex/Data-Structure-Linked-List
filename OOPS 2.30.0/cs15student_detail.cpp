#include<iostream>
using namespace std;

class student_info
{ 
   protected:
	char name[20];
	char r_no[11];
	 public:
	 	void get_detail();
};

class marks:public student_info
{
	char s_name[3][10];
	int s_marks[3];
	 public:
	 	marks(int marks[])
	 	{
	 		for (int i=0;i<3;i++)
	 		{
	 		s_marks[i]=marks;
	 		s_name[i]=sub;
	 	    }
		 }
	 	void display();
};

void student_info::get_detail()
{
	cout<<"enter name of student:"<<endl;
	cin.getline(name,20);
	cout<<"registration number:"<<endl;
	cin.getline(r_no,12);
}
void marks::marks_detail()
{
	cout<<"enter the subject name and marks of student:"<<endl;
	for(int i=0;i<2;i++)
	{
	
	cin>>s_name[i];
	cin.ignore();
	cin>>marks[i];
   }
	
}
 void marks::display()
 {
 	cout<<"-------------STUDENT DETAIL----------------"<<endl;
 	cout<<"NAME:"<<name<<endl;
 	cout<<"REGISTRATION NO:"<<r_no<<endl;
 	for(int i=0;i<2;i++)
 	{
 	cout<<s_name[i]<<" "<<marks[i]<<endl;
    }
 }
 
 int main()
 {
 	marks s1;
 	
	 s1.get_detail();
 	s1.marks_detail();
 	s1.display();
 }
