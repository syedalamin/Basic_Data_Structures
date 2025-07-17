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
    newNode->prev = tail;
    tail = newNode;
  }
}

void print_linked_list_forword(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}

// print_linked_list_forword(head);
// cout << head->val << " " << tail->val << endl;
// head = head->next;
// tail = tail->prev;
// cout << head->val << " " << tail->val << endl;

void palindrome(Node *head, Node *tail)
{

  while (head != NULL && tail != NULL && head->prev != tail)
  {
    if (head->val != tail->val)
    {
      cout << "NO" << endl;
      return;
    }
    else
    {
      head = head->next;
      tail = tail->prev;
    }
  }

  cout << "YES" << endl;
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int val;

  while (cin >> val)
  {
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, tail, val);
  }
  palindrome(head, tail);

  return 0;
}
