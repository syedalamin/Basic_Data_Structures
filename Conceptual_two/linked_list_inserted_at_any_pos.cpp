#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

void inserted_at_tail(Node *&head, Node *&tail, int val)
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

void printing_linked_list(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

void printing_linked_list_any_pos(Node *&head, int indx, int val)
{
  Node *newnode = new Node(val);

  Node *temp = head;
  for (int i = 1; i < indx; i++)
  {
    temp = temp->next;
  }
  newnode->next = temp->next;
  temp->next = newnode;
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
    inserted_at_tail(head, tail, val);
    /* code */
  }

  printing_linked_list_any_pos(head, 3, 40);
  printing_linked_list(head);

  return 0;
}
