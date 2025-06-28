#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v  = {1, 2, 3, 4, 5};
  v.push_back(100);
  cout << (long long int)&v[4] << " " << (long long int)&v[5] << endl;
  return 0;
}
