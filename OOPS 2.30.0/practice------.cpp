#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string name,branch,cl;
//	ofstream ofs("open.txt",ios::app);
	
//		ofs<<"saurav"<<;
//		ofs<<"computer science"<<endl;
//		ofs<<"21-cse-32"<<endl;
  //  ofs<<"saurav"<<" "<<" computer science"<<" "<<"21-cse-32"<<endl;
  //  ofs.close();
    
    ifstream ifs;
    ifs.open("open.txt");
    if(!ifs) //file.is_open()
    {
    	cout<<"file is not open"<<endl;
	}
	ifs>>name>>branch>>cl;
	while(!ifs.eof())
	{
		
	    cout<<"\t\t\tNAME:"<<name<<endl;
	    cout<<"\t\t\tBRANCH:"<<branch<<endl;
    	cout<<"\t\t\tROLL NO:"<<cl<<endl;
    	cout<<"--------------------"<<endl;
		ifs>>name>>branch>>cl;	
	}
	
    ifs.close();
}
