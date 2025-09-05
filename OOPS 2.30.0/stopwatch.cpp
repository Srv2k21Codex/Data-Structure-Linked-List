#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<direct.h>
#include<windows.h>
using namespace std;

int main()
{
    system("cls");
   // textbackground(BLUE);
    int ss=0,mm=0,hh=0;
    
    cout<<"stopwatch:"<<endl;
    cout<<"\t\t HH:"<<hh<<"MM:"<<mm<<"ss:"<<ss<<endl;
    cout<<"press akey to start:"<<endl;
    getch();
    while(!kbhit)
    {
        
        ss++;
        
        if(ss>59)
        {
            mm++;
            ss=0;
        }
        if(mm>59)
        {
        hh++;
        mm=0;
        }
            
    system("cls");
    cout<<"\n\t\t stopwatch";
    cout<<"\n\t\t"<<hh<<":"<<mm<<":"<<ss<<":";
    cout<<"press any key to stop"<<endl;
    }
    getch();
    cout<<"\t\t\ntime after pausing:"<<hh<<":"<<mm<<":"<<ss;

}