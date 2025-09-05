#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int ,int >m1;
    vector <int> v1{1,1,2,1};
    int k =2,count=0;
    for(int i = 0; i<v1.size();i++)
    {
        for(int j = i+1; j<v1.size() ; j++)
        {
          m1.insert(make_pair(v1[i],v1[j]));  
        }
    }
    

    for(auto x:m1)
    {
       cout << "["<<x.first << "," << x.second <<"]" ;
       if(x.first + x.second == k)
       count++;
    }

    cout << " number of pair whose sum value is equal to " << k << "is: " << count << endl;    

}