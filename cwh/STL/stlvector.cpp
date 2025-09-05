#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
	vector<int>v={2,4,5,6,7,9};
	v.push_back(45);
	v.push_back(34);
	v.pop_back();
	for(int x:v)
	{
		cout<<x<<setw(5);
	}
	
	vector<int>:: iterator itr;
	cout<<endl;
	for(itr=v.begin();itr!=v.end();itr++)
	{
		cout<<*itr<<setw(5);
	}
	return 0;
}