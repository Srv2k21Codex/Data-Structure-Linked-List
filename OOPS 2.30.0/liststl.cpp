#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

class branch
{
    public:
     int year;
     string b_name;

     void print_student() const
     {
        cout<< "[Branch name=" <<b_name <<", year=" <<year <<"]" <<endl;
     }
    /* bool operator <(const branch &other) const
     {
        return (this->year > other.year);
     }*/
};
int main()
{
    set<int> s={100,200,50,100,150,200,40};
    cout<< "size=" <<s.size() <<endl;
    s.insert(100);
    s.insert(1000);
    cout << "size=" <<s.size() <<endl;
    for(auto &x: s)
    {
        cout<< x << " ";
    }
    cout <<endl;

    int name_erased = s.erase(100);
    cout<< "num_erased=" <<name_erased<<endl;
    //cout <<s.erase(200) <<endl;
    for( auto&in: s)
    {
        cout << in <<" ";
    }
    cout <<endl;
    auto ub=s.upper_bound(150);
    auto lb= s.lower_bound(150);
    //function upperbound and lower bound return iterator of that next larger or smaller element
    cout <<"ub=" <<*ub <<endl;
    cout <<"lb=" <<*lb <<endl;

    s.insert({-100,-300,-200});
    for( auto in :s)
    {
        cout << in <<" ";
    }
    cout <<endl;
    vector<int>v={100,200,150,50,40};
    s.insert(v.begin()+2,v.end()-1);
    for(auto &in: s)
    {
        cout << in << " ";
    }
    set<branch>b={{2,"computerscience"},{1,"it"}};
    for(auto &st: b)
    st.print_student();
    
    return 0;
}