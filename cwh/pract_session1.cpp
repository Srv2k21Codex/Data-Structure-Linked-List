//********practice question by using concept of operator,control statement,and many more*****

//program1 :calculator for addition multiplication substraction and devision

/*#include<iostream>
using namespace std;

int display_menu()
{
    int choice;
    cout<<"--------calculate in click-----------\n";
    cout<<" 1:  addition\n";
    cout<<" 2:   substraction\n";
    cout<<" 3:  multiplication\n";
    cout<<" 4:  division\n";
    cout<<" 5:   exit\n";
    cout<<"----------------THANKS-----------------\n";
   // cout<<" please enter your choice\n";
    //cin>>choice;
    return choice;
}

   int addition()
   {
     float num1,num2,result;
     cout<<"enter your first number:\n";
     cin>>num1;
     cout<<"enter your second number:\n";
     cin>>num2;
     result=num1+num2;
     cout<<"your sum will be:\n"<<result;
     return 0;
   }

int substraction()
   {
     float num1,num2,result;
     cout<<"enter your first number:\n";
     cin>>num1;
     cout<<"enter your second number:\n";
     cin>>num2;
     result=num1-num2;
     cout<<"your difference will be:\n"<<result;
     return 0;
   }
   int multiplication()
   {
     float num1,num2,result;
     cout<<"enter your first number:\n";
     cin>>num1;
     cout<<"enter your second number:\n";
     cin>>num2;
     result=num1+num2;
     cout<<"your product will be:\n"<<result;
     return 0;
   }
   int division()
   {
     float num1,num2,result;
     cout<<"enter your first number:\n";
     cin>>num1;
     cout<<"enter your second number:\n";
     cin>>num2;
     if(num2==0)
     {
       cout<<"divide by zero error\n";
       exit(0);
         
     }
    
     result=num1/num2;
     cout<<"your answer will be:\n"<<result;
     return 0;
   }

int main(){

     int choice;
     display_menu();
     cout<<"\n please enter your choice";
     cin>>choice;
     switch(choice)
     {
        case 1:addition();
            break;
        case 2:substraction();
            break;
        case 3:multiplication();
            break;
        case 4:division();
            break;
        case 5:exit(0);
            break;
        default:
          cout<<"no such option is available\n";
          break;
     }
     
    
    return 0;
}*/
  // programme 2:----print counting from 1 to 100-----
// #include<iostream>
// #include<iomanip>
// using namespace std;
// 
// int main(){
//    int i=1;
//    
//    do
//    {
//       cout<<setw(5)<<i;
//       i++;
//
//    } while (i<100);
//    
//
//        
//   return 0;
// }
//************************************************program3**************************************

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    int n,i,j;
    cout<<"enter up to which table has to be find out: \n";
    cin>>n;
    for(j=1;j<=10;j++)
    {
      for(i=2;i<=n;i++)
      {
         cout<<j*i<<setw(6);
      }
      cout<<endl;
        
    }
    return 0;
}