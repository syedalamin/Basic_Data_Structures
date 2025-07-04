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

int main()
{
  Node *head1 = NULL;
  Node *tail1 = NULL;

  int val;

  while (cin >> val && val != -1)
  {
    inserted_at_tail(head1, tail1, val);
  }
  // printing_linked_list(head1);
  // cout << size_linked_list(head1) << endl;

  // -------------------

  Node *head2 = NULL;
  Node *tail2 = NULL;
  while (cin >> val && val != -1)
  {
    inserted_at_tail(head2, tail2, val);
  }
  // printing_linked_list(head2);
  // cout << size_linked_list(head2) << endl;

  int sz1 = size_linked_list(head1);
  int sz2 = size_linked_list(head2);
  if (sz1 != sz2)
  {
    cout << "Value Are Not Same" << endl;
  }
  else
  {

    Node *temp1 = head1;
    Node *temp2 = head2;
    int flag = 0;
    while (temp1 != NULL || temp1 != NULL)
    {
      // cout << temp1->val << " " << temp2->val << endl;

      if (temp1->val != temp2->val)
      {
        flag = 1;
        break;
      }
      temp1 = temp1->next;
      temp2 = temp2->next;
    }

    if (flag == 0)
    {
      cout << "Value Are Same" << endl;
    }
    else
    {
      cout << "Value Are Not Same" << endl;
    }
  }
  return 0;
}
