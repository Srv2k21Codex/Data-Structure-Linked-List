#include<iostream>
#include<set>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;
    m.insert(pair <int ,string>(1,"saurav"));
    m.insert(pair <char ,string>(2,"vikash"));
    m.insert(pair<int,string> (3,"madhuri"));
    map<int ,string>::iterator iter;

    for(iter=m.begin();iter!=m.end();iter++)
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }
return 0;


}