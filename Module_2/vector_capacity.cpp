#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v;
  // cout << v.capacity()  << endl;  //! O(1)
  // v.push_back(10);
  // cout << v.capacity() << endl;

  // v.push_back(10);
  // cout << v.capacity() << endl;

  // v.push_back(10);
  // cout << v.capacity() << endl;
  // when value increased after that capacity increased by multiple before word

  v.push_back(10); //! O(1)
  v.push_back(20);
  v.push_back(30);

  // cout << v.size() << endl;  //! O(1)
  // v.clear(); //! O(n)
  // clear dose not remove value from memory but it's removed only size from memory

  v.resize(7, 100); //! O(n, k);

  for (int i = 0; i < v.size(); i++)
  {

    cout << v[i] << " ";
  }

  return 0;
}
