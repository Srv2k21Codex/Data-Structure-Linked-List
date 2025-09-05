#include<iostream>

using namespace std;

class rectangle
{
	int length;
	int breadth;
	 public:
	 	rectangle(int length,int breadth)
	 	{
	 		this->length=length;
	 		this->breadth=breadth;   //to escape from name ambiguity we use this pointer
		 }
		                            //this->length refer for member of class while length refer for parameter of class
		 rectangle(rectangle &rect)
		 {
		 length=rect.length;
		 breadth=rect.breadth;
	     }
	     void display();
};

 void rectangle::display()
 {
 	cout<<"length:"<<length;
 	cout<<"breadth:"<<breadth;
 }
 
 int main()
 {
 	rectangle r(10,5);
 	r.display();
 	rectangle r1(r);
 	r1.display();
 }


