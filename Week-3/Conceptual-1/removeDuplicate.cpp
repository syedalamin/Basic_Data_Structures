#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> l;

  int n;
  while (cin >> n && n != -1)
    l.push_back(n);

  l.sort();
  l.unique();

  for (auto val : l)
  {
    cout << val << " ";
  }

  return 0;
}
