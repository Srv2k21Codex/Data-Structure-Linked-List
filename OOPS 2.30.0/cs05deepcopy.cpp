#include<iostream>
using namespace std;

class test
{
	public:
	    int a;
    	int *p;
	
		test(int x)
		{
			a=x;
			p=new int[a];
		}
		
		test(test &t)
		{
			a=t.a;
			p=new int[a];
			
			if(p)
			{
				for(int i=0;i<a;i++)
				p[i]=t.p[i];
			}
			
		}
};

int main()
{
	test t(3);
	t.p[0]=1;
	cout<<"a:"<<t.a<<""<<"p[0]:"<<t.p[0];
	test t2(t);
	cout<<"a:"<<t2.a<<" "<<"P[0]:"<<t2.p[0];
}
