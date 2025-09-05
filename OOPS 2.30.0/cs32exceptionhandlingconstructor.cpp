//experiment with multiple try and catch block---
#include<iostream>
using namespace std;

 class rectangle
 {
 	private:
 		int length;
 		int breadth;
 	public:
 		rectangle(int length,int breadth)
 		{
 		    if(length<0||breadth<0)
			 {
			 	throw 1;
			 }
			 else if(breadth>length)
			 {
			 	throw 'a';
			 }	
			 else
			 {
			 	this->length=length;
			 	this->breadth=breadth;
			 }
		}
		void display()
		{
			cout<<"length:"<<length<<"breadth:"<<breadth<<endl;
		}
 };
 
 int main()
 {
 	int x,y;
 	cout<<"enter the length and breadth of rectangle"<<endl;
 	cin>>x>>y;
 	try
 	{
 		rectangle r1(x,y);
 		r1.display();
	 }
	 catch(int e)
	 {
	 	cout<<"invalid length or breadth of rectangle"<<endl;
	 }
	 catch(...)
	 {
	 	cout<<"breadth should smaller than length:"<<endl;
	 }
	 return 0;
 }
