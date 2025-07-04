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

int size_linked_list(Node *head)
{
  Node *temp = head;
  int count = 0;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}
void printing_linked_list(Node *head)
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

void delete_at_any_pos(Node *head, int idx)
{
  Node *temp = head;

  for (int i = 0; i < idx - 1; i++)
  {
    temp = temp->next;
  }

  Node *deleteNode = temp->next;
  temp->next = temp->next->next;
  delete deleteNode;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int val;

  while (cin >> val && val != -1)
  {
    inserted_at_tail(head, tail, val);
  }
  sort_linked_list(head);

  // Node *temp = head;
  // int idx = 0;
  // while (temp->next != NULL)
  // {

  //   if (temp->val == temp->next->val)
  //   {
  //     // cout << "duplicate" << endl;
  //     delete_at_any_pos(head, idx);

  //     printing_linked_list(head);
  //   }
  //   else
  //   {

  //     temp = temp->next;
  //     idx++;
  //   }
  // }

  // cout << "Not duplicate" << endl;

  //

  Node *i = head;

  while (i->next != NULL)
  {
    Node *j = i->next;
    while (j != NULL)
    {
      if (i->val == j->val)
      {
        Node *deleteNode = j;
        i->next = j->next;
        j = j->next;
        delete deleteNode;
      }
      else
      {

        j = j->next;
      }
    }
    i = i->next;
  }

  printing_linked_list(head);
  return 0;
}
