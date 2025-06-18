#include <bits/stdc++.h>
using namespace std;

int main()
{
  // vector<int> v; //!type 1 , O(1)

  // vector<int> v(5); //!type 2 , O(n);

  // vector<int> v(10, -1);  //!type 3 element + value O(n)
  // vector<int> v2(v); //!type 4; O(n)
  // int a[5] = {1,2,3,4,5};
  // vector<int> v(a, a+5); //!type 5 ; O(n)

  vector<int> v = {1, 2, 3, 4, 5, 6}; //! type 6 ; O();

  
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  // cout << v.size() << endl;
  return 0;
}
