#include<iostream>
using namespace std;

template<class T,class R>

 T add (T x, R y)
{
	return x+y;
}

int main()
{
	cout<<add(2,4)<<endl;
	cout<<add(4.5f,8)<<endl;
	cout<<add(9.78f,9.34f)<<endl;
	cout<<add(23,4.5)<<endl;
}
