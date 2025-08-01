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
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    tail->next = newNode;
    tail = tail->next;
  }
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

void sort_linked_list(Node *head)
{
  for (Node *i = head; i->next != NULL; i = i->next)
  {
    for (Node *j = i->next; j != NULL; j = j->next)
    {
      if (i->val > j->val)
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

  Node *i = head;
  while (i != NULL)
  {
    Node *j = i;
    while (j->next != NULL)
    {
      if (i->val == j->next->val)
      {
        Node *deleteNode = j->next;
        j->next = j->next->next;

        delete deleteNode;
      }
      else
      {
        j = j->next;
      }
    }
    i = i->next;
  }

  print_linked_list(head);
  return 0;
}
