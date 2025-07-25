#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  stack<int> a;
  queue<int> b;

  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    a.push(val);
  }

  for (int i = 0; i < m; i++)
  {
    int val;
    cin >> val;
    b.push(val);
  }

  if (a.size() != b.size())
  {
    cout << "NO" << endl;
  }
  else
  {
    bool flag = true;
    while (!a.empty() && !b.empty())
    {
      if (a.top() != b.front())
      {
        flag = false;
        break;
      }
      a.pop();
      b.pop();
    }
    if (flag)
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
