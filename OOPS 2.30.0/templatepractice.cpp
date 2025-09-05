#include<iostream>
using namespace std;
template<class T>

class stack
{
	int size;
	int top;
	T *s;
	public:
		stack(int size)
		{
			this->size=size;
			top=-1;
			s=new T[size];
		}
		void push(T key);
		T pop();
		void display();
};
 template<class T>
 void stack<T>::push(T key)
 {
 	if(top==size-1)
 	cout<<"stack is overflow"<<endl;
 	else
 	{
 		top++;
 		s[top]=key;
	 }
 }
template<class T>
T stack<T>::pop()
{
  T element;
  if(top==-1)
  {
  	cout<<"stack is underflow"<<endl;
  }
  else
  {
  	element=s[top];
  	top--;
  }
  return element;
}
template<class T>
void stack<T>::display()
{
	for(int i=top;i>=0;i--)
	cout<<"["<<s[i]<<"]"<<endl;
}
int main()
{
	
	stack<int>s1(10);
//	s1.push(45);
//	s1.push(23);
//	s1.push(21);
//	cout<<s1.pop()<<endl;
	stack<float>s2(10);
	s2.push(2.3);
	s2.push(3.45);
	s2.display();
}
