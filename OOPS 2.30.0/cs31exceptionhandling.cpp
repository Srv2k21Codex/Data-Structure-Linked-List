//exception handling:-basic
#include<iostream>
using namespace std;

int  division(int a,int b) throw(double)
{
	if(b==0)
	throw 1.8;
	return a/b;
}

int main()
{
	int x,y,z;
	cout<<"\n enter the value of a and b:"<<endl;
	cin>>x>>y;
	try
	{
		z=division(x,y);
		cout<<"ans:"<<z<<endl;
		
	}
	catch(double e)
	{
		cout<<"\n divide by zero error;"<<endl;
	}
	return 0;
}
