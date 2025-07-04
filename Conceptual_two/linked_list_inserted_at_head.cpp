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

void inserted_at_head(Node *&head, int val)
{ 
  Node *newnode = new Node(val);
  newnode->next = head;
  head = newnode;
}

void print_linked_list(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {

    cout << temp->data << " ";
    temp = temp->next;
  }
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
    inserted_at_head(head, val);
  }

  print_linked_list(head);

  return 0;
}
