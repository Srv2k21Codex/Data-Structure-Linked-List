#include<iostream>
using namespace std;

class count
{
	int a,b,c;
	 public:
	 count(int a=0,int b=0,int c=0)
	 {
	 	this->a=a;
	 	this->b=b;
	 	this->c=c;
	 }
	 friend count operator++(count &opt);//for preincrement
	 friend count operator++(count &opt,int);//for postincrement
	 void display();
};

 count operator++(count &opt)
 {
 	count temp;
 	temp.a=opt.a++;
 	temp.b=opt.b++;
 	temp.c=opt.c++;
 	return temp;
 }
 count operator++(count &opt,int cho)
 {
 	count temp;
 	temp.a=++opt.a;
 	temp.b=++opt.b;
 	temp.c=++opt.c;
 	return temp;
}

void count::display()
{
	cout<<"a: "<<a<<"b: "<<b<<"c:" <<c<<endl;
}
int main()
{
	count c1(12,10,3);
	c1.display();
	c1++;
	c1.display();
	++c1;
	c1.display();
}
 
