#include<iostream>

using namespace std;

class hero
{
	private:
		int health;
		int age;
	public:
		char level;
	  int gethealth()
	  {
	  	return health;
      } 
	   int getage()
	  {
		return age;
	  }
	void sethealth(int h1)
	  {
		health=h1;
	  }
	void setage(int h2)
	  {
		age=h2;
	  }
		
};
int main()
{
	hero saurav;
	saurav.level='A';
	cout<<" level is"<<saurav.level<<endl;
	saurav.sethealth(34);
	saurav.setage(24);
	cout<<"health is:"<<saurav.gethealth()<<endl;
	cout<<"age is:"<<saurav.getage()<<endl;
	return 0;
}

