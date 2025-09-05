#include<iostream>
#include<vector>
#include<list>

using namespace std;
void print_list(list<int> &l1)
{
    list<int>::iterator iter;
    for(iter=l1.begin();iter!=l1.end();iter++)
    {
        cout<<*iter<<" ";
    }
}
int main()
{
    //creation and initialisation of list
    list<int>l1={3,4,5,2,6};
    cout<<"list 1 is:"<<endl;
    print_list(l1);
    cout<<endl;
    list<int>l2=l1;//use of = operator it will copy the element of that list
    cout<<"list 2 is:"<<endl;
    print_list(l2);
    cout<<endl;
    //function front ,back ,isempty , rbegin ,rend in list

    cout<<"list.front="<<l1.front()<<endl;
    cout<<"list.back="<<l1.back()<<endl;
    cout<<"islistempty:"<< boolalpha <<l1.empty()<<endl;
    cout<<"list1rbegin():="<<*l1.rbegin()<<" list1rend:="<<*l1.rend()<<endl;
    //rbegin and rend or begin and is iterator pointer so for getting value
    //at these pointer we need to dereference it

    cout<<"vec1[2]"<<endl;

    vector<int>vec1={1,2,3,4,5};
    vector<int>::iterator itr;
    vec1.insert(vec1.begin()+2,100);
    for(itr=vec1.begin();itr!=vec1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<vec1.at(2)<<endl;
    cout<<endl;
    //in vector there is direct access of element

//insert the given number at given position in list

    print_list(l1);
    cout<<"list1.insert(it,500)"<<endl;
    list<int>::iterator it=l1.begin();
    while(*it!= 5 && it!=l1.end())//it will insert the value at before position of 
    //desired element
    it++;
    l1.insert(it,500);
    print_list(l1);
    cout<<endl;

    cout<<"using erase function"<<endl;
    l1.erase(it);
    print_list(l1);
    cout<<endl;
}