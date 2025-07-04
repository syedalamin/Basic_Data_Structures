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

void insert_at_head(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    newNode->next = head;
    head = newNode;
  }
}

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

void remove_at_any_pos(Node *&head, Node *&tail, int idx)
{

  if (head == NULL)
    return;

  if (idx == 0)
  {
    Node *deleteNode = head;
    head = head->next;
    if (head == NULL)
    {
      tail = NULL;
    }
    delete deleteNode;
    return;
  }

  Node *temp = head;
  for (int i = 1; i < idx; i++)
  {
    if (temp == NULL || temp->next == NULL)
      return;
    temp = temp->next;
  }
  if (temp->next == NULL)
    return;
  Node *deleteNodes = temp->next;
  temp->next = temp->next->next;
  if (temp->next == NULL)
  {
    tail = temp;
  }
  delete deleteNodes;
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
  int q;
  cin >> q;
  Node *head = NULL;
  Node *tail = NULL;

  while (q--)
  {
    int x, v;
    cin >> x >> v;
    if (x == 0)
    {
      insert_at_head(head, tail, v);
    }
    else if (x == 1)
    {
      insert_at_tail(head, tail, v);
    }
    else
    {
      remove_at_any_pos(head, tail, v);
    }
    print_linked_list(head);
  }

  return 0;
}
