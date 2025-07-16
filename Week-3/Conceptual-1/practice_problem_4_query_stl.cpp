#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode *prev;
  ListNode(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void print_linked_list_forword(list<int> l)
{
  for (auto it : l)
  {
    cout << it << " ";
  }
  cout << endl;
}
void print_linked_list_backword(list<int> l)
{
  l.reverse();
  for (auto it : l)
  {
    cout << it << " ";
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
    int idx, val;
    cin >> idx >> val;

    int sz = l.size();

    if (idx < 0 || idx > sz)
    {
      cout << "Invalid" << endl;
    }
    else if (idx == 0)
    {

      l.push_front(val);
      print_linked_list_forword(l);
      print_linked_list_backword(l);
    }
    else if (idx == sz)
    {

      l.push_back(val);
      print_linked_list_forword(l);
      print_linked_list_backword(l);
    }
    else
    {

      auto it = next(l.begin(), idx);
      l.insert(it, val);
      print_linked_list_forword(l);
      print_linked_list_backword(l);
    }
  }

  return 0;
}
