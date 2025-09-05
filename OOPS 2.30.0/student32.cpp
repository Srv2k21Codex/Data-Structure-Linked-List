#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class student
{
    private:
     char name[30], branch[30], roll[30] ,email [30],address[30];
     public:
      void adddetail();
      void displaydetail();
      void searchdetail();
      void deletedetail();
      void modifydetail();
};

void student::adddetail()
{
    system("cls");
    fstream file;
    cout << "enter the name of student:"<<endl;
    cin.sync();
    cin.getline(name,20);
    cout << "enter the branch of student:"<<endl;
    cin.sync();
    cin.getline(branch,20);
    cout << "enter the roll of student:"<<endl;
    cin.sync();
    cin.getline(roll,20);
    cout << "enter the email of student:"<<endl;
    cin.sync();
    cin.getline(email,20);
    cout << "enter the address of student:"<<endl;
    cin.sync();
    cin.getline(address,20);
    file.open("suras.txt",ios::app |ios::out);
    file<< name <<"\n" << branch <<"\n" <<roll <<"\n" <<email <<"\n" <<address <<"\n";
    file.close();

}

int main()
{
    student s1;
    s1.adddetail();
}