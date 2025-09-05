#include<iostream>
#include<string.h>

using namespace std;

 class s_info
 {
 	char reg_no[20];
    char name[10];
    char subject[10];
    int marks;
     public:
      void getname();
      void subdetail();
      void show();
      void marksdetail();
      int total(int n);
      float percentage();
 };
 
 void s_info::getname()
 {
 	cout<<"enter the name of student:"<<endl;
 	cin>>name;
 	cout<<"enter the registration number:"<<endl;
 	cin>>reg_no;
 }
 void s_info::subdetail()
 {
 	cout<<"enter the subject name and sub marks:"<<endl;
 	cin>>subject>>marks;
 }
 void s_info::show()
 {
 	cout<<"--------STUDENT1--------------"<<endl;
 	cout<<"NAME:"<<name<<endl;
 	cout<<"REGISTRATION:"<<reg_no<<endl;
 }
 int s_info::total(int n)
 {
 	int sum=0;
 	for(int i=0;i<n;i++)
 	sum=sum+marks[i];
 	return sum;
 }
 void s_info::marksdetail()
 {
 	cout<<subject<<" "<<marks<<endl;
 	cout<<"marks obtained:"<<total(n);
 }
 int main()
 {
 	s_info s1;
 	s_info s2[n];
 	s1.getname();
 	for(int i=0;i<n;i++)
 	 s2[i].subdetail();
 	 s1.show();
 	 for(int i=0;i<n;i++)
 	 s2[i].marksdetail();
 	
 	
 }
 
 
 
