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

void print_linked_list_max_min(Node *head)
{
  Node *temp = head;
  int min_val = INT_MAX;
  int max_val = INT_MIN;
  int cnt = 0;
  while (temp != NULL)
  {
    min_val = min(min_val, temp->val);
    max_val = max(max_val, temp->val);
    temp = temp->next;
    cnt++;
  }
  int def_val = abs(min_val - max_val);
  cout << def_val;
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

  print_linked_list_max_min(head);

  return 0;
}
