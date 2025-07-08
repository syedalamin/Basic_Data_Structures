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

  tail->next = newNode; 
  newNode->prev = tail;
  tail = newNode;


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

  Node *head = NULL;
  Node *tail = NULL;



  int val;

  while (true)
  {
    cin>> val;
    if (val == -1)
    {
      break;
    }
    insert_at_tail(head, tail, val);
  }

  print_linked_list(head);

  return 0;
}
