#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
  list<int> l;

  void push(int v)
  {
    l.push_back(v);
  }
  void pop()
  {
    l.pop_back();
  }
  int top()
  {
    return l.back();
  }
  int size()
  {
    return l.size();
  }
  int empty()
  {
    return l.empty();
  }
};

int main()
{

  myStack st;

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int val;
    cin >> val;
    st.push(val);
  }

  while (!st.empty())
  {
    cout << st.top() << endl;
    st.pop();
  }

  return 0;
}
