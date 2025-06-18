#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {1, 2, 3, 4, 5,6};
  // vector<int> v2;

  // v2 = v; //! O(N);

  // for (int i = 0; i < v2.size(); i++)
  // {
  //   cout << v2[i] << " ";
  // }

  // v.pop_back(); //! O(N);
  // v.pop_back();

  // vector<int> v2 = {100,200,300};

  // v.insert(v.begin()+2,v2.begin(), v2.end()); //!O(n+k)
  // v.erase(v.begin() + 1, v.end()-1);  //!O(n+k)

  // replace(v.begin(), v.end()-1, 2, 100);  //! O(N);

  //  for (int x : v)
  // {
  //   cout << x << " ";
  // }
  // auto it = find(v.begin(), v.end(), 2); //! O(N);

  // if (it == v.end())
  // {
  //   cout << "not found";
  // }else{
  //   cout << "found";
  // }
 
  // cout << *it << endl;


  // cout << v[2] << endl; //!O(1)
  // cout << v.at(2) << endl; //!O(1)
  // cout << v.back() << endl; //!O(1)
  // cout << v.front() << endl; //!O(1)

  for(auto it = v.begin(); it < v.end() ; it++){
    cout << *it << " ";
  }

  return 0;
}
