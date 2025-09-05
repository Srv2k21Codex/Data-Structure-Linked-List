#include<iostream>
#include<vector>
#include<unordered_set>
#include<functional>

using namespace std;

class batch
{
    public:
  int year;
  string branch_name;
  batch(int year,string branch_name):year(year),branch_name(branch_name){}


  bool operator==(const batch &b)const{
    return (this->year==b.year && this->branch_name==b.branch_name);
  }
   
   void print_batch()const{
    cout<<"["<<year<<",branch="<<branch_name<<"]"<<endl;
   }
};

class Hashbatch
{
    public:
  size_t operator()( const batch &b)const{
    return (hash<int>{}(b.year)+ hash<string>{}(b.branch_name));
  }
  
};
int main()
{
    unordered_set<int>s1={120,23,42,12,23, 45,23};
    vector<int>v={43,23,12,34,67};
    for(auto itr=s1.begin();itr!=s1.end();itr++)
    cout<<*itr <<" ";
    cout<<endl;
    cout<<"size=" <<s1.size() <<endl;
    //s1.clear();
   // cout<<"size=" <<s1.size() <<endl;
    //now we will see count function of unordered set
    cout<< "42 is found or not:" <<s1.count(42) <<endl;
    cout<< boolalpha <<"found (23)" <<((s1.find(23)!=s1.end()))<<endl;
    cout<<"is list empty:"<< boolalpha <<s1.empty() <<endl;
    cout<<"bucketcount="<<s1.bucket_count() <<", load factor" <<s1.load_factor() <<endl;
    auto result=s1.insert(12);
    cout<<"is 12 inserted :"<<boolalpha <<result.second<<*(result.first)<<endl;
    cout<< s1.size() <<endl;
    s1.insert(v.begin(),v.end());
    cout<< s1.size() <<endl;
    for(auto x :s1)
    {
        cout<< x << " ";
    }
    cout <<endl;
    auto result2=s1.find(43);
    auto result1=s1.find(42);
    s1.erase(result2,result1);
    cout<< s1.size() <<endl;
     for(auto x :s1)
    {
        cout<< x << " ";
    }
    cout <<endl;

   /*  batch b1={2002,"computer"};
    batch b2={2002,"computer"};
    batch b3={2004,"computer"};
    cout<<boolalpha<< (b1==b2);
    cout<< boolalpha <<(b1==b3);
    b1.print_batch();
    Hashbatch hasfuction;
    size_t hashvalue =hasfuction(b1);
    cout<< hashvalue <<endl; */
    unordered_set<batch,Hashbatch>uss={{3004,"computer"},{1232,"science"}};
    for(auto &b:uss)
    b.print_batch();
    
    
    
    
    


}