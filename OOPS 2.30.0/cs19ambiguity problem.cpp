#include<iostream>
using namespace std;

 class A
 {
 	public:
 		void display()
 		{
 			cout<<"classA"<<endl;
		}
 };
  
  class B
  {
  	public:
  		void display()
  		{
  		  cout<<"class b"<<endl;	
		}
  };
  
  class c:public A ,public B
  {
  	public:
  		
  };
  
  int main()
  {
  	c c1;
  	c1.A::display();
  	c1.B::display();
  }
