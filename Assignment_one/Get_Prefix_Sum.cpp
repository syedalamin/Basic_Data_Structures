#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  vector<long long int> pref(n);

  pref[0] = v[0];

  for (int i = 1; i < n; i++)
  {
    pref[i] = pref[i - 1] + v[i];
  }

  reverse(pref.begin(), pref.end());

  for (int i = 0; i < n; i++)
  {
    cout << pref[i] << " ";
  }

  return 0;
}
