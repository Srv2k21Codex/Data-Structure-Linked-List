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
	  friend ostream& operator <<(ostream &o,complex &c);	
	  
 };
 
 ostream& operator<<(ostream &o,complex &c)
 {
 	o<<c.real<<"+"<<c.img<<"i";
 }
 
 int main()
 {
 	complex c1(5,2);
 	cout<<c1;
 }
 
  
