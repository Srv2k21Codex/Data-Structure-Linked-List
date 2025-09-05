// find division with precision without using division multiplication and mod operator
#include<iostream>
using namespace std;
double finddivision(int dividend , int divisor , int precision)
{
   int start = 0, end = abs(dividend) , mid;
   int  ans; double finalresult;
   while(start <= end)
   {
     mid = start + (end - start)/2;
     if(abs(divisor * mid ) == abs(dividend))
     {
        ans = mid; 
        break;
     }
     if(abs(divisor * mid ) > abs(dividend))
     {
        end = mid -1;
     }
     else{
        ans = mid;
        start = mid + 1;
     }
   }

   finalresult = ans;
   double step = 0.1;
   for(int i = 0 ; i < precision ; i++)
   {
      for(int j = finalresult ; j * divisor <= dividend ; j+= step)
      {
        finalresult = j;
      }
      step = step/10;
   }

   if(dividend < 0 && divisor < 0 || dividend > 0 && divisor > 0 )
   return finalresult;
   else
   return -finalresult;
}


int main()
{
    int arr[]={1,7,3,6,5,6};
    double division = finddivision(15 , 4 , 4);
    cout << "index will be:"<< division;
}