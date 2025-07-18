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

void deleted_any(Node *head, int idx)
{
  Node *temp = head;
  for (int i = 0; i < idx -1; i++)
  {
    temp = temp->next;
  }
  Node * deleteNode = temp->next;
  temp->next = temp->next->next;
  delete deleteNode;
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
  deleted_any(head, 0);
  print_linked_list(head);
  return 0;
}
