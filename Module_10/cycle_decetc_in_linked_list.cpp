#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};

int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(40);
  Node *d = new Node(50);

  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = a;

  Node *slow = head;
  Node *first = head;

  bool flag = false;
  while (first != NULL && first->next != NULL)
  {
    slow = slow->next;
    first = first->next->next;
    if (slow == first)
    {
      flag = true;
      break;
    }
  }

  if (flag == true)
  {
    cout << "Cycle Detected";
  }
  else
  {
    cout << "Cycle Not Detected";
  }

  return 0;
}
