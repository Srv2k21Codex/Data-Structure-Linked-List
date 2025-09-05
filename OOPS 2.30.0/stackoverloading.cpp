#include<iostream>
using namespace std;

const int MAX_VALID=2023;
const int MIN_VALID=1800;

class date
{
   int day;
   int month;
   int year;
    public:
    date(int day,int month,int year)
    {
        this ->day =day;
        this->month=month;
        this->year=year;
    }
    bool isleap(int year)
    {
        return (((year%4==0)&&(year%100!=0))||(year%400==0));
    }
    bool Isvaliddate()
    {
       if(year>MAX_VALID ||year<MIN_VALID)
       return false;
       if(month<1 ||month>12)
       return false;
       if(day<1||day>31)
       return false;

       if(month==2)
       {
        if(isleap(year))
         return (day<=29);
        else
         return (day<=28);
        }
        if(month==4||month==6||month==9||month==11)
        return (day<=30);
        return true;
    }
    friend ostream& operator<<(ostream &o,date &d1)
    {  
       o<<d1.day<<"/"<<d1.month<<"/"<<d1.year;
       if(d1.Isvaliddate())
       return o; 
       else
       cout<< "invalid date"<<endl;
    }
    int operator-(date &d1)
    {
        if(d1.day>=day&& d1.Isvaliddate())
        return d1.day-day;
        else
        return 0;
    }
    
};
int main()
{
   date d1(28,2,2022);
   date d2(24,3,2023);
   cout<<d1<<endl;
   cout<<d2<<endl;
   cout<<"no of days:"<<d2-d1<<endl;
}