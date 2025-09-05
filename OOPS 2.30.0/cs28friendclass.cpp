//application of friend class incpp
#include<iostream>
using namespace std;
 
class my
{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
	friend class your;
};

 class your
 {
 	public:
 		my m1;
 		 void fun()
 		{
 			m1.x=10;
 			m1.y=90;
 			m1.z=100;
 			cout<<"value of x:"<<m1.x<<endl;
 			cout<<"value of y:"<<m1.y<<endl;
 			cout<<"value of z:"<<m1.z<<endl;
		 }
 };
 
 int main()
 {
 	your obj;
 	obj.fun();
 	return 0;
 }
