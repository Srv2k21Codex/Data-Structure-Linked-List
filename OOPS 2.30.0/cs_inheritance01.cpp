#include<iostream>
using namespace std;

 class x
 {
 	int a;
 	int b;
 	 public:
 	  void setvalue(int a,int b)
 	  {
 	  	this->a=a;
 	  	this->b=b;
	   }
	   int mul()
	   {
	   	 int result;
	   	 result=a*b;
	   }
};

class y:private x
{
	public:
		void value()
		{
			setvalue(4,5);
		}
		void display()
		{
			cout<<"answer is:"<<mul();
		}
};
int main()
{
	y num1;
	num1.value();
	num1.display();
	//num1.setvalue(3,4);is inaccesible because it can only access using public member function .
}
