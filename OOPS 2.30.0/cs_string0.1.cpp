#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

int main()
{
	string str1="programmingz";
	string str2="PROgrANNIng";
	string::reverse_iterator it;
    for(int i=0;str1[i]!='\0';i++ )
	{
	  if(str1[i]>=97&&str1[i]<=122)
	  {
	  	str1[i]=str1[i]-32;
	  }	
	}
	for(int i=0;str2[i]!='\0';i++)
	{
	  if(str2[i]>=65&&str2[i]<=97)
	  {
	  	str2[i]=str2[i]+32;
		  }	
	}	
	cout<<str1<<endl;
	cout<<str2<<endl;
}
