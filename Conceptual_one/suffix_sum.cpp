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

  vector<int> pre(n);
  vector<int> suf(n);
  pre[0] = v[0];
  suf[n - 1] = v[n - 1];

  for (int i = 1; i < n; i++)
  {
    pre[i] = pre[i - 1] + v[i];
  }
  for (int i = n - 2; i >= 0; i--)
  {
    suf[i] = suf[i + 1] + v[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << pre[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < n; i++)
  {

    cout << suf[i] << " ";
  }

  return 0;
}
