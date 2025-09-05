#include<iostream>
#include<vector>
#include<list>

using namespace std;
int main()
{
   vector<int>v={3,4,5,6,2};
   list<int>l={20,30,40};
   v.insert(v.begin(),l.begin(),l.end());
   vector<item>::iterator iter;
   for(iter=v.begin();iter!=v.end();iter++)
   cout<<*iter<<" ";
}