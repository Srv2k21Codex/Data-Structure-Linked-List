#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
using namespace std;

class student
{
    private:
     string name,rollno,course,address,emailid,contactno;
    public:
    void menu();
    void insert();
    void display();
    void modify();
    void search();
    void deleted();
    
};
void student::menu()
{
    menustart:
    int choice;
    char x;
    system("cls"); 
    

    cout<<"\t\t\t----------------------------------"<<endl;
    cout<<"\t\t\t  |student management system|"<<endl;
    cout<<"\t\t\t-----------------------------------"<<endl;
    cout<<"\t\t\t 1.enter new record"<<endl;
    cout<<"\t\t\t 2.display Record"<<endl;
    cout<<"\t\t\t 3.Modify record"<<endl;
    cout<<"\t\t\t 4.search record"<<endl;
    cout<<"\t\t\t 5.delete record"<<endl;
    cout<<"\t\t\t 6.exit"<<endl;
    cout<<"\t\t\t-------------------------------"<<endl;

    cout<<"\t\t\tchoose option:[1/2/3/4/5/6]"<<endl;
    cout<<"\t\t\t-------------------------------"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
              
              do
              {
                insert();
                cout<<"\t\t\t Add another student:[y/n]"<<endl;
                cin>>x;
              } while (x=='Y'||x=='y');
              
              break;
        case 2:
        display();
        getch();
        break;
        case 3:
        modify();
        break;
        case 4:
        search();
        break;
        case 5:
         deleted();
         break;
         case 6:
          exit(0);
          break;
        default:
        cout<<"\t\t\t NO such choice available:"<<endl;
        getch();
    }
    goto menustart;

}
void student::insert()
{
    system("cls");
    fstream file;
    cout<<"\t|----------------------------------------------------|"<<endl;
    cout<<"\t|----------------|ADD STUDENT DETAIL|----------------|"<<endl;
    cout<<"\t\t\t enter name:";
    cin>>name;
    cout<<"\t\t\t enter course:";
    cin>>course;
    cout<<"\t\t\t enter roll number:";
    cin>>rollno;
    cout<<"\t\t\t enter email id: ";
    cin>>emailid;
    cout<<"\t\t\t enter address:";
    cin>>address;
    cout<<"\t\t\t give contact number:";
    cin>>contactno;
    file.open("studentrecord.txt",ios::app | ios::out);
    file<<" "<<name<<" "<<course<<" "<<rollno<<" "<<emailid<<" "<<address<<
    " "<<contactno<<"\n ";
    file.close();
}
void student::display()
{
    system("cls");
    fstream file;
    int total=1;
    cout<<"-----------------------STUDENT DETAIL----------------------"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    file.open("studentrecord.txt",ios::in);
    if(!file)
    {
        cout<<"\n\t\t No data is present....";
        file.close();
    }
    else
    {
        file>>name>>course>>rollno>>emailid>>address>>contactno;
        while(!file.eof())
        {
            cout<<"\n\t\t student no: "<<total++<<endl;
            cout<<"\n\t\t student name:"<<name;
            cout<<"\n\t\t student course:"<<course;
            cout<<"\n\t\t student ROllno:"<<rollno;
            cout<<"\n\t\t student emailid:"<<emailid;
            cout<<"\n\t\t student address:"<<address;
            cout<<"\n\t\t student contactno:"<<contactno;
            file>>name>>course>>rollno>>emailid>>address>>contactno;
        }
        if(total==1)
        {
            cout<<"\n\t\t No data is present:::"<<endl;
        }
    }

  file.close();
}
void student::modify()
{
    system("cls");
    fstream file, file1;
    string roll;
    int found=0;
    cout<<"---------------------------------------------------------------------"<<endl;
    cout<<"------------STUDENT MODIFY DETAIL-------------------------------------"<<endl;
    file.open("studentrecord.txt",ios ::in);
    if(!file)
    {
        cout<<"\n\t\t\t No data is present::";
    }
    else
    {
        cout<<"\n enter Rollno. of student which you want to modify:";
        cin>>roll;
        file1.open("record.txt",ios ::app|ios ::out);
        file>>name>>course>>rollno>>emailid>>address>>contactno;
        while(!file.eof())
        {
            if(roll!=rollno)
            {
              file1<<" "<<name<<" "<<course<<" "<<rollno<<" "<<emailid<<" "<<address<<
             " "<<contactno<<"\n ";
            }
            else
            {
               cout<<"\t\t\t enter name:";
               cin>>name;
               cout<<"\t\t\t enter course:";
               cin>>course;
               cout<<"\t\t\t enter roll number:";
               cin>>rollno;
               cout<<"\t\t\t enter email id: ";
               cin>>emailid;
               cout<<"\t\t\t enter address:";
               cin>>address;
               cout<<"\t\t\t give contact number:";
               cin>>contactno;
              file1<<" "<<name<<" "<<course<<" "<<rollno<<" "<<emailid<<" "<<address<<
             " "<<contactno<<"\n "; 
             found++;
            }
            file>>name>>course>>rollno>>emailid>>address>>contactno;
           
        }
      if(found==0)
      {
      cout<<"\n\t\t\t STUDENT ROLLNO NOT FOUND:--";
      getch();
      }
        file1.close();
        file.close();
        remove("studentrecord.txt");
        rename("record.txt","studentrecord.txt");

    }
}

