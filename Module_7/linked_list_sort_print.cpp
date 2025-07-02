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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
  Node *newnode = new Node(val);
  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
  }
  tail->next = newnode;
  tail = tail->next;
}

void print_linked_list(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}

void sort_linked_list(Node *head)
{
  for (Node *i = head; i->next != NULL; i = i->next)
  {
    for (Node *j = i->next; j != NULL; j = j->next)
    {
      if (i->val < j->val)
      {
        swap(i->val, j->val);
      }
    }
  }
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int val;

  while (true)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, tail, val);
  }

  sort_linked_list(head);

  print_linked_list(head);
  return 0;
}
