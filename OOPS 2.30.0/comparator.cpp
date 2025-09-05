#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
auto larger=[] (const int &a,const int &b)
{
    return a>b;
};

int main()
{
    vector<int,greater<int>()>vec1;
    vec1.push_back(45);
    vec1.push_back(89);
    vec1.push_back(23);
    vec1.push_back(34);
    vec1.push_back(23);
    for(int i:vec1)
    {
        cout<<i<<" ";

    }
    cout<<endl;

}