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

  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    if (find(v.begin(), v.end(), v[i] + 1) != v.end())
    {
      sum++;

    }
  }
  cout << sum << endl;
  return 0;
}
