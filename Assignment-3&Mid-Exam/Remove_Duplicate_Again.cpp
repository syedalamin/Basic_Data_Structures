#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> n;

  int v;
  while (cin >> v && v != -1)
  {
    n.push_back(v);
  }
  n.sort();
  n.unique();

  for (auto val : n)
  {
    cout << val << " ";
  }

  return 0;
}
