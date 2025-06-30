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

void insert_at_any_position(Node *&head, int idx, int val)
{
  Node *newnode = new Node(val);
  Node *temp = head;
  for (int i = 1; i < idx; i++) //! O(n);
  {
    temp = temp->next;
  }
  newnode->next = temp->next;
  temp->next = newnode;
  
}

void print_linked_list(Node *head)
{
  Node *temp = head;
  while (temp != NULL) //! O(n)
  {
    cout << temp->val << " ";
    temp = temp->next;
  }
}

int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);

  head->next = a;
  a->next = b;

  insert_at_any_position(head, 2, 100);
  insert_at_any_position(head, 1, 200);

  print_linked_list(head);

  return 0;
}
