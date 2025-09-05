#include<iostream>
using namespace std;

class car//base
{
	public:
		virtual void start()=0;
		/*to achieve run time polymorphism function should override*/
		virtual void stop()=0;
};

 class swift:public car
 {
 	public:
 		void start()
 		{
 			cout<<"\n swift started:"<<endl;
		 }
		void stop()
		{
			cout<<"\n swift stopped:"<<endl;
		}
 };
 
 class innova:public car
 {
 	 public:
 	 	void start()
 	 	{
 	 		cout<<"\n innova started:"<<endl;
		  }
		  void stop()
		  {
		  	cout<<"\n innova stopped:"<<endl;
		  }
 };
 
 int main()
 {
 	car *c;
 	swift s1;
 	c=&s1;
 	c->start();
 	c->stop();
 	c=new innova();
 	c->start();
 	c->stop();
 }
		
		
