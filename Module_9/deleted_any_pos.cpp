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

void deleted_at_any_pos(Node * head, int idx )
{
  Node * temp = head;
  for(int i = 1; i<idx; i++){
    temp = temp->next;
  }
  Node * deletedNode = temp->next;

  temp->next =  temp->next->next;
  temp->next->prev = temp;
  delete deletedNode;
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

  deleted_at_any_pos(head, 1);
  deleted_at_any_pos(head, 1);


  print_linked_list(head);

  return 0;
}
