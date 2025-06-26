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

  // prefix

  vector<int> pref(n);
  vector<int> suf(n);

  pref[0] = v[0];
  suf[n - 1] = v[n - 1];
  for (int i = 1; i < n; i++)
  {
    pref[i] = pref[i - 1] + v[i];
  }

  for (int i = n - 2; i >= 0; i--)
  {
    suf[i] = suf[i + 1] + v[i];
  }

  for (int i = 0; i < n; i++)
  {
    if (suf[i] == pref[i])
    {
      cout << i << endl;
    }
  }
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    cout << suf[i] << " ";

  }
  cout << endl;
  for (int i = 0; i < n; i++)
  {

    cout << pref[i] << " ";
  }

  return 0;
}
