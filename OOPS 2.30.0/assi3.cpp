#include<iostream>
using namespace std;

class complex
{
    int real;
    int img;
    public:
     complex(int real=0,int img=0)
     {
        this->real=real;
        this->img=img;
     }
     complex operator+(complex &c1)
     {
        complex temp;
        temp.real=real+c1.real;
        temp.img=img+c1.img;
        return temp;
     }
     friend ostream& operator<<(ostream &ofs,complex &c1)
     {
        ofs<<c1.real<<"+"<<c1.img<<"i";
        return ofs;
     }
};
 
int main()
{
    complex c1(3,4);
    complex c2(5,6);
    complex c3;
    c3=c1+c2;
    cout<<"complex no 1:"<<c1<<endl;
    cout <<"complex no 2:"<<c2<<endl;
    cout<<"sum is:"<<c3<<endl;
}