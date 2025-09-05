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
			b=20;
			count++;
		}
};
int test::count=0;
int main()
{
	test t1,t2;
	cout<<"count:"<<t1.count<<endl;
	cout<<"count:"<<t2.count<<endl;
	cout<<"count:"<<test::count<<endl;
	return 0;
}
