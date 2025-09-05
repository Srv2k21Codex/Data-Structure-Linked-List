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
		
    friend complex operator+(complex c1,complex c2);
	void display();
 };
 
 complex operator+(complex c1,complex c2)
 {
 	complex temp;
 	temp.real=c1.real+c2.real;
 	temp.img=c1.img+c2.img;
 	return temp;
 }
 
 void complex::display()
 {
 	cout<<"complex number:"<<real<<"+"<<img<<"i"<<endl;
 }
 int main()
 {
 	complex c1(10,5),c2(4,5),c3;
 	c1.display();
 	c2.display();
 	c3=c1+c2;
 	c3.display();
 }
