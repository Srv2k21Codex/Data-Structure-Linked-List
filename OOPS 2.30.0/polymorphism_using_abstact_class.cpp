//write a cpp program to achieve polymorphism using abstract class
#include<iostream>
using namespace std;

class shape
{
	public:
		virtual float area()=0;//pure virtual function
		virtual float perimeter()=0;
};

class rectangle:public shape
{
	private:
		int length;
		int breadth;
	public:
		rectangle(int length=0,int breadth=0)
		{
			this->length=length;
			this->breadth=breadth;
		}
		float area()
		{
			return length*breadth;
		}
		
		float perimeter()
		{
			return 2*(length+breadth);
		}
};

class circle:public shape
{
	private:
		int radius;
	public:
		circle(int radius=0)
		{
			this->radius=radius;
		}
		float area()
		{
			return 3.14*radius*radius;
		}
		float perimeter()
		{
			return 6.28*radius;
		}
};

int main()
{
	shape *s1;//we cannot create object of abstract class
	s1=new rectangle(5);
	cout<<"area of rectangle :"<<s1->area()<<endl;
	cout<<"perimeter of rectangle:"<<s1->perimeter()<<endl;
	s1=new circle(5);
	cout<<"area of circle :"<<s1->area()<<endl;
	cout<<"perimeter of circle:"<<s1->perimeter()<<endl;
}
