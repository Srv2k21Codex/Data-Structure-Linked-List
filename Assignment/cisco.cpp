#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;

struct Compare
{

  bool operator  () (int a)
  {
    return (a > 0);
  }				//LINE I

};

int
main ()
{

  int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2 };

  vector < int >v (mynumbers, mynumbers + 12);



  int count = std::count (v.begin (), v.end (), Compare ());	//LINE II

  cout << count << endl;

  return 0;

}

