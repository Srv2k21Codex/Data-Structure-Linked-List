//multiple inheritance-----------------------
#include<iostream>
using namespace std;

 class A
 {
 	protected:
 	int a;
 	public:
 		void get(int n)
 		{
 			a=n;
		 }
 };
 class B
 {
 	protected:
 	int b;
 	public:
 		void get2(int n)
 		{
 			b=n;
		 }
 };
 class c:public A,public B
 {
 	public:
 		void show()
 		{
 			cout<<"value of a is:"<<a<<endl;
 			cout<<"value of b is:"<<b<<endl;
 			cout<<"sum is "<<a+b<<endl;
 	    }
 };
 
 int main()
 {
    c a1;
    a1.get(5);
    a1.get2(4);
    a1.show();
 }
