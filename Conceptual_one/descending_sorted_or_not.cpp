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

  // int flag = 0;
  // for (int i = 0; i < n - 1; i++)
  // {
  //   if (v[i] < v[i + 1])
  //   {
  //     flag = 1;
  //     break;
  //   }
  // }
  // if (flag == 0)
  // {
  //   cout << "Sorted" << endl;
  // }
  // else
  // {
  //   cout << "Not Sorted" << endl;
  // }

  vector<int> copy_v(v);

  sort(copy_v.begin(), copy_v.end(), greater<int>());

  int is_des_sorted = 1;

  for (int i = 0; i < n; i++)
  {
    if (copy_v[i] != v[i])
    {
      is_des_sorted = 0;
      break;
    }
  }
  if (is_des_sorted == 1)
  {
    cout << "Sorted" << endl;
  }
  else
  {
    cout << "Not Sorted" << endl;
  }
  return 0;
}
