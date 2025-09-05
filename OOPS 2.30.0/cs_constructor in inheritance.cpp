//constructor in inheritance--------------------------------
#include<iostream>
#include<iomanip>
using namespace std;

 class base
 {
 	protected:
 	int a;
 	int b;
 	public:
 		base (int a=0,int b=0)
 		{
 			this->a=a;
 			this->b=b;
		 }
		 
 };
 
 class derived:public base
 {
 	protected:
 	int c;
 	int d;
 	public:
 		derived(int a,int b,int c,int d):base(a,b)
 		{
 			this->c=c;
 			this->d=d;
		 }
		 void display()
		 {
		 	cout<<"value of a ,b ,c ,d is:"<<a<<b<<c<<d<<setw(20)<<endl;
		 	cout<<"sum is:"<<a+b+c+d<<endl;
		 }
 };
 int main()
 {
 	derived d1(8,9,5,6);
 	d1.display();
 }


 
