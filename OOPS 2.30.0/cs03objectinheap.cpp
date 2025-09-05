#include<iostream>
using namespace std;

class rectangle
{
	public:
		int length;
		int breadth;
		int area(){ return length*breadth;}
		int perimeter(){ return 2*(length+breadth);}
};

int main()
{
//	rectangle r1;
//	rectangle *ptr;
//	ptr=&r1;
//	ptr->length=10;
//	ptr->breadth=3;
//	cout<<"area is:"<<ptr->area()<<endl;
//	cout<<"perimeter is:"<<ptr->perimeter()<<endl;
 rectangle *p= new rectangle;
 p->length=10;
 p->breadth=5;
 cout<<"area is:"<<p->area()<<endl;
 cout<<"perimeter is:"<<p->perimeter()<<endl;
}
