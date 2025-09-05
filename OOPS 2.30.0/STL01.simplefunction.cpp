#include<iostream>
using namespace std;

 template<typename T>
 
 T area(T length,T breadth)
 {
 	T area;
 	area=length*breadth;
 	return area;
 }
 
 int main()
 {
 	int x=area<int>(23,12);
 	double y=area<double>(3.4,2.3);
 	float z= area<float>(3.1f,3.2f);
 	cout<<x<<" "<<y<<" "<<z<<endl;
 }
