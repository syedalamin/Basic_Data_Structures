#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  reverse(v.begin(), v.end());

  for (string s : v)
  {
    cout << s << " ";
  }

  return 0;
}
