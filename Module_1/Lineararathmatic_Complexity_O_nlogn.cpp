#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;    //! O(1)
  cin >> n; //! O(1)

  for (int i = n; i >= 1; i /= 2) //! O(logn)
  {
    cout << i << endl;
  }

  return 0;
}

//  for (int i = 1; i <=n; i++) //! O(n)
//   {
//     cout << i << endl;
//   }

//! increment have been multiplication or division , that is (log(n))
// for (int i = 1; i <= n; i*=2) //! O(logn)
// {
//   cout << i << endl;
// }
//  for (int i = n; i >= 1; i /= 2) //! O(logn)
//   {
//     cout << i << endl;
//   }
