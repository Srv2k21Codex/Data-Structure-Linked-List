#include <iostream>
#include<string>
#include<regex>

using namespace std;

    int validate(string email)
    {
        const regex pattern("(\\d+)(\\.)(\\[a-z]+)(\\.)(\\d+)");
        if (regex_match(email,pattern));
        return 1;
    }
int main()
{
    string str;
    cout<<"enter you roll no:"<<endl;
    cin>>str;
    if(validate(str))
     cout<<"your roll no is valid:"<<endl;
     else
     cout<<"your roll no is invalid:"<<endl;

    

    return 0;
}