void student::search()
{
    system("cls");
    fstream file;
    string roll;
    int found=0;
    file.open("studentrecord.txt",ios::in);
    if(!file)
    {
        cout<<"-----------------------------------------------------------------------"<<endl;
        cout<<"-------------------------------SEARCH WINDOW----------------------------"<<endl;
        cout<<"\n\t DATA IS NOT FOUND:"<<endl;
    }
    else
    {
        cout<<"\n\t Enter roll number of student:";
        cin>>roll;
        file>>name>>course>>rollno>>emailid>>address>>contactno;
        while(!file.eof())
        {
            if(roll==rollno)
            {
                cout<<"\n\t\t\t student name:"<<name<<endl;
                cout<<"\n\t\t student course:"<<course;
                cout<<"\n\t\t student ROllno:"<<rollno;
                cout<<"\n\t\t student emailid:"<<emailid;
                cout<<"\n\t\t student address:"<<address;
                cout<<"\n\t\t student contactno:"<<contactno;
                getch();
                found++;

            }
            file>>name>>course>>rollno>>emailid>>address>>contactno;
        }
        if(found==0)
        {
            cout<<"-----------------------------------------------------------------------"<<endl;
            cout<<"-------------------------------SEARCH WINDOW----------------------------"<<endl;
            cout<<"\n\t\t\t Student roll no not found---";
            getch();
        }
        file.close();
    }

}

void student::deleted()
{
   system("cls");
   fstream file,file1;
   int found=0;
   string roll;
   file.open("studentrecord.txt",ios::in);
   if(!file)
   {
    cout<<"\n\t\t\t NO data is present:";
   }
   else
   {
      cout<<"\n\t Enter the roll no you want to delete: "<<endl;
      cin>>roll;
      file1.open("record.txt",ios::app |ios::out);
      file>>name>>course>>rollno>>emailid>>address>>contactno;
      while(!file.eof())
      {
        if(roll!=rollno)
        {
            file1<<" "<<name<<" "<<course<<" "<<rollno<<" "<<emailid<<" "<<address<<
             " "<<contactno<<"\n ";
        }
        file>>name>>course>>rollno>>emailid>>address>>contactno;
      }
      if(found==0)
      {
        cout<<"\n\t\t Student roll is not found:"<<endl;
      }
      file1.close();
      file.close();
      remove("studentrecord.txt");
      rename("record.txt","studentrecord.txt");

   }
}


int main()
{
    student project;
    project.menu();
    return 0;
}

