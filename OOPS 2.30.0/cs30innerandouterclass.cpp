#include<iostream>
using namespace std;

class outer
{
	public:
		 static int a;
		void fun()
		{
		  cout<<"function of outer class:"<<endl;	
		}
		class inner
		{
			public:
				int b;
				void display()
				{
					cout<<"display of inner class"<<endl;
					cout<<"value of a is:"<<a<<endl;
				}
		};
		inner i;
};
int outer::a=10;

int main()
{   outer::inner i;
    outer j;
    j.fun();
	i.display();
}
