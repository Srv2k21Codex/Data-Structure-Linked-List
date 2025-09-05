#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

 class student
 {
 	private:
 		char name[20],course[30],rollno[10],emailid[30],address[30],contactno[10];
 	public:
 		void displaymenu();
 		void addstudent();
 		void displaystudent();
 		void modifylist();
 		void searchstudent();
 		void removestudent();
 };
 
 void student::displaymenu()
 {
 	menubar:
 	int choice;
 	char x;
 	system("cls");
 	
 	cout<<"\n\t\t\t|-------------------------------------------------|";
 	cout<<"\n\t\t\t|-----------|STUDENT DATABASE|--------------------|";
 	cout<<"\n\t\t\t\t 1.ENTER NEW STUDENT";
 	cout<<"\n\t\t\t\t 2.DISPLAY LIST";
 	cout<<"\n\t\t\t\t 3:UPDATE LIST";
 	cout<<"\n\t\t\t\t 4:SEARCH LIST";
 	cout<<"\n\t\t\t\t 5:REMOVE STUDENT";
 	cout<<"\n\t\t\t\t 6:EXIT";
 	cout<<"\n\t\t\t----------------------------------------------------";
 	
 	cout<<"\n\t\t Enter your choice: ";
 	cin>>choice;
 	switch(choice)
 	{
 		case 1:
 			do
 			{
 			addstudent();
 			cout<<"\n\t\t Do you want to add another one[y/n]-->";
 			cin.sync();
 			cin>>x;
 		    }while(x=='y'||x=='Y');
 			break;
 		case 2:
 			displaystudent();
 			break;
 		case 6:
 			exit(0);
 			break;
 		default:
 			cout<<"\n\t NO such choice avalilable:-->try again";
	}
	getch();
 	goto menubar;
 	
 }
 void student::addstudent()
 {
 	system("cls");
 	fstream file;
 	cout<<"\n\t\t\t-----------------------------------------------------------";
 	cout<<"\n\t\t\t---------------------ADD STUDENT--------------------------";
 	cout<<"\n\t\t\t Enter name of student:";
 	cin.sync();
 	cin.getline(name,20);
 	cout<<"\n\t\t\t Enter course enrolled:";
 	cin.sync();
 	cin.getline(course,30);
 	cout<<"\n\t\t\t Enter roll no of student:";
 	cin.sync();
 	cin.getline(rollno,10);
 	cout<<"\n\t\t\t Enter address of student:";
 	cin.sync();
 	cin.getline(address,30);
 	cout<<"\n\t\t\t Enter email id of student:";
 	cin.sync();
 	cin.getline(emailid,30);
 	cout<<"\n\t\t\t Enter contact no of student:";
 	cin.sync();
 	cin.getline(contactno,10);
 	file.open("studentrecord.txt",ios::app|ios::out);
 	file<<"\n"<<name<<"\n "<<course<<" \n"<<rollno<<" \n"<<emailid<<"\n "<<address<<" \n"<<contactno<<"\n";
 	file.close();
 	
}

void student::displaystudent()
{
	system("cls");
	fstream file;
	
	int count=1;
	cout<<"-------------------------------------------------------------------"<<endl;
	cout<<"---------------------|student detail|------------------------------"<<endl;
	file.open("studentrecord.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\t NO data is available::";
		file.close();
	}
	else
	{
      
      
	   while(!file.eof())
		{
		  cout<<"\n\t\t\t student no:"<<count++<<endl;
		  cout<<"\n\t\t\t Student name:"<<name;
		  cout<<"\n\t\t\t Student course:"<<course;
		  cout<<"\n\t\t\t Student rollno:"<<rollno;
		  cout<<"\n\t\t\t STudent emailid:"<<emailid;
		  cout<<"\n\t\t\t Student address:"<<address;
		  cout<<"\n\t\t\t COntact no:"<<contactno;
		  file>>name;
          file>>course;
         file>>rollno;
         file>>emailid;
         file>>address;
         file>>contactno;
		  
		  	
		}
		if(count==1)
		{
			cout<<"\n\t\t No data is available:";
		}
	}
    file.close();
}
 
 int main()
 {
 	student record;
 	record.displaymenu();
 	return 0;
 }
