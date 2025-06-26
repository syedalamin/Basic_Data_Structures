#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {

    if (i < n / 2)
    {
      for (int s = 0; s < i; s++) cout << " ";
      cout << "\\";
      for (int s = 0; s < n - 2 * i - 2; s++)  cout << " "; 
      cout << "/" << " " << endl;
    }
    else if (i == n / 2)
    {
      for(int s= 0; s<i ; s++) cout << " ";
      cout << "X" << " "  << endl;
    }
    else
    {
      for(int s = 0 ; s < n-i-1; s++) cout << " ";
      cout << "/" ;
      for(int s = 0; s< 2*i -n; s++) cout << " ";
      cout << "\\" << " "  << endl;
    }
  }

  return 0;
}
