#include<iostream>
using namespace std;

class A
{
	public:
		void fun()
		{
			cout<<"function of class A is executed:"<<endl;
		}
};
 
 class B:public A
 {
 	public:
 		B()
 		{
 			cout<<"constructor of class B"<<endl;
		 }
 };
 
 class c:public A
 {
 	public:
 		c()
 		{
 			cout<<"constructor of class c is executed"<<endl;
		 }
 };
 
 class D:public B,public c
 {
 	public :
 		D()
 		{
 			cout<<"constructor of D is executed:"<<endl;
		 }
 };
 
 int main()
 {
 	D obj;
 	obj.B::fun();
 	obj.c::fun();
 }
