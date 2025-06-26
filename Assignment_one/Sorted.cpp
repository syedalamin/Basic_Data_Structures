#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    vector<int> cpy_v(v);
    sort(cpy_v.begin(), cpy_v.end());

    int flag = 1;

    for (int i = 0; i < n; i++)
    {
      if (cpy_v[i] != v[i])
      {
        flag = 0;
      }
    }

    if (flag == 1)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}
