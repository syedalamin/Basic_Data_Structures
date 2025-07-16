#include <bits/stdc++.h>
using namespace std;

int main()
{
  // list<int> l;
  // list<int> l1(10);
  // cout << l.size() << endl;
  // cout << l1.size() << endl;

  // list<int> l(10, 5);

  // for (auto it = l.begin(); it != l.end(); it++)
  // {
  //   cout << *it << endl;
  // }
  // list<int> l(10, 5);
  // for (int val : l)
  // {
  //   cout << val << endl;
  // }
  // list<int> l = {10, 20, 30};
  // int a[] = {1, 2, 3, 4, 5};
  vector<int> v = {10, 20, 30, 40};
  list<int> l2(v.begin(), v.end());

  // l2.clear();
  l2.resize(6);
  if(l2.empty()){
  
    cout << "empty" << endl;
  }
  for (int val : l2)
  {
    cout << val << endl;
  }

  return 0;
}
