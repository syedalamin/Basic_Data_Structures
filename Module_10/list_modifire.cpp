#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<int> l = {10, 20, 30, 40, 50, 60};
  list<int> l2 = {100, 200};

  // l2 = l;
  // l2.assign(l.begin(), l.end());

  // l.push_back(40);
  // l.push_front(100);

  // l.pop_back();
  // l.pop_front();

  // l.insert(10, 2);

  // cout << *next(l.begin(), 2);

  // l.insert(next(l.begin(), 2), 100);
  // l.insert(next(l.begin(), 4), 1300);

  // l.insert(next(l.begin(), 2), l2.begin(), l2.end());

  // l.erase(next(l.begin(), 2));
  // l.erase(next(l.begin(), 2), next(l.end(), 5));

  // replace(l.begin(), l.end(), 30, 100);

  auto it = find(l.begin(), l.end(), 20);

  if (it == l.end())
  {
    cout << "not found" << endl;
  }
  else
  {

    for (int v : l)
    {
      cout << v << endl;
    }
  }

  return 0;
}
