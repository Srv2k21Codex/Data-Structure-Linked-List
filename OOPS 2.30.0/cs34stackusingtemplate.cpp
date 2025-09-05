//stack using template
#include<iostream>
using namespace std;

template<class T>
class stack
{
	private:
		T *s;
		int size;
		int top;
	public:
		stack(int size)
		{
			this->size=size;
			top=-1;
			s=new T(size);
		}
		void push(T x);
		T pop();
		void display();
};

template<class T>
void stack<T>::push(T x)
{
	if(top==size-1)
	{
		cout<<"stack is full"<<endl;
	}
	else
	{
		top++;
		s[top]=x;
		//cout<<x<<"added in stack"<<endl;
	}
}
  template <class T>
  T stack<T>::pop()
  {
  	   T x;
       if(top==-1)
	   cout<<"stack is underflow"<<endl;
	   else
	   {
	   	 x=s[top];
	   	 top--;
	   	// cout<<x<<"removed from stack"<<endl;
	   }	
	   return x;
  }
  template <class T>
  void stack<T>::display()
  {
  	for(int i=top;i>=0;i--)
  	cout<<"["<<s[i]<<"]"<<endl;
  }
  
  int main()
  {
  	template<class T>
  	stack<T>stack1(10);
  	
  	stack1.push(23);
  		stack1.push(44);
  		    stack1.push(34.6);
  			stack1.push(33);
  				stack1.push(73);
  					stack1.push(28);
  						stack1.push(20);
    cout<<stack1.pop()<<endl;
  	cout<<stack1.pop()<<endl;
  	stack1.display();
  }
