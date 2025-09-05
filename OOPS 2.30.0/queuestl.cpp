#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

 struct lengthcompartator{
      bool operator() (const string &a ,const string&b)
      {
      return a.length()<b.length();
      }
    };
int main()
{
    //creation of priority queue using comparator available
   /* priority_queue<int,vector<int>,greater<int>>q;

    vector<int>v={5,6,9,7,3,2,8};
    for(int x:v) q.push(x);
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;*/
    //creation of priority queue using own comparator

    /* auto comp=[] (int a,int b)
    {
        return a>=b;
    };
    priority_queue<int,vector<int>,decltype(comp)>q(comp);
    vector<int>v={5,9,23,12,8,9};
    for(int x:v) q.push(x);
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;*/
   

     /*set<string,lengthcompartator> myset;
     myset.insert("apple");
     myset.insert("banana");
     myset.insert("oranges");
     myset.insert("kiwi");

     for(const auto&elem:myset)
     {
        cout<<elem<<" ";
     }    
     cout<<endl;*/

     //declaration of comparator using lambda expression
     auto comp= [](int a,int b)
     {
        return a!=b;
     };
     vector<int>v={9,4,6,8,3,90,21,3};
     sort(v.begin(),v.end(),comp);
    cout<<"comparator declared not equalto<T>"<<endl;
     for(auto x:v)
     {
        cout<<x<<" "; 
     }
}
