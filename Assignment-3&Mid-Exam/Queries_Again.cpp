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

int cnt_size(Node *head)
{
  Node *temp = head;

  int cnt = 0;

  while (temp != NULL)
  {
    cnt++;
    temp = temp->next;
  }
  return cnt;
}

void insert_at_head(Node *&head, Node *&tail, int v)
{
  Node *newNode = new Node(v);

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
  }
}

void insert_at_tail(Node *&head, Node *&tail, int v)
{

  Node *newNode = new Node(v);

  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
  }
  else
  {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}

void insert_at_any(Node *&head, Node *&tail, int x, int v)
{
  Node *newNode = new Node(v);
  Node *temp = head;
  int sz = cnt_size(head);

  if (x == 0)
  {
    insert_at_head(head, tail, v);
  }
  else if (x == sz)
  {
    insert_at_tail(head, tail, v);
  }
  else
  {
    for (int i = 1; i < x; i++)
    {
      temp = temp->next;
    }
    newNode->next = temp->next;
    if (temp->next != NULL)
    {
      temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
  }
}

void print_linked_list_forword(Node *head)
{
  Node *temp = head;

  cout << "L -> ";
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
  cout << endl;
}
void print_linked_list_backword(Node *tail)
{
  Node *temp = tail;
  cout << "R -> ";
  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->prev;
  }
  cout << endl;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int q;
  cin >> q;

  while (q--)
  {
    int x, v;
    cin >> x >> v;
    int sz = cnt_size(head);

    if (x < 0 || x > sz)
    {
      cout << "Invalid" << endl;
    }
    else if (sz == 0)
    {
      insert_at_head(head, tail, v);
      print_linked_list_forword(head);
      print_linked_list_backword(tail);
    }
    else if (x == sz)
    {
      insert_at_tail(head, tail, v);
      print_linked_list_forword(head);
      print_linked_list_backword(tail);
    }
    else
    {
      insert_at_any(head, tail, x, v);
      print_linked_list_forword(head);
      print_linked_list_backword(tail);
    }
  }

  return 0;
}
