#include<iostream>
#include<string.h>

using namespace std;

class student
{
	char reg_no[20];
	char name[20];
	char s_name[5][20];
	int s_marks[5];
	 public:
	 	void read_info();
	 	void display_info();
	 	int process_data();
	 	float percentage();
};

void student::read_info()
{
	cout<<"enter the name of student:"<<endl;
	cin.getline(name,20);
	cout<<"enter the reg_no:"<<endl;
	cin.getline(reg_no,20);
	cout<<"enter the subject name and marks secured in 5 subject:"<<endl;
	for (int i=0;i<5;i++)
	{
		cin.ignore();
		cin.getline(s_name[i],20);
		cin>>s_marks[i];
	}
}

void student::display_info()
{
	int len;
	cout<<"------------STUDENT----------------"<<endl;
	cout<<"NAME:"<<name<<endl;
	cout<<"REGISTRATION NO:"<<reg_no<<endl;
	cout<<" subject "<<"  "<<"marks"<<endl;
	for(int i=0;i<5;i++)
	{
		len=strlen(s_name[i]);
		cout.write(s_name[i],len);
		cout<<s_marks[i];
	}
}

int main()
{
	student s1;
	s1.read_info();
	s1.display_info();
}