#include<iostream>
using namespace std;

class stack
{
	int size;
	int top;
	int *s;
	public:
		stack(int size)
		{
			this->size=size;
			top=-1;
			s=new int[size];
		}
	    friend stack operator+(stack &s1,int element);
		friend int operator-(stack &s2,int);
		friend stack &operator<<(ostream &os,stack &s1)
		{
			for(int i=s1.top;i>=0;i--)
			os<<"["<<s1.s[i]<<"]"<<endl;
			return s1;
		}
		bool isfull()
		{
			return (top==size-1);
		}
		bool isempty()
		{
			return(top==-1);
		}
};
stack operator+(stack &s1,int element)
{
   
	if(s1.isfull())
	cout<<"stack is overflow:"<<endl;
	else
	{
		s1.top++;
		s1.s[s1.top]=element;
	}
	return s1;
}
 int operator-(stack &s2,int)
 {
 	int element=-1;
 	if(s2.isempty())
 	cout<<"stack is underflow:"<<endl;
 	else
 	{
 	  	element=s2.s[s2.top];
 	  	s2.top--;
	}
	return element;
 }
int main()
{
	stack s2(5);
	s2+10;
	s2+20;
	s2+30;
	s2+56;
	cout<<s2-0<<endl;
	cout<<s2-0<<endl;
	cout<<s2-0<<endl;
	cout<<s2;
	//s2-
}

