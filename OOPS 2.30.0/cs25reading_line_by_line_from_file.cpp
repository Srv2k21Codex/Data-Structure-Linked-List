#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<cstdlib>
#include<string.h>
using namespace std;

class student
{
	private:
		char name[30],course[30],emailid[30],contact[10];
	public:
		void displaymenu();
		void addstudent();
		void displaystudent();
};

 void student::displaymenu()
 {
 	menubar:
 	int choice;
 	char x;
 	system("cls");
 	
 	cout<<"\n\t\t\t-------------------------";
 	cout<<"\n\t\t\t------|STUDENT DATABASE|----";
 	cout<<"\n\t\t\t 1:addstudent:";
 	cout<<"\n\t\t\t 2:displaystudent:";
 	cout<<"\n\t\t\t 3:exit";
 	cout<<"\n\t\t\t-----------------------------";
 	
 	cout<<"\n\t\t\t Enter your choice:";
 	cin>>choice;
 	switch(choice)
 	{
 		case 1:
 			do
 			{
 				
 				addstudent();
 				cout<<"\n\t\t\t Add another student[y/n]-->";
 				cin.sync();
 				cin>>x;
			 }while(x=='y'||x=='Y');
			 break;
		case 2: displaystudent();
				break;
		case 3:
			exit(0);
			break;
		default:
			cout<<"\n\t\t No such choice :Try again";
	 }
	 getch();
	 goto menubar;
	 
 }
 
 void student::addstudent()
 {
 	system("cls");
 	fstream file;
 	
 	cout<<"\t\t\t------------------------------------------------------"<<endl;
 	cout<<"\t\t\t----------------ADD STUDENT----------------------------"<<endl;
 	cout<<"\n\t\t\t Enter Name:";
 	cin.sync();
 	cin.getline(name,30);
 	cout<<"\n\t\t\t Enter COurse:";
 	cin.sync();
 	cin.getline(course,30);
 	cout<<"\n\t\t\t Enter emailid:";
 	cin.sync();
 	cin.getline(emailid,30);
 	cout<<"\n\t\t\t Enter Contact:";
 	cin.sync();
 	cin.getline(contact,10);
 	file.open("newsample.txt",ios::app|ios::out);
 	file<<name<<"\n"<<course<<"\n"<<emailid<<"\n"<<contact<<"\n";
 }
 
 void student::displaystudent()
 {
 	system("cls");
 	fstream file;
    file.open("newsample.txt",ios::in);
    if(!file)
    {
    	cout<<"FIle doesn't exist:"<<endl;
    	file.close();
	}
	else
	{
		while(!file.eof())
		{
			file>>name;
			cout<<name<<endl;
			file>>course;
			cout<<course<<endl;
			file>>emailid;
			cout<<emailid<<endl;
			file>>contact;
			cout<<contact<<endl;
		}
	}
	file.close();
 }
 int main()
 {
 	student proj;
 	proj.displaymenu();
 	return 0;
 }
