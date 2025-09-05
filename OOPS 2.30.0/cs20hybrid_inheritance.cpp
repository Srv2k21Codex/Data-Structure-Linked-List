#include<iostream>
using namespace std;

 class A
 {
 	protected:
 	 int a;
 	public:
 	 void geta()
	  {
	     cout<<"enter the length of rectangle:"<<endl;
		 cin>>a;	
	  }		
 };
 
 class B:public A
 {
 	protected:
 		int b;
 		public:
 			void getb()
 			{
 				cout<<"enter the breadth of rectangle:"<<endl;
 				cin>>b;
			 }
 };
 
 class C
 {
 	protected:
 		int height;
 		public:
 		 void geth()
 		 {
 		 	cout<<"enter the height of rectangle:"<<endl;
 		 	cin>>height;
		  }
 };
 class D:public B,public C
 {
 	public:
 		void get_dimension()
 		 {
 		 	geta();
 		 	getb();
 		 	geth();
		  }
		  void display()
		  {
		  	cout<<"volume of rectangle is:"<<a*b*height<<endl;
		  }
 };
 
 int main()
 {
 	D d1;
 	d1.get_dimension();
 	d1.display();
 }
