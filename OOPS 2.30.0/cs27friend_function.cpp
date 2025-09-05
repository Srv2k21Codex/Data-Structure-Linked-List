#include<iostream>
using namespace std;

class test
{
	public:
		int x;
	protected:
		int y;
	private:
		int z;
		friend void fun();
};

void fun()
{
	test t;
	t.x=10;
	t.y=30;
	t.z=45;
	cout<<"value of x:"<<t.x<<endl;
	cout<<"value of y:"<<t.y<<endl;
	cout<<"value of z:"<<t.z<<endl;
}
int main()
{
	fun();
}
