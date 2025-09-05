#include<iostream>
using namespace std;

class count
{
	int value;
	 public:
	 	count(int x=0)
	 	{
	 		value=x;
		 }
		 count operator++();
		 count operator++(int);
		 void display();
};

 count count::operator++()//for prefix increment
 {
 	count temp;
 	temp.value=++value;
 	return temp;
 }
 
 count count::operator++(int)//for postfix increment
 {
 	count temp;
 	temp.value=value++;
 	return temp;
 }
 
 void count::display()
 {
 	cout<<"count:"<<value<<endl;
 }
 
 int main()
 {
 	count count1(10),result;
 	count1.display();
 	 result=count1++;
 	 result.display();
 	 result=++count1;
 	 result.display();
 }
