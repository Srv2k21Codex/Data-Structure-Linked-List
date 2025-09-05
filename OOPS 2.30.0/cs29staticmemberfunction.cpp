//concept of static member and static function
#include<iostream>
using namespace std;
class test
{
	private:
		int a;
		int b;
	public:
		static int count;
		test()
		{
		   a=10;
		   b=10;
		   count++;  //memory is shared among different object of same class
		}
		static int getcount()
		{
			return count;
		}
};

int test::count=0;
int main()
{
	cout<<"calling static member using class:"<<test::count<<endl;
	cout<<"calling static member function using class:"<<test::getcount()<<endl;
	test t1;
	cout<<"calling static member using object:"<<t1.count<<endl;
	cout<<"calling static member function using object:"<<t1.getcount()<<endl;
	return 0;
}
