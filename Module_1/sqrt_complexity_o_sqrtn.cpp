#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) //! O(sqrt(n))
  {
    if (n % i == 0)
    {
      cout << i << endl;
    }
  }

  return 0;
}
// for (int i = 1; i <= sqrt(n); i++) //! O(sqrt(n))
// {
//  cout << i << endl;
// }
