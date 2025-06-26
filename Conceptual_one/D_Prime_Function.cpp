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
    int flag = 1;
    for (int i = 2;  i <= sqrt(n); i++)
    {
      if (n % i == 0)
      {
        flag = 0;
        break;
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
