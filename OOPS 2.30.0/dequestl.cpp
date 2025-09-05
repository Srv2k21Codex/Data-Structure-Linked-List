#include<iostream>
#include<deque>
#include<bits/stdc++.h>

using namespace std;

void printqueue(deque<int> &q1)
{
    for(auto it=q1.begin();it!=q1.end();it++)
    {
        cout<<*it<<" ";
    }
}
void print_reverse(deque<int>&q2)
{
    deque<int>::reverse_iterator itr;
    for(itr=q2.rbegin();itr!=q2.rend();itr++)
    {
        cout<<*itr<<" ";
    }
}
int main()
{
    deque<int>q1={4,5,6,2,8};
    //we will observe behaviour of some function
    cout<<"size of queue"<<q1.size()<<endl;
    cout<<"q[3]-->:"<<q1[3]<<endl;
    deque<int>q2=q1;
    cout<<"deque.front():"<<q1.front()<<endl;
    cout<<"deque.back():"<<q1.back()<<endl;
    cout<<"element of first queue"<<endl;
    printqueue(q1);
    cout<<endl;
    cout<<"element of second queue"<<endl;
    print_reverse(q2);
    cout<<endl;

    auto it=q1.begin()+2;
    q1.insert(it,10);
    printqueue(q1);
    cout<<endl;
    auto it1=q2.begin()+2;auto it2=it1+2;
    q2.erase(it1,it2);
    cout<<"element of q2"<<endl;
    print_reverse(q2);
    cout<<endl;

    //performing push_front function and pop_back 
    q1.push_front(67);
    q1.push_back(45);
    q1.push_front(21);
    q1.push_front(11);
    q1.push_front(90);
    printqueue(q1);
    cout<<endl;
    q2.push_front(32);
    q2.pop_back();
    q2.pop_front();
    printqueue(q2);
    cout<<endl;

}