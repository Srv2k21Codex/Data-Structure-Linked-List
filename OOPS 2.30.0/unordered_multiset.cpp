/* complete c++ programme to understand unordered multiset along with hashing in one simple program  */
#include<iostream>
#include<unordered_set>
#include<functional>

using namespace std;

//creating class for creating instance of class so that it can be inserted in unordered multiset

 class batch
 {
    public:
     
     int year;
     string branch_name;
     
     //creating parametrized constructor
     batch(int year,string branch_name):year(year),branch_name(branch_name){}

   //we have to define our own equal equal to operator so that insertion properly be done for instance of class using hashing
     bool operator==(const batch&b)const{
        return (year==b.year && branch_name == b.branch_name);
     }

     void printbatch()const{
        cout << "[" << year << "," <<branch_name << " ]"<<endl;
     }
 };

 class Hashbatchfunct
 {
    public:

    size_t operator()(const batch& b)const
    {
       return (hash<int>{}(b.year)+hash<string>{}(b.branch_name));
    }
 };
int main()
{
  unordered_multiset<int> ums ={4,34,1,2,2,56,34,9,59,89,2,89,2};
  
  for(auto x : ums)
  cout << x << " " ;
  cout << endl;

  //let's test function equal_range which return range of iterator one position of beginning element and second after last element

  auto its = ums.equal_range(2);
  for(auto iter =its.first; iter!= its.second ;iter++) 
  cout << *iter << " ";
  cout << endl;
  cout << "size of multiset =" << ums.size() <<endl;
  cout << "occurrence of (89) ="<< ums.count(89) <<endl;
  //we can use find function to locate element as it returns iterator
  cout << "found (2)=" << boolalpha << (ums.find(2) != ums.end() )<<endl;
  auto itemp = ums.find(2);

  //simply checking what find function  returns if we have duplicate in unordered list
  /* while( itemp != ums.end())
  {
    cout << *itemp << endl;
    itemp++;// in case of unordered multiset we can't write simply itemp+1 access the next element as we are
    // doing in vector but in this case we use increment and decrement operator
  } */
  cout << "is it empty?-->" <<ums.empty() <<endl;
  cout << "bucket count=" <<ums.bucket_count() <<endl;
  cout << "load factor =" <<ums.load_factor() <<endl;
  

  // verifying insert function return iterator of inserted element
   /* auto dev = ums.insert(44);
   cout << *dev <<endl;
   cout << "size= " <<ums.size() <<endl; */
   auto diter = ums.find(2);
   ums.erase(diter);
   cout << "size=" << ums.size() <<endl;
   unordered_multiset <batch, Hashbatchfunct > umss= {{202,"computer"},{324,"english"},{213,"mathematics"}};
   for(auto &b: umss)
   b.printbatch();
   // getting hashing value of the instance of created batch class
   Hashbatchfunct hashpow;
   for(auto &b1 :umss)
   {
    size_t hashvalue =hashpow(b1);
    cout << hashvalue << endl;
   }

   cout << umss.size() <<endl;
}