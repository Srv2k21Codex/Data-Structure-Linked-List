#include<iostream>

using namespace std;

class hero
{  
   public:
	
	int health;
	int age;
	char name[13];
	
};

int main()
{
	hero h1;
	cout<<"size:"<<sizeof(h1.name)<<endl;
	cout<<"size:"<<sizeof(h1.health)<<endl;
	cout<<"size:"<<sizeof(h1.age)<<endl;
	cout<<"size:"<<sizeof(h1)<<endl;
	cout<<"size:"<<sizeof(hero)<<endl;
	return 0;
}
