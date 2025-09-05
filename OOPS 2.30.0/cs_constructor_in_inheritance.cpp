#include<iostream>
using namespace std;

class base
{
	public:
		base()
		{
			cout<<"non param constructor of base class"<<endl;
		}
		
		base(int x)
		{
			cout<<"param constructor of base class"<<x<<endl;
		}
};

 class derived :public base
 {
 	public:
 		derived()
 		{
 			cout<<"non param of derived class"<<endl;
		 }
		 
		 derived(int y)
		 {
		 	cout<<"param constructor of derived class"<<y<<endl;
		 }
		 derived(int y,int x):base(x)
		 {
		 	cout<<"param constructor of derived class"<<y<<endl;
		 }
 };
 
 int main()
 {
 	derived d1(10,20);
 }
