#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;
    stack<char> st;

    for (char c : s)
    {
      if (st.empty())
        st.push(c);
      else if (st.top() == '0' && c == '1')
        st.pop();
      else if (st.top() == '1' && c == '0')
        st.pop();
      else
        st.push(c);
    }
    if (st.empty())
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
