#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {

    set<int> a;
    int n;
    cin >> n;

    while (n--)
    {
      int val;
      cin >> val;
      a.insert(val);
    }

    for (auto it = a.begin(); it != a.end(); it++)
    {
      cout << *it << " ";
    }
    cout << endl;
  }
  return 0;
}
