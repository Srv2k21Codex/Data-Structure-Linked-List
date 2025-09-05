#include<iostream>
using namespace std;

class base
{
	public:
		void virtual display()
		{
			cout<<"display function of base class executed:"<<endl;
		}
};

class derived:public base
{
	public:
		void displaay()
		{
			cout<<"display function of derived class executed:"<<endl;
		}
};

int main()
{
	base *p=new derived();
	p->display();
}
