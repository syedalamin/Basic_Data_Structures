// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;

//   for (int i = 1; i * i <= n; i++) //! sqrt(n)
//   {
//     cout << i << endl;
//   }

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int i = 1; i * i <= n; i++) //! n*sqrt(n)
    {
      cout << i << endl;
    }
  } 

  return 0;
}
