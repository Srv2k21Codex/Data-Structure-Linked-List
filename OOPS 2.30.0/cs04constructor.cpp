#include<iostream>
using namespace std;

class rectangle
{
	int length;
	int breadth;
	 public:
	 	rectangle(int l=0,int b=0)
	 	{
	 		setlength(l);
	 		setbreadth(b);
		}
		rectangle(rectangle &rect)
		{
			length=rect.length;
			breadth=rect.breadth;
		}
		void display();
		void setlength(int l);
		void setbreadth(int b);
		int getlength();
		int getbreadth();
};

 void rectangle::display()
 {
 	cout<<"length"<<length;
 	cout<<"breadth"<<breadth;
 	cout<<endl;
 }
 
 void rectangle::setlength(int l)
 {
 	if(l>=0)
 	length=l;
 	else
 	length=0;
 }
 
 void rectangle::setbreadth(int b)
 {
 	if(b>=0)
 	breadth=b;
 	else
 	breadth=0;
 }
 
 int rectangle::getlength()
 {
 	return length;
 }
 
 int rectangle::getbreadth()
 {
 	return breadth;
 }
 
 int main()
 {
 	rectangle r;
 	cout<<"r"<<endl;
 	r.display();
 	rectangle r2(3);
 	cout<<"r2"<<endl;
 	r2.display();
 	rectangle r1(10,3);
 	cout<<"r1"<<endl;
 	r1.display();
 	rectangle r3(r1);
 	r3.display();
 	
 }
