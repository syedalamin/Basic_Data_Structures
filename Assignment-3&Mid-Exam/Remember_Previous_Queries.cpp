#include <bits/stdc++.h>
using namespace std;

void print_linked_list_forword(list<int> l)
{
  cout << "L -> ";
  for (auto val : l)
  {
    cout << val << " ";
  }
  cout << endl;
}

void print_linked_list_backword(list<int> l)
{
  l.reverse();
  cout << "R -> ";
  for (auto val : l)
  {
    cout << val << " ";
  }
  cout << endl;
}

int main()
{
  list<int> l;

  int q;
  cin >> q;
  while (q--)
  {
    int x, v;
    cin >> x >> v;
    int sz = l.size();

    if (x == 0)
    {
      l.push_front(v);
      print_linked_list_forword(l);
      print_linked_list_backword(l);
    }
    else if (x == 1)
    {
      l.push_back(v);
      print_linked_list_forword(l);
      print_linked_list_backword(l);
    }
    else if (x == 2)
    {
      if (v < 0 || v >= sz)
      {
        print_linked_list_forword(l);
        print_linked_list_backword(l);
      }
      else
      {
        auto it = next(l.begin(), v);
        l.erase(it);
        print_linked_list_forword(l);
        print_linked_list_backword(l);
      }
    }
  }
  return 0;
}
