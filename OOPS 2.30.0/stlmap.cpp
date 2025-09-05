#include<iostream>
#include<map>

using namespace std;
int main()
{
    //in map key should be unique value need not be unique-----
    map <int , string /* greater<int> comparator */> mp ={{1,"apple"},{2,"orange"},{3,"banana"},{4,"pomegrannate"},{5,"mango"},{6,"apple"},{4,"litchi"}};// this is called initialiser list
    for(auto &b: mp)
    cout << "[" <<b.first << "," << b.second << "]" <<endl;
    cout << "size of map is:" << mp.size() <<endl;
    cout << "value contained at key 3:" <<mp[3] <<endl;
    cout << "value contained at key 2:" <<mp[2] <<endl;
    //if no key is present then it throw exception and do bounce check-----
    cout << "value contained at key 4" <<mp[4] <<endl;
    /* mp.clear();
    cout << "size of map:" << mp.size() <<endl; */
   // map <int ,string >:: iterator iter =mp.find(4);
    auto iter =mp.find(4);
    cout << "value found at key 4:" <<boolalpha << "--->" << iter->second <<(mp.find(4) != mp.end()) << endl;
    
    // begin function return the iterator of the first element in map depend upon also what comparator you used
    /* auto dev = mp.begin();
    cout << "key :" << dev->first << "value:" << dev->second << endl;
    auto nest =mp.end();
    cout << "key:" << nest->first << "value:" << nest->second << endl;
 */

// upperbound and lower bound return iterator of that particular element which specify as upperbound and lowerbound
  auto ub =mp.upper_bound(3);
  auto lb = mp.lower_bound(3);
  cout << "upper bound:" <<ub->first << ub->second <<endl;
  cout << "lower bound:" << lb->first << lb->second <<endl;

  //let's do magic with some insert function of map
  // two different way to use insert function of map

  /* insert function in map return two things insert.first return a pair of iterator for key and value which you can accessed by
  insert.first->first and insert.first->second whereas insert.second return boolean value 0 or 1 which confirms whether insertion 
  took place or not . */

 auto deve= mp.insert({8,"cucumber"});
  auto doctype=mp.insert(make_pair(9,"muskmelon"));
  cout << "insertion completed" << deve.first->first <<deve.second <<endl;
  map<int ,string > m= {{10,"papaya"},{11,"banana"},{12,"pineapple"}};
  mp.insert(m.begin(),m.end());
  //erase function return iterator of next element
  auto eraser =mp.erase(mp.find(10));
 cout << "next element of erase element "<< eraser->first <<eraser->second <<endl;

  for(auto &cat :mp)
  cout << "[" <<cat.first << "," <<cat.second << "]" <<endl;


}