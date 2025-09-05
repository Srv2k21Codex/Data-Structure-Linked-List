#include<iostream>
using namespace std;
#include<iomanip>
#include<vector>
int main()
{
    vector<int>v={3,4,5,6,7,12};
    vector<int>::iterator iter;
    for( iter= v.begin();iter!=v.end();iter++)
    cout<<*iter<<setw(4);
    iter=v.begin()+4;
    cout << "*iter" <<*iter <<endl;
    cout << "iter-v.begin:" <<iter-v.begin() <<endl;
    iter=v.insert(iter,100);
    cout << "*iter" <<*iter <<endl;
    cout << "iter-v.begin:" <<iter-v.begin() <<endl;
    for(iter=v.begin();iter!=v.end();iter++)
    cout<<*iter<<setw(4);
}