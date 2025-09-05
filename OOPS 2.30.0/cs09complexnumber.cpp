#include<iostream>
using namespace std;

class complex
{
	int real;
	int img;
	 public:
	  complex(int real=0,int img=0)
	  {
	  	this->real=real;
	  	this->img=img;
	  }
	  complex add(complex x);
	  void display();
};

 complex complex::add(complex x)
 {
 	complex temp;
 	temp.real=real+x.real; 
 	temp.img=img+x.img;
 	return temp;
 }
 
 void complex::display()
 {
 	cout<<"complex number: "<<real<<"+"<<img<<"i";
 }
 
 int main()
 {
 	complex c1(5);
 	c1.display();
 	complex c2(4,2);
 	c2.display();
 	complex c3;
 	c3=c1.add(c2);
 	c3.display();
 }
 
 
