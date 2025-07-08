#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void deleted_at_tail(Node *&head, Node *&tail)
{
  Node *deletedNode = tail;

  tail = tail->prev;
  delete deletedNode;
  if (tail == NULL)
  {
    head = NULL;
    return;
  }
  tail->next = NULL;
}

void print_linked_list(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *tail = new Node(40);

  head->next = a;
  a->prev = head;

  a->next = b;
  b->prev = a;

  b->next = tail;
  tail->prev = b;

  deleted_at_tail(head, tail);
  deleted_at_tail(head, tail);

  print_linked_list(head);

  return 0;
}
