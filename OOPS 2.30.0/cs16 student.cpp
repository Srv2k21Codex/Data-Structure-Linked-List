#include<iostream>
#include<string.h>
using namespace std;

class s_info
{
	char s_name[3];
	int s_marks[3];
	 public:
	  s_info(char *name,int *marks)
	  {
	  	for(int i=0;i<3;i++)
	  	{
	  	  s_name[i]=name[i];
		  s_marks[i]=marks[i];	
		}
	  }
	  void display();
};

void s_info:: display()
{
   for(int i=0;i<3;i++)
   {
   	 cout<<s_name[i]<<" "<<s_marks[i]<<endl;
   }	
}

int main()
{
	char name[3];
	int marks[3];
	cout<<"enter the subject and marks of student:"<<endl;
	for(int i=0;i<3;i++)
	{
		cin.getline(name,20);
		cin>>marks[i];
	}
	s_info s1(name,marks);
	s1.display();
}
